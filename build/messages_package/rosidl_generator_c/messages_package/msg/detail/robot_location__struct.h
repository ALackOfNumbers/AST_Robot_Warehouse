// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:msg/RobotLocation.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__STRUCT_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_location'
#include "messages_package/msg/detail/coordinates__struct.h"

// Struct defined in msg/RobotLocation in the package messages_package.
typedef struct messages_package__msg__RobotLocation
{
  int64_t robot_number;
  messages_package__msg__Coordinates robot_location;
} messages_package__msg__RobotLocation;

// Struct for a sequence of messages_package__msg__RobotLocation.
typedef struct messages_package__msg__RobotLocation__Sequence
{
  messages_package__msg__RobotLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__msg__RobotLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_LOCATION__STRUCT_H_
