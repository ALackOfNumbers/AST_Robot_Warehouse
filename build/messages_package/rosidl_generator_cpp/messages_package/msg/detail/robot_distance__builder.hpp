// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:msg/RobotDistance.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__BUILDER_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__BUILDER_HPP_

#include "messages_package/msg/detail/robot_distance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace msg
{

namespace builder
{

class Init_RobotDistance_beacon_number
{
public:
  explicit Init_RobotDistance_beacon_number(::messages_package::msg::RobotDistance & msg)
  : msg_(msg)
  {}
  ::messages_package::msg::RobotDistance beacon_number(::messages_package::msg::RobotDistance::_beacon_number_type arg)
  {
    msg_.beacon_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::msg::RobotDistance msg_;
};

class Init_RobotDistance_robot_distance
{
public:
  explicit Init_RobotDistance_robot_distance(::messages_package::msg::RobotDistance & msg)
  : msg_(msg)
  {}
  Init_RobotDistance_beacon_number robot_distance(::messages_package::msg::RobotDistance::_robot_distance_type arg)
  {
    msg_.robot_distance = std::move(arg);
    return Init_RobotDistance_beacon_number(msg_);
  }

private:
  ::messages_package::msg::RobotDistance msg_;
};

class Init_RobotDistance_robot_number
{
public:
  Init_RobotDistance_robot_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotDistance_robot_distance robot_number(::messages_package::msg::RobotDistance::_robot_number_type arg)
  {
    msg_.robot_number = std::move(arg);
    return Init_RobotDistance_robot_distance(msg_);
  }

private:
  ::messages_package::msg::RobotDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::msg::RobotDistance>()
{
  return messages_package::msg::builder::Init_RobotDistance_robot_number();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__BUILDER_HPP_
