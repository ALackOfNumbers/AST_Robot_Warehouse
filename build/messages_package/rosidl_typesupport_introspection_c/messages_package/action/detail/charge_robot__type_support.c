// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_package:action/ChargeRobot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
#include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_package/action/detail/charge_robot__functions.h"
#include "messages_package/action/detail/charge_robot__struct.h"


// Include directives for member types
// Member `charger_location`
#include "messages_package/msg/coordinates.h"
// Member `charger_location`
#include "messages_package/msg/detail/coordinates__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__ChargeRobot_Goal__init(message_memory);
}

void ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_fini_function(void * message_memory)
{
  messages_package__action__ChargeRobot_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_message_member_array[1] = {
  {
    "charger_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_Goal, charger_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_message_members = {
  "messages_package__action",  // message namespace
  "ChargeRobot_Goal",  // message name
  1,  // number of fields
  sizeof(messages_package__action__ChargeRobot_Goal),
  ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_message_member_array,  // message members
  ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_message_type_support_handle = {
  0,
  &ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_Goal)() {
  ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Coordinates)();
  if (!ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_message_type_support_handle.typesupport_identifier) {
    ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChargeRobot_Goal__rosidl_typesupport_introspection_c__ChargeRobot_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/charge_robot__functions.h"
// already included above
// #include "messages_package/action/detail/charge_robot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__ChargeRobot_Result__init(message_memory);
}

void ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_fini_function(void * message_memory)
{
  messages_package__action__ChargeRobot_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_message_member_array[1] = {
  {
    "current_battery_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_Result, current_battery_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_message_members = {
  "messages_package__action",  // message namespace
  "ChargeRobot_Result",  // message name
  1,  // number of fields
  sizeof(messages_package__action__ChargeRobot_Result),
  ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_message_member_array,  // message members
  ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_message_type_support_handle = {
  0,
  &ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_Result)() {
  if (!ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_message_type_support_handle.typesupport_identifier) {
    ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChargeRobot_Result__rosidl_typesupport_introspection_c__ChargeRobot_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/charge_robot__functions.h"
// already included above
// #include "messages_package/action/detail/charge_robot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__ChargeRobot_Feedback__init(message_memory);
}

void ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_fini_function(void * message_memory)
{
  messages_package__action__ChargeRobot_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_message_member_array[1] = {
  {
    "final_battery_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_Feedback, final_battery_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_message_members = {
  "messages_package__action",  // message namespace
  "ChargeRobot_Feedback",  // message name
  1,  // number of fields
  sizeof(messages_package__action__ChargeRobot_Feedback),
  ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_message_member_array,  // message members
  ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_message_type_support_handle = {
  0,
  &ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_Feedback)() {
  if (!ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_message_type_support_handle.typesupport_identifier) {
    ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChargeRobot_Feedback__rosidl_typesupport_introspection_c__ChargeRobot_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/charge_robot__functions.h"
// already included above
// #include "messages_package/action/detail/charge_robot__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "messages_package/action/charge_robot.h"
// Member `goal`
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__ChargeRobot_SendGoal_Request__init(message_memory);
}

void ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_fini_function(void * message_memory)
{
  messages_package__action__ChargeRobot_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_members = {
  "messages_package__action",  // message namespace
  "ChargeRobot_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(messages_package__action__ChargeRobot_SendGoal_Request),
  ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_member_array,  // message members
  ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_type_support_handle = {
  0,
  &ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_SendGoal_Request)() {
  ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_Goal)();
  if (!ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChargeRobot_SendGoal_Request__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/charge_robot__functions.h"
// already included above
// #include "messages_package/action/detail/charge_robot__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__ChargeRobot_SendGoal_Response__init(message_memory);
}

void ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_fini_function(void * message_memory)
{
  messages_package__action__ChargeRobot_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_members = {
  "messages_package__action",  // message namespace
  "ChargeRobot_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(messages_package__action__ChargeRobot_SendGoal_Response),
  ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_member_array,  // message members
  ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_type_support_handle = {
  0,
  &ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_SendGoal_Response)() {
  ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChargeRobot_SendGoal_Response__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_service_members = {
  "messages_package__action",  // service namespace
  "ChargeRobot_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_service_type_support_handle = {
  0,
  &messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_SendGoal)() {
  if (!messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_service_type_support_handle.typesupport_identifier) {
    messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_SendGoal_Response)()->data;
  }

  return &messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/charge_robot__functions.h"
// already included above
// #include "messages_package/action/detail/charge_robot__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__ChargeRobot_GetResult_Request__init(message_memory);
}

void ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_fini_function(void * message_memory)
{
  messages_package__action__ChargeRobot_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_members = {
  "messages_package__action",  // message namespace
  "ChargeRobot_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(messages_package__action__ChargeRobot_GetResult_Request),
  ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_member_array,  // message members
  ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_type_support_handle = {
  0,
  &ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_GetResult_Request)() {
  ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChargeRobot_GetResult_Request__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/charge_robot__functions.h"
// already included above
// #include "messages_package/action/detail/charge_robot__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "messages_package/action/charge_robot.h"
// Member `result`
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__ChargeRobot_GetResult_Response__init(message_memory);
}

void ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_fini_function(void * message_memory)
{
  messages_package__action__ChargeRobot_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_members = {
  "messages_package__action",  // message namespace
  "ChargeRobot_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(messages_package__action__ChargeRobot_GetResult_Response),
  ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_member_array,  // message members
  ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_type_support_handle = {
  0,
  &ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_GetResult_Response)() {
  ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_Result)();
  if (!ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChargeRobot_GetResult_Response__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_service_members = {
  "messages_package__action",  // service namespace
  "ChargeRobot_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_service_type_support_handle = {
  0,
  &messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_GetResult)() {
  if (!messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_service_type_support_handle.typesupport_identifier) {
    messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_GetResult_Response)()->data;
  }

  return &messages_package__action__detail__charge_robot__rosidl_typesupport_introspection_c__ChargeRobot_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/charge_robot__functions.h"
// already included above
// #include "messages_package/action/detail/charge_robot__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "messages_package/action/charge_robot.h"
// Member `feedback`
// already included above
// #include "messages_package/action/detail/charge_robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__ChargeRobot_FeedbackMessage__init(message_memory);
}

void ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_fini_function(void * message_memory)
{
  messages_package__action__ChargeRobot_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__ChargeRobot_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_members = {
  "messages_package__action",  // message namespace
  "ChargeRobot_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(messages_package__action__ChargeRobot_FeedbackMessage),
  ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_member_array,  // message members
  ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_type_support_handle = {
  0,
  &ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_FeedbackMessage)() {
  ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, ChargeRobot_Feedback)();
  if (!ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChargeRobot_FeedbackMessage__rosidl_typesupport_introspection_c__ChargeRobot_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
