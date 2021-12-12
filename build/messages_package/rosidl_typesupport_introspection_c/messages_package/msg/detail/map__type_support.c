// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_package:msg/Map.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_package/msg/detail/map__rosidl_typesupport_introspection_c.h"
#include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_package/msg/detail/map__functions.h"
#include "messages_package/msg/detail/map__struct.h"


// Include directives for member types
// Member `map_array`
#include "messages_package/msg/row.h"
// Member `map_array`
#include "messages_package/msg/detail/row__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Map__rosidl_typesupport_introspection_c__Map_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__msg__Map__init(message_memory);
}

void Map__rosidl_typesupport_introspection_c__Map_fini_function(void * message_memory)
{
  messages_package__msg__Map__fini(message_memory);
}

size_t Map__rosidl_typesupport_introspection_c__size_function__Row__map_array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * Map__rosidl_typesupport_introspection_c__get_const_function__Row__map_array(
  const void * untyped_member, size_t index)
{
  const messages_package__msg__Row ** member =
    (const messages_package__msg__Row **)(untyped_member);
  return &(*member)[index];
}

void * Map__rosidl_typesupport_introspection_c__get_function__Row__map_array(
  void * untyped_member, size_t index)
{
  messages_package__msg__Row ** member =
    (messages_package__msg__Row **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember Map__rosidl_typesupport_introspection_c__Map_message_member_array[1] = {
  {
    "map_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__Map, map_array),  // bytes offset in struct
    NULL,  // default value
    Map__rosidl_typesupport_introspection_c__size_function__Row__map_array,  // size() function pointer
    Map__rosidl_typesupport_introspection_c__get_const_function__Row__map_array,  // get_const(index) function pointer
    Map__rosidl_typesupport_introspection_c__get_function__Row__map_array,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Map__rosidl_typesupport_introspection_c__Map_message_members = {
  "messages_package__msg",  // message namespace
  "Map",  // message name
  1,  // number of fields
  sizeof(messages_package__msg__Map),
  Map__rosidl_typesupport_introspection_c__Map_message_member_array,  // message members
  Map__rosidl_typesupport_introspection_c__Map_init_function,  // function to initialize message memory (memory has to be allocated)
  Map__rosidl_typesupport_introspection_c__Map_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Map__rosidl_typesupport_introspection_c__Map_message_type_support_handle = {
  0,
  &Map__rosidl_typesupport_introspection_c__Map_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Map)() {
  Map__rosidl_typesupport_introspection_c__Map_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Row)();
  if (!Map__rosidl_typesupport_introspection_c__Map_message_type_support_handle.typesupport_identifier) {
    Map__rosidl_typesupport_introspection_c__Map_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Map__rosidl_typesupport_introspection_c__Map_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
