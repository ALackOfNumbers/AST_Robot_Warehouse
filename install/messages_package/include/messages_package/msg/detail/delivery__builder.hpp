// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:msg/Delivery.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__DELIVERY__BUILDER_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__DELIVERY__BUILDER_HPP_

#include "messages_package/msg/detail/delivery__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace msg
{

namespace builder
{

class Init_Delivery_time
{
public:
  explicit Init_Delivery_time(::messages_package::msg::Delivery & msg)
  : msg_(msg)
  {}
  ::messages_package::msg::Delivery time(::messages_package::msg::Delivery::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::msg::Delivery msg_;
};

class Init_Delivery_location
{
public:
  explicit Init_Delivery_location(::messages_package::msg::Delivery & msg)
  : msg_(msg)
  {}
  Init_Delivery_time location(::messages_package::msg::Delivery::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_Delivery_time(msg_);
  }

private:
  ::messages_package::msg::Delivery msg_;
};

class Init_Delivery_items
{
public:
  Init_Delivery_items()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Delivery_location items(::messages_package::msg::Delivery::_items_type arg)
  {
    msg_.items = std::move(arg);
    return Init_Delivery_location(msg_);
  }

private:
  ::messages_package::msg::Delivery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::msg::Delivery>()
{
  return messages_package::msg::builder::Init_Delivery_items();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__DELIVERY__BUILDER_HPP_
