// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ITEM__STRUCT_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'location'
#include "messages_package/msg/detail/coordinates__struct.h"

// Struct defined in msg/Item in the package messages_package.
typedef struct messages_package__msg__Item
{
  rosidl_runtime_c__String name;
  double age;
  messages_package__msg__Coordinates location;
  int64_t quantity;
} messages_package__msg__Item;

// Struct for a sequence of messages_package__msg__Item.
typedef struct messages_package__msg__Item__Sequence
{
  messages_package__msg__Item * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__msg__Item__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ITEM__STRUCT_H_
