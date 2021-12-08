// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_package:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ITEM__TRAITS_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ITEM__TRAITS_HPP_

#include "messages_package/msg/detail/item__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'location'
#include "messages_package/msg/detail/coordinates__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::msg::Item>()
{
  return "messages_package::msg::Item";
}

template<>
inline const char * name<messages_package::msg::Item>()
{
  return "messages_package/msg/Item";
}

template<>
struct has_fixed_size<messages_package::msg::Item>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<messages_package::msg::Item>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<messages_package::msg::Item>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ITEM__TRAITS_HPP_
