// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__COORDINATES__STRUCT_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Coordinates in the package messages_package.
typedef struct messages_package__msg__Coordinates
{
  double x;
  double y;
} messages_package__msg__Coordinates;

// Struct for a sequence of messages_package__msg__Coordinates.
typedef struct messages_package__msg__Coordinates__Sequence
{
  messages_package__msg__Coordinates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__msg__Coordinates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__COORDINATES__STRUCT_H_
