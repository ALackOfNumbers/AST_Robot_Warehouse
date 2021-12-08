// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from messages_package:action/ChargeRobot.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__CHARGE_ROBOT__STRUCT_H_
#define MESSAGES_PACKAGE__ACTION__DETAIL__CHARGE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'charger_location'
#include "messages_package/msg/detail/coordinates__struct.h"

// Struct defined in action/ChargeRobot in the package messages_package.
typedef struct messages_package__action__ChargeRobot_Goal
{
  messages_package__msg__Coordinates charger_location;
} messages_package__action__ChargeRobot_Goal;

// Struct for a sequence of messages_package__action__ChargeRobot_Goal.
typedef struct messages_package__action__ChargeRobot_Goal__Sequence
{
  messages_package__action__ChargeRobot_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__ChargeRobot_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/ChargeRobot in the package messages_package.
typedef struct messages_package__action__ChargeRobot_Result
{
  int64_t current_battery_level;
} messages_package__action__ChargeRobot_Result;

// Struct for a sequence of messages_package__action__ChargeRobot_Result.
typedef struct messages_package__action__ChargeRobot_Result__Sequence
{
  messages_package__action__ChargeRobot_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__ChargeRobot_Result__Sequence;


// Constants defined in the message

// Struct defined in action/ChargeRobot in the package messages_package.
typedef struct messages_package__action__ChargeRobot_Feedback
{
  int64_t final_battery_level;
} messages_package__action__ChargeRobot_Feedback;

// Struct for a sequence of messages_package__action__ChargeRobot_Feedback.
typedef struct messages_package__action__ChargeRobot_Feedback__Sequence
{
  messages_package__action__ChargeRobot_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__ChargeRobot_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "messages_package/action/detail/charge_robot__struct.h"

// Struct defined in action/ChargeRobot in the package messages_package.
typedef struct messages_package__action__ChargeRobot_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  messages_package__action__ChargeRobot_Goal goal;
} messages_package__action__ChargeRobot_SendGoal_Request;

// Struct for a sequence of messages_package__action__ChargeRobot_SendGoal_Request.
typedef struct messages_package__action__ChargeRobot_SendGoal_Request__Sequence
{
  messages_package__action__ChargeRobot_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__ChargeRobot_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/ChargeRobot in the package messages_package.
typedef struct messages_package__action__ChargeRobot_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} messages_package__action__ChargeRobot_SendGoal_Response;

// Struct for a sequence of messages_package__action__ChargeRobot_SendGoal_Response.
typedef struct messages_package__action__ChargeRobot_SendGoal_Response__Sequence
{
  messages_package__action__ChargeRobot_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__ChargeRobot_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/ChargeRobot in the package messages_package.
typedef struct messages_package__action__ChargeRobot_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} messages_package__action__ChargeRobot_GetResult_Request;

// Struct for a sequence of messages_package__action__ChargeRobot_GetResult_Request.
typedef struct messages_package__action__ChargeRobot_GetResult_Request__Sequence
{
  messages_package__action__ChargeRobot_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__ChargeRobot_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "messages_package/action/detail/charge_robot__struct.h"

// Struct defined in action/ChargeRobot in the package messages_package.
typedef struct messages_package__action__ChargeRobot_GetResult_Response
{
  int8_t status;
  messages_package__action__ChargeRobot_Result result;
} messages_package__action__ChargeRobot_GetResult_Response;

// Struct for a sequence of messages_package__action__ChargeRobot_GetResult_Response.
typedef struct messages_package__action__ChargeRobot_GetResult_Response__Sequence
{
  messages_package__action__ChargeRobot_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__ChargeRobot_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "messages_package/action/detail/charge_robot__struct.h"

// Struct defined in action/ChargeRobot in the package messages_package.
typedef struct messages_package__action__ChargeRobot_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  messages_package__action__ChargeRobot_Feedback feedback;
} messages_package__action__ChargeRobot_FeedbackMessage;

// Struct for a sequence of messages_package__action__ChargeRobot_FeedbackMessage.
typedef struct messages_package__action__ChargeRobot_FeedbackMessage__Sequence
{
  messages_package__action__ChargeRobot_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} messages_package__action__ChargeRobot_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__CHARGE_ROBOT__STRUCT_H_
