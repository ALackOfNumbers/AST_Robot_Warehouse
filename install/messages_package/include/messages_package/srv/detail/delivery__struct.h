// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:srv/Delivery.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__STRUCT_H_
#define MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'delivery_contents'
#include "messages_package/msg/detail/delivery__struct.h"

// Struct defined in srv/Delivery in the package messages_package.
typedef struct messages_package__srv__Delivery_Request
{
  messages_package__msg__Delivery delivery_contents;
} messages_package__srv__Delivery_Request;

// Struct for a sequence of messages_package__srv__Delivery_Request.
typedef struct messages_package__srv__Delivery_Request__Sequence
{
  messages_package__srv__Delivery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__srv__Delivery_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Delivery in the package messages_package.
typedef struct messages_package__srv__Delivery_Response
{
  bool success_or_failure;
} messages_package__srv__Delivery_Response;

// Struct for a sequence of messages_package__srv__Delivery_Response.
typedef struct messages_package__srv__Delivery_Response__Sequence
{
  messages_package__srv__Delivery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__srv__Delivery_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__STRUCT_H_
