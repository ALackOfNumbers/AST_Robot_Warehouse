// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_state'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RobotState in the package messages_package.
typedef struct messages_package__msg__RobotState
{
  int64_t robot_number;
  rosidl_runtime_c__String robot_state;
} messages_package__msg__RobotState;

// Struct for a sequence of messages_package__msg__RobotState.
typedef struct messages_package__msg__RobotState__Sequence
{
  messages_package__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
