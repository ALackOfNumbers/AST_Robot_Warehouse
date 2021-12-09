// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:msg/Row.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROW__BUILDER_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROW__BUILDER_HPP_

#include "messages_package/msg/detail/row__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace msg
{

namespace builder
{

class Init_Row_row
{
public:
  Init_Row_row()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::msg::Row row(::messages_package::msg::Row::_row_type arg)
  {
    msg_.row = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::msg::Row msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::msg::Row>()
{
  return messages_package::msg::builder::Init_Row_row();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROW__BUILDER_HPP_
