// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:action/MoveItem.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__STRUCT_H_
#define MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__STRUCT_H_

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
// Member 'initial_location'
// Member 'final_location'
#include "messages_package/msg/detail/coordinates__struct.h"

// Struct defined in action/MoveItem in the package messages_package.
typedef struct messages_package__action__MoveItem_Goal
{
  messages_package__msg__Item item;
  messages_package__msg__Coordinates initial_location;
  messages_package__msg__Coordinates final_location;
} messages_package__action__MoveItem_Goal;

// Struct for a sequence of messages_package__action__MoveItem_Goal.
typedef struct messages_package__action__MoveItem_Goal__Sequence
{
  messages_package__action__MoveItem_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__MoveItem_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'failure_reason'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/MoveItem in the package messages_package.
typedef struct messages_package__action__MoveItem_Result
{
  bool success_or_failure;
  rosidl_runtime_c__String failure_reason;
} messages_package__action__MoveItem_Result;

// Struct for a sequence of messages_package__action__MoveItem_Result.
typedef struct messages_package__action__MoveItem_Result__Sequence
{
  messages_package__action__MoveItem_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__MoveItem_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_location'
// Member 'target_location'
// already included above
// #include "messages_package/msg/detail/coordinates__struct.h"

// Struct defined in action/MoveItem in the package messages_package.
typedef struct messages_package__action__MoveItem_Feedback
{
  messages_package__msg__Coordinates current_location;
  messages_package__msg__Coordinates target_location;
} messages_package__action__MoveItem_Feedback;

// Struct for a sequence of messages_package__action__MoveItem_Feedback.
typedef struct messages_package__action__MoveItem_Feedback__Sequence
{
  messages_package__action__MoveItem_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__MoveItem_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "messages_package/action/detail/move_item__struct.h"

// Struct defined in action/MoveItem in the package messages_package.
typedef struct messages_package__action__MoveItem_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  messages_package__action__MoveItem_Goal goal;
} messages_package__action__MoveItem_SendGoal_Request;

// Struct for a sequence of messages_package__action__MoveItem_SendGoal_Request.
typedef struct messages_package__action__MoveItem_SendGoal_Request__Sequence
{
  messages_package__action__MoveItem_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__MoveItem_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveItem in the package messages_package.
typedef struct messages_package__action__MoveItem_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} messages_package__action__MoveItem_SendGoal_Response;

// Struct for a sequence of messages_package__action__MoveItem_SendGoal_Response.
typedef struct messages_package__action__MoveItem_SendGoal_Response__Sequence
{
  messages_package__action__MoveItem_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__MoveItem_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveItem in the package messages_package.
typedef struct messages_package__action__MoveItem_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} messages_package__action__MoveItem_GetResult_Request;

// Struct for a sequence of messages_package__action__MoveItem_GetResult_Request.
typedef struct messages_package__action__MoveItem_GetResult_Request__Sequence
{
  messages_package__action__MoveItem_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__MoveItem_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "messages_package/action/detail/move_item__struct.h"

// Struct defined in action/MoveItem in the package messages_package.
typedef struct messages_package__action__MoveItem_GetResult_Response
{
  int8_t status;
  messages_package__action__MoveItem_Result result;
} messages_package__action__MoveItem_GetResult_Response;

// Struct for a sequence of messages_package__action__MoveItem_GetResult_Response.
typedef struct messages_package__action__MoveItem_GetResult_Response__Sequence
{
  messages_package__action__MoveItem_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__MoveItem_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "messages_package/action/detail/move_item__struct.h"

// Struct defined in action/MoveItem in the package messages_package.
typedef struct messages_package__action__MoveItem_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  messages_package__action__MoveItem_Feedback feedback;
} messages_package__action__MoveItem_FeedbackMessage;

// Struct for a sequence of messages_package__action__MoveItem_FeedbackMessage.
typedef struct messages_package__action__MoveItem_FeedbackMessage__Sequence
{
  messages_package__action__MoveItem_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__MoveItem_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__STRUCT_H_
