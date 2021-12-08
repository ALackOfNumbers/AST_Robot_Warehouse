// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:action/Order.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__ORDER__STRUCT_H_
#define MESSAGES_PACKAGE__ACTION__DETAIL__ORDER__STRUCT_H_

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

// Struct defined in action/Order in the package messages_package.
typedef struct messages_package__action__Order_Goal
{
  messages_package__msg__Item__Sequence items;
} messages_package__action__Order_Goal;

// Struct for a sequence of messages_package__action__Order_Goal.
typedef struct messages_package__action__Order_Goal__Sequence
{
  messages_package__action__Order_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__Order_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'order_status'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/Order in the package messages_package.
typedef struct messages_package__action__Order_Result
{
  rosidl_runtime_c__String order_status;
} messages_package__action__Order_Result;

// Struct for a sequence of messages_package__action__Order_Result.
typedef struct messages_package__action__Order_Result__Sequence
{
  messages_package__action__Order_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__Order_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'failure_reason'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/Order in the package messages_package.
typedef struct messages_package__action__Order_Feedback
{
  bool success_or_failure;
  rosidl_runtime_c__String failure_reason;
} messages_package__action__Order_Feedback;

// Struct for a sequence of messages_package__action__Order_Feedback.
typedef struct messages_package__action__Order_Feedback__Sequence
{
  messages_package__action__Order_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__Order_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "messages_package/action/detail/order__struct.h"

// Struct defined in action/Order in the package messages_package.
typedef struct messages_package__action__Order_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  messages_package__action__Order_Goal goal;
} messages_package__action__Order_SendGoal_Request;

// Struct for a sequence of messages_package__action__Order_SendGoal_Request.
typedef struct messages_package__action__Order_SendGoal_Request__Sequence
{
  messages_package__action__Order_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__Order_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Order in the package messages_package.
typedef struct messages_package__action__Order_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} messages_package__action__Order_SendGoal_Response;

// Struct for a sequence of messages_package__action__Order_SendGoal_Response.
typedef struct messages_package__action__Order_SendGoal_Response__Sequence
{
  messages_package__action__Order_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__Order_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Order in the package messages_package.
typedef struct messages_package__action__Order_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} messages_package__action__Order_GetResult_Request;

// Struct for a sequence of messages_package__action__Order_GetResult_Request.
typedef struct messages_package__action__Order_GetResult_Request__Sequence
{
  messages_package__action__Order_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__Order_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "messages_package/action/detail/order__struct.h"

// Struct defined in action/Order in the package messages_package.
typedef struct messages_package__action__Order_GetResult_Response
{
  int8_t status;
  messages_package__action__Order_Result result;
} messages_package__action__Order_GetResult_Response;

// Struct for a sequence of messages_package__action__Order_GetResult_Response.
typedef struct messages_package__action__Order_GetResult_Response__Sequence
{
  messages_package__action__Order_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__Order_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "messages_package/action/detail/order__struct.h"

// Struct defined in action/Order in the package messages_package.
typedef struct messages_package__action__Order_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  messages_package__action__Order_Feedback feedback;
} messages_package__action__Order_FeedbackMessage;

// Struct for a sequence of messages_package__action__Order_FeedbackMessage.
typedef struct messages_package__action__Order_FeedbackMessage__Sequence
{
  messages_package__action__Order_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__Order_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__ORDER__STRUCT_H_
