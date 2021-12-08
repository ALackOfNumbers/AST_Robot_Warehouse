// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_package:msg/Item.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_package/msg/detail/item__rosidl_typesupport_introspection_c.h"
#include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_package/msg/detail/item__functions.h"
#include "messages_package/msg/detail/item__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `location`
#include "messages_package/msg/coordinates.h"
// Member `location`
#include "messages_package/msg/detail/coordinates__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Item__rosidl_typesupport_introspection_c__Item_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__msg__Item__init(message_memory);
}

void Item__rosidl_typesupport_introspection_c__Item_fini_function(void * message_memory)
{
  messages_package__msg__Item__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Item__rosidl_typesupport_introspection_c__Item_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__Item, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__Item, age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__Item, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quantity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__Item, quantity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Item__rosidl_typesupport_introspection_c__Item_message_members = {
  "messages_package__msg",  // message namespace
  "Item",  // message name
  4,  // number of fields
  sizeof(messages_package__msg__Item),
  Item__rosidl_typesupport_introspection_c__Item_message_member_array,  // message members
  Item__rosidl_typesupport_introspection_c__Item_init_function,  // function to initialize message memory (memory has to be allocated)
  Item__rosidl_typesupport_introspection_c__Item_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Item__rosidl_typesupport_introspection_c__Item_message_type_support_handle = {
  0,
  &Item__rosidl_typesupport_introspection_c__Item_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Item)() {
  Item__rosidl_typesupport_introspection_c__Item_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Coordinates)();
  if (!Item__rosidl_typesupport_introspection_c__Item_message_type_support_handle.typesupport_identifier) {
    Item__rosidl_typesupport_introspection_c__Item_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Item__rosidl_typesupport_introspection_c__Item_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
