// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_package:msg/RobotDistance.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__TRAITS_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__TRAITS_HPP_

#include "messages_package/msg/detail/robot_distance__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::msg::RobotDistance>()
{
  return "messages_package::msg::RobotDistance";
}

template<>
inline const char * name<messages_package::msg::RobotDistance>()
{
  return "messages_package/msg/RobotDistance";
}

template<>
struct has_fixed_size<messages_package::msg::RobotDistance>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_package::msg::RobotDistance>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_package::msg::RobotDistance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__TRAITS_HPP_
