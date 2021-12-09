// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:msg/Row.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROW__STRUCT_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'row'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Row in the package messages_package.
typedef struct messages_package__msg__Row
{
  rosidl_runtime_c__String row;
} messages_package__msg__Row;

// Struct for a sequence of messages_package__msg__Row.
typedef struct messages_package__msg__Row__Sequence
{
  messages_package__msg__Row * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__msg__Row__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROW__STRUCT_H_
