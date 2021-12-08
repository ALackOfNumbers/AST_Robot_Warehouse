// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from messages_package:msg/Delivery.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "messages_package/msg/detail/delivery__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace messages_package
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Delivery_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) messages_package::msg::Delivery(_init);
}

void Delivery_fini_function(void * message_memory)
{
  auto typed_message = static_cast<messages_package::msg::Delivery *>(message_memory);
  typed_message->~Delivery();
}

size_t size_function__Delivery__items(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<messages_package::msg::Item> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Delivery__items(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<messages_package::msg::Item> *>(untyped_member);
  return &member[index];
}

void * get_function__Delivery__items(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<messages_package::msg::Item> *>(untyped_member);
  return &member[index];
}

void resize_function__Delivery__items(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<messages_package::msg::Item> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Delivery_message_member_array[3] = {
  {
    "items",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<messages_package::msg::Item>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package::msg::Delivery, items),  // bytes offset in struct
    nullptr,  // default value
    size_function__Delivery__items,  // size() function pointer
    get_const_function__Delivery__items,  // get_const(index) function pointer
    get_function__Delivery__items,  // get(index) function pointer
    resize_function__Delivery__items  // resize(index) function pointer
  },
  {
    "location",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<messages_package::msg::Coordinates>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package::msg::Delivery, location),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package::msg::Delivery, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Delivery_message_members = {
  "messages_package::msg",  // message namespace
  "Delivery",  // message name
  3,  // number of fields
  sizeof(messages_package::msg::Delivery),
  Delivery_message_member_array,  // message members
  Delivery_init_function,  // function to initialize message memory (memory has to be allocated)
  Delivery_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Delivery_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Delivery_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace messages_package


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::msg::Delivery>()
{
  return &::messages_package::msg::rosidl_typesupport_introspection_cpp::Delivery_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, msg, Delivery)() {
  return &::messages_package::msg::rosidl_typesupport_introspection_cpp::Delivery_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
