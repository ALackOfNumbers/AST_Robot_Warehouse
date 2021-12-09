cmake_minimum_required(VERSION 3.5)
project(messages_package)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(messages_node src/messages_node.cpp)
target_include_directories(messages_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

install(TARGETS messages_node
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

#Added interfaces to cmake file 
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  #Message files
  "msg/Coordinates.msg"
  "msg/Delivery.msg"
  "msg/Item.msg"
  "msg/RobotDistance.msg"
  "msg/RobotLocation.msg"
  "msg/Map.msg"
  "msg/Row.msg"
  #Service files
  "srv/Delivery.srv"
  "srv/PickUpItem.srv"
  "srv/PutDownItem.srv"
  #Action files
  "action/ChargeRobot.action"
  "action/MoveItem.action"
  "action/Order.action"
)

ament_package()

