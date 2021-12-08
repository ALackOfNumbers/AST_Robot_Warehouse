// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:msg/Delivery.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__DELIVERY__STRUCT_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__DELIVERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'items'
#include "messages_package/msg/detail/item__struct.h"
// Member 'location'
#include "messages_package/msg/detail/coordinates__struct.h"

// Struct defined in msg/Delivery in the package messages_package.
typedef struct messages_package__msg__Delivery
{
  messages_package__msg__Item__Sequence items;
  messages_package__msg__Coordinates location;
  double time;
} messages_package__msg__Delivery;

// Struct for a sequence of messages_package__msg__Delivery.
typedef struct messages_package__msg__Delivery__Sequence
{
  messages_package__msg__Delivery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__msg__Delivery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__DELIVERY__STRUCT_H_
