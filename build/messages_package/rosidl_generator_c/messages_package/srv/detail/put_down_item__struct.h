// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:srv/PutDownItem.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__SRV__DETAIL__PUT_DOWN_ITEM__STRUCT_H_
#define MESSAGES_PACKAGE__SRV__DETAIL__PUT_DOWN_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'item'
#include "messages_package/msg/detail/item__struct.h"
// Member 'location'
#include "messages_package/msg/detail/coordinates__struct.h"

// Struct defined in srv/PutDownItem in the package messages_package.
typedef struct messages_package__srv__PutDownItem_Request
{
  messages_package__msg__Item item;
  messages_package__msg__Coordinates location;
} messages_package__srv__PutDownItem_Request;

// Struct for a sequence of messages_package__srv__PutDownItem_Request.
typedef struct messages_package__srv__PutDownItem_Request__Sequence
{
  messages_package__srv__PutDownItem_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__srv__PutDownItem_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/PutDownItem in the package messages_package.
typedef struct messages_package__srv__PutDownItem_Response
{
  uint8_t structure_needs_at_least_one_member;
} messages_package__srv__PutDownItem_Response;

// Struct for a sequence of messages_package__srv__PutDownItem_Response.
typedef struct messages_package__srv__PutDownItem_Response__Sequence
{
  messages_package__srv__PutDownItem_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__srv__PutDownItem_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__SRV__DETAIL__PUT_DOWN_ITEM__STRUCT_H_
