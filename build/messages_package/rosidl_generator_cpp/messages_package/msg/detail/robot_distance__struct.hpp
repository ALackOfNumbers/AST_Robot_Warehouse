// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:msg/RobotDistance.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__STRUCT_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__messages_package__msg__RobotDistance __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__msg__RobotDistance __declspec(deprecated)
#endif

namespace messages_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotDistance_
{
  using Type = RobotDistance_<ContainerAllocator>;

  explicit RobotDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_number = 0ll;
      this->robot_distance = 0.0;
      this->beacon_number = 0ll;
    }
  }

  explicit RobotDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_number = 0ll;
      this->robot_distance = 0.0;
      this->beacon_number = 0ll;
    }
  }

  // field types and members
  using _robot_number_type =
    int64_t;
  _robot_number_type robot_number;
  using _robot_distance_type =
    double;
  _robot_distance_type robot_distance;
  using _beacon_number_type =
    int64_t;
  _beacon_number_type beacon_number;

  // setters for named parameter idiom
  Type & set__robot_number(
    const int64_t & _arg)
  {
    this->robot_number = _arg;
    return *this;
  }
  Type & set__robot_distance(
    const double & _arg)
  {
    this->robot_distance = _arg;
    return *this;
  }
  Type & set__beacon_number(
    const int64_t & _arg)
  {
    this->beacon_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::msg::RobotDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::msg::RobotDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::msg::RobotDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::msg::RobotDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::RobotDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::RobotDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::RobotDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::RobotDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::msg::RobotDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::msg::RobotDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__msg__RobotDistance
    std::shared_ptr<messages_package::msg::RobotDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__msg__RobotDistance
    std::shared_ptr<messages_package::msg::RobotDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotDistance_ & other) const
  {
    if (this->robot_number != other.robot_number) {
      return false;
    }
    if (this->robot_distance != other.robot_distance) {
      return false;
    }
    if (this->beacon_number != other.beacon_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotDistance_

// alias to use template instance with default allocator
using RobotDistance =
  messages_package::msg::RobotDistance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__STRUCT_HPP_
