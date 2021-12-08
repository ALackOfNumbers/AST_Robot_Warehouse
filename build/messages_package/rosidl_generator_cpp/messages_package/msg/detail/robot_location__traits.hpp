// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_package:msg/RobotLocation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__TRAITS_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__TRAITS_HPP_

#include "messages_package/msg/detail/robot_location__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'robot_location'
#include "messages_package/msg/detail/coordinates__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::msg::RobotLocation>()
{
  return "messages_package::msg::RobotLocation";
}

template<>
inline const char * name<messages_package::msg::RobotLocation>()
{
  return "messages_package/msg/RobotLocation";
}

template<>
struct has_fixed_size<messages_package::msg::RobotLocation>
  : std::integral_constant<bool, has_fixed_size<messages_package::msg::Coordinates>::value> {};

template<>
struct has_bounded_size<messages_package::msg::RobotLocation>
  : std::integral_constant<bool, has_bounded_size<messages_package::msg::Coordinates>::value> {};

template<>
struct is_message<messages_package::msg::RobotLocation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__TRAITS_HPP_
