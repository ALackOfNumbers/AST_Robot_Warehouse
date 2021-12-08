// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_package:srv/PutDownItem.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__SRV__DETAIL__PUT_DOWN_ITEM__TRAITS_HPP_
#define MESSAGES_PACKAGE__SRV__DETAIL__PUT_DOWN_ITEM__TRAITS_HPP_

#include "messages_package/srv/detail/put_down_item__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'item'
#include "messages_package/msg/detail/item__traits.hpp"
// Member 'location'
#include "messages_package/msg/detail/coordinates__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::srv::PutDownItem_Request>()
{
  return "messages_package::srv::PutDownItem_Request";
}

template<>
inline const char * name<messages_package::srv::PutDownItem_Request>()
{
  return "messages_package/srv/PutDownItem_Request";
}

template<>
struct has_fixed_size<messages_package::srv::PutDownItem_Request>
  : std::integral_constant<bool, has_fixed_size<messages_package::msg::Coordinates>::value && has_fixed_size<messages_package::msg::Item>::value> {};

template<>
struct has_bounded_size<messages_package::srv::PutDownItem_Request>
  : std::integral_constant<bool, has_bounded_size<messages_package::msg::Coordinates>::value && has_bounded_size<messages_package::msg::Item>::value> {};

template<>
struct is_message<messages_package::srv::PutDownItem_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::srv::PutDownItem_Response>()
{
  return "messages_package::srv::PutDownItem_Response";
}

template<>
inline const char * name<messages_package::srv::PutDownItem_Response>()
{
  return "messages_package/srv/PutDownItem_Response";
}

template<>
struct has_fixed_size<messages_package::srv::PutDownItem_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages_package::srv::PutDownItem_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages_package::srv::PutDownItem_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::srv::PutDownItem>()
{
  return "messages_package::srv::PutDownItem";
}

template<>
inline const char * name<messages_package::srv::PutDownItem>()
{
  return "messages_package/srv/PutDownItem";
}

template<>
struct has_fixed_size<messages_package::srv::PutDownItem>
  : std::integral_constant<
    bool,
    has_fixed_size<messages_package::srv::PutDownItem_Request>::value &&
    has_fixed_size<messages_package::srv::PutDownItem_Response>::value
  >
{
};

template<>
struct has_bounded_size<messages_package::srv::PutDownItem>
  : std::integral_constant<
    bool,
    has_bounded_size<messages_package::srv::PutDownItem_Request>::value &&
    has_bounded_size<messages_package::srv::PutDownItem_Response>::value
  >
{
};

template<>
struct is_service<messages_package::srv::PutDownItem>
  : std::true_type
{
};

template<>
struct is_service_request<messages_package::srv::PutDownItem_Request>
  : std::true_type
{
};

template<>
struct is_service_response<messages_package::srv::PutDownItem_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES_PACKAGE__SRV__DETAIL__PUT_DOWN_ITEM__TRAITS_HPP_
