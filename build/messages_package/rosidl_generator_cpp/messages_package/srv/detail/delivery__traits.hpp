// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_package:srv/Delivery.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__TRAITS_HPP_
#define MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__TRAITS_HPP_

#include "messages_package/srv/detail/delivery__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'delivery_contents'
#include "messages_package/msg/detail/delivery__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::srv::Delivery_Request>()
{
  return "messages_package::srv::Delivery_Request";
}

template<>
inline const char * name<messages_package::srv::Delivery_Request>()
{
  return "messages_package/srv/Delivery_Request";
}

template<>
struct has_fixed_size<messages_package::srv::Delivery_Request>
  : std::integral_constant<bool, has_fixed_size<messages_package::msg::Delivery>::value> {};

template<>
struct has_bounded_size<messages_package::srv::Delivery_Request>
  : std::integral_constant<bool, has_bounded_size<messages_package::msg::Delivery>::value> {};

template<>
struct is_message<messages_package::srv::Delivery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::srv::Delivery_Response>()
{
  return "messages_package::srv::Delivery_Response";
}

template<>
inline const char * name<messages_package::srv::Delivery_Response>()
{
  return "messages_package/srv/Delivery_Response";
}

template<>
struct has_fixed_size<messages_package::srv::Delivery_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_package::srv::Delivery_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_package::srv::Delivery_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::srv::Delivery>()
{
  return "messages_package::srv::Delivery";
}

template<>
inline const char * name<messages_package::srv::Delivery>()
{
  return "messages_package/srv/Delivery";
}

template<>
struct has_fixed_size<messages_package::srv::Delivery>
  : std::integral_constant<
    bool,
    has_fixed_size<messages_package::srv::Delivery_Request>::value &&
    has_fixed_size<messages_package::srv::Delivery_Response>::value
  >
{
};

template<>
struct has_bounded_size<messages_package::srv::Delivery>
  : std::integral_constant<
    bool,
    has_bounded_size<messages_package::srv::Delivery_Request>::value &&
    has_bounded_size<messages_package::srv::Delivery_Response>::value
  >
{
};

template<>
struct is_service<messages_package::srv::Delivery>
  : std::true_type
{
};

template<>
struct is_service_request<messages_package::srv::Delivery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<messages_package::srv::Delivery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__TRAITS_HPP_
