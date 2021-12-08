// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__COORDINATES__BUILDER_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__COORDINATES__BUILDER_HPP_

#include "messages_package/msg/detail/coordinates__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace msg
{

namespace builder
{

class Init_Coordinates_y
{
public:
  explicit Init_Coordinates_y(::messages_package::msg::Coordinates & msg)
  : msg_(msg)
  {}
  ::messages_package::msg::Coordinates y(::messages_package::msg::Coordinates::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::msg::Coordinates msg_;
};

class Init_Coordinates_x
{
public:
  Init_Coordinates_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinates_y x(::messages_package::msg::Coordinates::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Coordinates_y(msg_);
  }

private:
  ::messages_package::msg::Coordinates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::msg::Coordinates>()
{
  return messages_package::msg::builder::Init_Coordinates_x();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__COORDINATES__BUILDER_HPP_
