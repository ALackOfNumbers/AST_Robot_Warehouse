// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_package:action/MoveItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
#include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_package/action/detail/move_item__functions.h"
#include "messages_package/action/detail/move_item__struct.h"


// Include directives for member types
// Member `item`
#include "messages_package/msg/item.h"
// Member `item`
#include "messages_package/msg/detail/item__rosidl_typesupport_introspection_c.h"
// Member `initial_location`
// Member `final_location`
#include "messages_package/msg/coordinates.h"
// Member `initial_location`
// Member `final_location`
#include "messages_package/msg/detail/coordinates__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__MoveItem_Goal__init(message_memory);
}

void MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_fini_function(void * message_memory)
{
  messages_package__action__MoveItem_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_member_array[3] = {
  {
    "item",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_Goal, item),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_Goal, initial_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_Goal, final_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_members = {
  "messages_package__action",  // message namespace
  "MoveItem_Goal",  // message name
  3,  // number of fields
  sizeof(messages_package__action__MoveItem_Goal),
  MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_member_array,  // message members
  MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_type_support_handle = {
  0,
  &MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_Goal)() {
  MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Item)();
  MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Coordinates)();
  MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Coordinates)();
  if (!MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_type_support_handle.typesupport_identifier) {
    MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItem_Goal__rosidl_typesupport_introspection_c__MoveItem_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/move_item__functions.h"
// already included above
// #include "messages_package/action/detail/move_item__struct.h"


// Include directives for member types
// Member `current_location`
// Member `target_location`
// already included above
// #include "messages_package/msg/coordinates.h"
// Member `current_location`
// Member `target_location`
// already included above
// #include "messages_package/msg/detail/coordinates__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__MoveItem_Result__init(message_memory);
}

void MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_fini_function(void * message_memory)
{
  messages_package__action__MoveItem_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_member_array[2] = {
  {
    "current_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_Result, current_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_Result, target_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_members = {
  "messages_package__action",  // message namespace
  "MoveItem_Result",  // message name
  2,  // number of fields
  sizeof(messages_package__action__MoveItem_Result),
  MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_member_array,  // message members
  MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_type_support_handle = {
  0,
  &MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_Result)() {
  MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Coordinates)();
  MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Coordinates)();
  if (!MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_type_support_handle.typesupport_identifier) {
    MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItem_Result__rosidl_typesupport_introspection_c__MoveItem_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/move_item__functions.h"
// already included above
// #include "messages_package/action/detail/move_item__struct.h"


// Include directives for member types
// Member `failure_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__MoveItem_Feedback__init(message_memory);
}

void MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_fini_function(void * message_memory)
{
  messages_package__action__MoveItem_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_message_member_array[2] = {
  {
    "success_or_failure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_Feedback, success_or_failure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "failure_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_Feedback, failure_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_message_members = {
  "messages_package__action",  // message namespace
  "MoveItem_Feedback",  // message name
  2,  // number of fields
  sizeof(messages_package__action__MoveItem_Feedback),
  MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_message_member_array,  // message members
  MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_message_type_support_handle = {
  0,
  &MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_Feedback)() {
  if (!MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_message_type_support_handle.typesupport_identifier) {
    MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItem_Feedback__rosidl_typesupport_introspection_c__MoveItem_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/move_item__functions.h"
// already included above
// #include "messages_package/action/detail/move_item__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "messages_package/action/move_item.h"
// Member `goal`
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__MoveItem_SendGoal_Request__init(message_memory);
}

void MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_fini_function(void * message_memory)
{
  messages_package__action__MoveItem_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(messages_package__action__MoveItem_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_members = {
  "messages_package__action",  // message namespace
  "MoveItem_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(messages_package__action__MoveItem_SendGoal_Request),
  MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_member_array,  // message members
  MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_type_support_handle = {
  0,
  &MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_SendGoal_Request)() {
  MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_Goal)();
  if (!MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItem_SendGoal_Request__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/move_item__functions.h"
// already included above
// #include "messages_package/action/detail/move_item__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__MoveItem_SendGoal_Response__init(message_memory);
}

void MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_fini_function(void * message_memory)
{
  messages_package__action__MoveItem_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(messages_package__action__MoveItem_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_members = {
  "messages_package__action",  // message namespace
  "MoveItem_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(messages_package__action__MoveItem_SendGoal_Response),
  MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_member_array,  // message members
  MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_type_support_handle = {
  0,
  &MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_SendGoal_Response)() {
  MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItem_SendGoal_Response__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_SendGoal_service_members = {
  "messages_package__action",  // service namespace
  "MoveItem_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_SendGoal_service_type_support_handle = {
  0,
  &messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_SendGoal)() {
  if (!messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_SendGoal_service_type_support_handle.typesupport_identifier) {
    messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_SendGoal_Response)()->data;
  }

  return &messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/move_item__functions.h"
// already included above
// #include "messages_package/action/detail/move_item__struct.h"


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

void MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__MoveItem_GetResult_Request__init(message_memory);
}

void MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_fini_function(void * message_memory)
{
  messages_package__action__MoveItem_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_members = {
  "messages_package__action",  // message namespace
  "MoveItem_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(messages_package__action__MoveItem_GetResult_Request),
  MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_member_array,  // message members
  MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_type_support_handle = {
  0,
  &MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_GetResult_Request)() {
  MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItem_GetResult_Request__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/move_item__functions.h"
// already included above
// #include "messages_package/action/detail/move_item__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "messages_package/action/move_item.h"
// Member `result`
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__MoveItem_GetResult_Response__init(message_memory);
}

void MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_fini_function(void * message_memory)
{
  messages_package__action__MoveItem_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(messages_package__action__MoveItem_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_members = {
  "messages_package__action",  // message namespace
  "MoveItem_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(messages_package__action__MoveItem_GetResult_Response),
  MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_member_array,  // message members
  MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_type_support_handle = {
  0,
  &MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_GetResult_Response)() {
  MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_Result)();
  if (!MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItem_GetResult_Response__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_GetResult_service_members = {
  "messages_package__action",  // service namespace
  "MoveItem_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_GetResult_service_type_support_handle = {
  0,
  &messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_GetResult)() {
  if (!messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_GetResult_service_type_support_handle.typesupport_identifier) {
    messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_GetResult_Response)()->data;
  }

  return &messages_package__action__detail__move_item__rosidl_typesupport_introspection_c__MoveItem_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/move_item__functions.h"
// already included above
// #include "messages_package/action/detail/move_item__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "messages_package/action/move_item.h"
// Member `feedback`
// already included above
// #include "messages_package/action/detail/move_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__MoveItem_FeedbackMessage__init(message_memory);
}

void MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_fini_function(void * message_memory)
{
  messages_package__action__MoveItem_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__MoveItem_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(messages_package__action__MoveItem_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_members = {
  "messages_package__action",  // message namespace
  "MoveItem_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(messages_package__action__MoveItem_FeedbackMessage),
  MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_member_array,  // message members
  MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_type_support_handle = {
  0,
  &MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_FeedbackMessage)() {
  MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, MoveItem_Feedback)();
  if (!MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveItem_FeedbackMessage__rosidl_typesupport_introspection_c__MoveItem_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
