// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from messages_package:msg/Row.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "messages_package/msg/detail/row__struct.hpp"
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

void Row_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) messages_package::msg::Row(_init);
}

void Row_fini_function(void * message_memory)
{
  auto typed_message = static_cast<messages_package::msg::Row *>(message_memory);
  typed_message->~Row();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Row_message_member_array[1] = {
  {
    "row",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package::msg::Row, row),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Row_message_members = {
  "messages_package::msg",  // message namespace
  "Row",  // message name
  1,  // number of fields
  sizeof(messages_package::msg::Row),
  Row_message_member_array,  // message members
  Row_init_function,  // function to initialize message memory (memory has to be allocated)
  Row_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Row_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Row_message_members,
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
get_message_type_support_handle<messages_package::msg::Row>()
{
  return &::messages_package::msg::rosidl_typesupport_introspection_cpp::Row_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, msg, Row)() {
  return &::messages_package::msg::rosidl_typesupport_introspection_cpp::Row_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
