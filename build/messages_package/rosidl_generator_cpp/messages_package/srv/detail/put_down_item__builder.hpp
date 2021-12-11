// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:srv/PutDownItem.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__SRV__DETAIL__PUT_DOWN_ITEM__BUILDER_HPP_
#define MESSAGES_PACKAGE__SRV__DETAIL__PUT_DOWN_ITEM__BUILDER_HPP_

#include "messages_package/srv/detail/put_down_item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace srv
{

namespace builder
{

class Init_PutDownItem_Request_location
{
public:
  explicit Init_PutDownItem_Request_location(::messages_package::srv::PutDownItem_Request & msg)
  : msg_(msg)
  {}
  ::messages_package::srv::PutDownItem_Request location(::messages_package::srv::PutDownItem_Request::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::srv::PutDownItem_Request msg_;
};

class Init_PutDownItem_Request_item
{
public:
  Init_PutDownItem_Request_item()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PutDownItem_Request_location item(::messages_package::srv::PutDownItem_Request::_item_type arg)
  {
    msg_.item = std::move(arg);
    return Init_PutDownItem_Request_location(msg_);
  }

private:
  ::messages_package::srv::PutDownItem_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::srv::PutDownItem_Request>()
{
  return messages_package::srv::builder::Init_PutDownItem_Request_item();
}

}  // namespace messages_package


namespace messages_package
{

namespace srv
{

namespace builder
{

class Init_PutDownItem_Response_success_or_failure
{
public:
  Init_PutDownItem_Response_success_or_failure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::srv::PutDownItem_Response success_or_failure(::messages_package::srv::PutDownItem_Response::_success_or_failure_type arg)
  {
    msg_.success_or_failure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::srv::PutDownItem_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::srv::PutDownItem_Response>()
{
  return messages_package::srv::builder::Init_PutDownItem_Response_success_or_failure();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__SRV__DETAIL__PUT_DOWN_ITEM__BUILDER_HPP_
