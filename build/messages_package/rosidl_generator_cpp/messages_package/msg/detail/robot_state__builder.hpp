// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include "messages_package/msg/detail/robot_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace msg
{

namespace builder
{

class Init_RobotState_robot_state
{
public:
  explicit Init_RobotState_robot_state(::messages_package::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::messages_package::msg::RobotState robot_state(::messages_package::msg::RobotState::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::msg::RobotState msg_;
};

class Init_RobotState_robot_number
{
public:
  Init_RobotState_robot_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_robot_state robot_number(::messages_package::msg::RobotState::_robot_number_type arg)
  {
    msg_.robot_number = std::move(arg);
    return Init_RobotState_robot_state(msg_);
  }

private:
  ::messages_package::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::msg::RobotState>()
{
  return messages_package::msg::builder::Init_RobotState_robot_number();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
