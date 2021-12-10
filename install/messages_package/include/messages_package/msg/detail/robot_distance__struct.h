// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:msg/RobotDistance.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__STRUCT_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RobotDistance in the package messages_package.
typedef struct messages_package__msg__RobotDistance
{
  int64_t robot_number;
  double robot_distance;
  int64_t beacon_number;
} messages_package__msg__RobotDistance;

// Struct for a sequence of messages_package__msg__RobotDistance.
typedef struct messages_package__msg__RobotDistance__Sequence
{
  messages_package__msg__RobotDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__msg__RobotDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROBOT_DISTANCE__STRUCT_H_
