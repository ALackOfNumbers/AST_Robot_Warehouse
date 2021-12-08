// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:srv/Delivery.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__BUILDER_HPP_
#define MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__BUILDER_HPP_

#include "messages_package/srv/detail/delivery__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace srv
{

namespace builder
{

class Init_Delivery_Request_delivery_contents
{
public:
  Init_Delivery_Request_delivery_contents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::srv::Delivery_Request delivery_contents(::messages_package::srv::Delivery_Request::_delivery_contents_type arg)
  {
    msg_.delivery_contents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::srv::Delivery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::srv::Delivery_Request>()
{
  return messages_package::srv::builder::Init_Delivery_Request_delivery_contents();
}

}  // namespace messages_package


namespace messages_package
{

namespace srv
{

namespace builder
{

class Init_Delivery_Response_success_or_failure
{
public:
  Init_Delivery_Response_success_or_failure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::srv::Delivery_Response success_or_failure(::messages_package::srv::Delivery_Response::_success_or_failure_type arg)
  {
    msg_.success_or_failure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::srv::Delivery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::srv::Delivery_Response>()
{
  return messages_package::srv::builder::Init_Delivery_Response_success_or_failure();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__BUILDER_HPP_
