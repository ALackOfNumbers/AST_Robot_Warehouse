// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_package:msg/Delivery.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_package/msg/detail/delivery__rosidl_typesupport_introspection_c.h"
#include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_package/msg/detail/delivery__functions.h"
#include "messages_package/msg/detail/delivery__struct.h"


// Include directives for member types
// Member `items`
#include "messages_package/msg/item.h"
// Member `items`
#include "messages_package/msg/detail/item__rosidl_typesupport_introspection_c.h"
// Member `location`
#include "messages_package/msg/coordinates.h"
// Member `location`
#include "messages_package/msg/detail/coordinates__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Delivery__rosidl_typesupport_introspection_c__Delivery_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__msg__Delivery__init(message_memory);
}

void Delivery__rosidl_typesupport_introspection_c__Delivery_fini_function(void * message_memory)
{
  messages_package__msg__Delivery__fini(message_memory);
}

size_t Delivery__rosidl_typesupport_introspection_c__size_function__Item__items(
  const void * untyped_member)
{
  const messages_package__msg__Item__Sequence * member =
    (const messages_package__msg__Item__Sequence *)(untyped_member);
  return member->size;
}

const void * Delivery__rosidl_typesupport_introspection_c__get_const_function__Item__items(
  const void * untyped_member, size_t index)
{
  const messages_package__msg__Item__Sequence * member =
    (const messages_package__msg__Item__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Delivery__rosidl_typesupport_introspection_c__get_function__Item__items(
  void * untyped_member, size_t index)
{
  messages_package__msg__Item__Sequence * member =
    (messages_package__msg__Item__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Delivery__rosidl_typesupport_introspection_c__resize_function__Item__items(
  void * untyped_member, size_t size)
{
  messages_package__msg__Item__Sequence * member =
    (messages_package__msg__Item__Sequence *)(untyped_member);
  messages_package__msg__Item__Sequence__fini(member);
  return messages_package__msg__Item__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Delivery__rosidl_typesupport_introspection_c__Delivery_message_member_array[3] = {
  {
    "items",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__Delivery, items),  // bytes offset in struct
    NULL,  // default value
    Delivery__rosidl_typesupport_introspection_c__size_function__Item__items,  // size() function pointer
    Delivery__rosidl_typesupport_introspection_c__get_const_function__Item__items,  // get_const(index) function pointer
    Delivery__rosidl_typesupport_introspection_c__get_function__Item__items,  // get(index) function pointer
    Delivery__rosidl_typesupport_introspection_c__resize_function__Item__items  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__Delivery, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__Delivery, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Delivery__rosidl_typesupport_introspection_c__Delivery_message_members = {
  "messages_package__msg",  // message namespace
  "Delivery",  // message name
  3,  // number of fields
  sizeof(messages_package__msg__Delivery),
  Delivery__rosidl_typesupport_introspection_c__Delivery_message_member_array,  // message members
  Delivery__rosidl_typesupport_introspection_c__Delivery_init_function,  // function to initialize message memory (memory has to be allocated)
  Delivery__rosidl_typesupport_introspection_c__Delivery_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Delivery__rosidl_typesupport_introspection_c__Delivery_message_type_support_handle = {
  0,
  &Delivery__rosidl_typesupport_introspection_c__Delivery_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Delivery)() {
  Delivery__rosidl_typesupport_introspection_c__Delivery_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Item)();
  Delivery__rosidl_typesupport_introspection_c__Delivery_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Coordinates)();
  if (!Delivery__rosidl_typesupport_introspection_c__Delivery_message_type_support_handle.typesupport_identifier) {
    Delivery__rosidl_typesupport_introspection_c__Delivery_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Delivery__rosidl_typesupport_introspection_c__Delivery_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
