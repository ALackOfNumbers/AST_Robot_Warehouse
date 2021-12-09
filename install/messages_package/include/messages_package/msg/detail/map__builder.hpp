// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__MAP__BUILDER_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__MAP__BUILDER_HPP_

#include "messages_package/msg/detail/map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace msg
{

namespace builder
{

class Init_Map_map_array
{
public:
  Init_Map_map_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::msg::Map map_array(::messages_package::msg::Map::_map_array_type arg)
  {
    msg_.map_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::msg::Map msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::msg::Map>()
{
  return messages_package::msg::builder::Init_Map_map_array();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__MAP__BUILDER_HPP_
