// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:msg/RobotLocation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__STRUCT_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'robot_location'
#include "messages_package/msg/detail/coordinates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__msg__RobotLocation __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__msg__RobotLocation __declspec(deprecated)
#endif

namespace messages_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotLocation_
{
  using Type = RobotLocation_<ContainerAllocator>;

  explicit RobotLocation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_location(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_number = 0ll;
    }
  }

  explicit RobotLocation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_location(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_number = 0ll;
    }
  }

  // field types and members
  using _robot_number_type =
    int64_t;
  _robot_number_type robot_number;
  using _robot_location_type =
    messages_package::msg::Coordinates_<ContainerAllocator>;
  _robot_location_type robot_location;

  // setters for named parameter idiom
  Type & set__robot_number(
    const int64_t & _arg)
  {
    this->robot_number = _arg;
    return *this;
  }
  Type & set__robot_location(
    const messages_package::msg::Coordinates_<ContainerAllocator> & _arg)
  {
    this->robot_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::msg::RobotLocation_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::msg::RobotLocation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::msg::RobotLocation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::msg::RobotLocation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::RobotLocation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::RobotLocation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::RobotLocation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::RobotLocation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::msg::RobotLocation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::msg::RobotLocation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__msg__RobotLocation
    std::shared_ptr<messages_package::msg::RobotLocation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__msg__RobotLocation
    std::shared_ptr<messages_package::msg::RobotLocation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotLocation_ & other) const
  {
    if (this->robot_number != other.robot_number) {
      return false;
    }
    if (this->robot_location != other.robot_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotLocation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotLocation_

// alias to use template instance with default allocator
using RobotLocation =
  messages_package::msg::RobotLocation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__STRUCT_HPP_
