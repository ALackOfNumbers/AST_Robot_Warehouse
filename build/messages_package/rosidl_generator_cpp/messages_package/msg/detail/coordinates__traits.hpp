// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_package:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__COORDINATES__TRAITS_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__COORDINATES__TRAITS_HPP_

#include "messages_package/msg/detail/coordinates__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::msg::Coordinates>()
{
  return "messages_package::msg::Coordinates";
}

template<>
inline const char * name<messages_package::msg::Coordinates>()
{
  return "messages_package/msg/Coordinates";
}

template<>
struct has_fixed_size<messages_package::msg::Coordinates>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_package::msg::Coordinates>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_package::msg::Coordinates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__COORDINATES__TRAITS_HPP_
