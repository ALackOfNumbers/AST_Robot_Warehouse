// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_package:msg/RobotDistance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_package/msg/detail/robot_distance__rosidl_typesupport_introspection_c.h"
#include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_package/msg/detail/robot_distance__functions.h"
#include "messages_package/msg/detail/robot_distance__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__msg__RobotDistance__init(message_memory);
}

void RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_fini_function(void * message_memory)
{
  messages_package__msg__RobotDistance__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_message_member_array[2] = {
  {
    "robot_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__RobotDistance, robot_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__msg__RobotDistance, robot_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_message_members = {
  "messages_package__msg",  // message namespace
  "RobotDistance",  // message name
  2,  // number of fields
  sizeof(messages_package__msg__RobotDistance),
  RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_message_member_array,  // message members
  RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_message_type_support_handle = {
  0,
  &RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, RobotDistance)() {
  if (!RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_message_type_support_handle.typesupport_identifier) {
    RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotDistance__rosidl_typesupport_introspection_c__RobotDistance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
