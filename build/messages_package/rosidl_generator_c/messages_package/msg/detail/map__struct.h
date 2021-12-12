// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__MAP__STRUCT_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'map_array'
#include "messages_package/msg/detail/row__struct.h"

// Struct defined in msg/Map in the package messages_package.
typedef struct messages_package__msg__Map
{
  messages_package__msg__Row map_array[16];
} messages_package__msg__Map;

// Struct for a sequence of messages_package__msg__Map.
typedef struct messages_package__msg__Map__Sequence
{
  messages_package__msg__Map * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__msg__Map__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__MAP__STRUCT_H_
