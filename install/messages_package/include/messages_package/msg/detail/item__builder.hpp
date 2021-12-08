// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ITEM__BUILDER_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ITEM__BUILDER_HPP_

#include "messages_package/msg/detail/item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace msg
{

namespace builder
{

class Init_Item_quantity
{
public:
  explicit Init_Item_quantity(::messages_package::msg::Item & msg)
  : msg_(msg)
  {}
  ::messages_package::msg::Item quantity(::messages_package::msg::Item::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::msg::Item msg_;
};

class Init_Item_location
{
public:
  explicit Init_Item_location(::messages_package::msg::Item & msg)
  : msg_(msg)
  {}
  Init_Item_quantity location(::messages_package::msg::Item::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_Item_quantity(msg_);
  }

private:
  ::messages_package::msg::Item msg_;
};

class Init_Item_age
{
public:
  explicit Init_Item_age(::messages_package::msg::Item & msg)
  : msg_(msg)
  {}
  Init_Item_location age(::messages_package::msg::Item::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Item_location(msg_);
  }

private:
  ::messages_package::msg::Item msg_;
};

class Init_Item_name
{
public:
  Init_Item_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Item_age name(::messages_package::msg::Item::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Item_age(msg_);
  }

private:
  ::messages_package::msg::Item msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::msg::Item>()
{
  return messages_package::msg::builder::Init_Item_name();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ITEM__BUILDER_HPP_
