// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:msg/RobotLocation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__BUILDER_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__BUILDER_HPP_

#include "messages_package/msg/detail/robot_location__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace msg
{

namespace builder
{

class Init_RobotLocation_robot_location
{
public:
  explicit Init_RobotLocation_robot_location(::messages_package::msg::RobotLocation & msg)
  : msg_(msg)
  {}
  ::messages_package::msg::RobotLocation robot_location(::messages_package::msg::RobotLocation::_robot_location_type arg)
  {
    msg_.robot_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::msg::RobotLocation msg_;
};

class Init_RobotLocation_robot_number
{
public:
  Init_RobotLocation_robot_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotLocation_robot_location robot_number(::messages_package::msg::RobotLocation::_robot_number_type arg)
  {
    msg_.robot_number = std::move(arg);
    return Init_RobotLocation_robot_location(msg_);
  }

private:
  ::messages_package::msg::RobotLocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::msg::RobotLocation>()
{
  return messages_package::msg::builder::Init_RobotLocation_robot_number();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__BUILDER_HPP_
