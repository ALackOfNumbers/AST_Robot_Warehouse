// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_package:action/Order.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
#include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_package/action/detail/order__functions.h"
#include "messages_package/action/detail/order__struct.h"


// Include directives for member types
// Member `items`
#include "messages_package/msg/item.h"
// Member `items`
#include "messages_package/msg/detail/item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__Order_Goal__init(message_memory);
}

void Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_fini_function(void * message_memory)
{
  messages_package__action__Order_Goal__fini(message_memory);
}

size_t Order_Goal__rosidl_typesupport_introspection_c__size_function__Item__items(
  const void * untyped_member)
{
  const messages_package__msg__Item__Sequence * member =
    (const messages_package__msg__Item__Sequence *)(untyped_member);
  return member->size;
}

const void * Order_Goal__rosidl_typesupport_introspection_c__get_const_function__Item__items(
  const void * untyped_member, size_t index)
{
  const messages_package__msg__Item__Sequence * member =
    (const messages_package__msg__Item__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Order_Goal__rosidl_typesupport_introspection_c__get_function__Item__items(
  void * untyped_member, size_t index)
{
  messages_package__msg__Item__Sequence * member =
    (messages_package__msg__Item__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Order_Goal__rosidl_typesupport_introspection_c__resize_function__Item__items(
  void * untyped_member, size_t size)
{
  messages_package__msg__Item__Sequence * member =
    (messages_package__msg__Item__Sequence *)(untyped_member);
  messages_package__msg__Item__Sequence__fini(member);
  return messages_package__msg__Item__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_message_member_array[1] = {
  {
    "items",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__Order_Goal, items),  // bytes offset in struct
    NULL,  // default value
    Order_Goal__rosidl_typesupport_introspection_c__size_function__Item__items,  // size() function pointer
    Order_Goal__rosidl_typesupport_introspection_c__get_const_function__Item__items,  // get_const(index) function pointer
    Order_Goal__rosidl_typesupport_introspection_c__get_function__Item__items,  // get(index) function pointer
    Order_Goal__rosidl_typesupport_introspection_c__resize_function__Item__items  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_message_members = {
  "messages_package__action",  // message namespace
  "Order_Goal",  // message name
  1,  // number of fields
  sizeof(messages_package__action__Order_Goal),
  Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_message_member_array,  // message members
  Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_message_type_support_handle = {
  0,
  &Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_Goal)() {
  Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Item)();
  if (!Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_message_type_support_handle.typesupport_identifier) {
    Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Order_Goal__rosidl_typesupport_introspection_c__Order_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/order__functions.h"
// already included above
// #include "messages_package/action/detail/order__struct.h"


// Include directives for member types
// Member `order_status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Order_Result__rosidl_typesupport_introspection_c__Order_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__Order_Result__init(message_memory);
}

void Order_Result__rosidl_typesupport_introspection_c__Order_Result_fini_function(void * message_memory)
{
  messages_package__action__Order_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Order_Result__rosidl_typesupport_introspection_c__Order_Result_message_member_array[1] = {
  {
    "order_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__Order_Result, order_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Order_Result__rosidl_typesupport_introspection_c__Order_Result_message_members = {
  "messages_package__action",  // message namespace
  "Order_Result",  // message name
  1,  // number of fields
  sizeof(messages_package__action__Order_Result),
  Order_Result__rosidl_typesupport_introspection_c__Order_Result_message_member_array,  // message members
  Order_Result__rosidl_typesupport_introspection_c__Order_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Order_Result__rosidl_typesupport_introspection_c__Order_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Order_Result__rosidl_typesupport_introspection_c__Order_Result_message_type_support_handle = {
  0,
  &Order_Result__rosidl_typesupport_introspection_c__Order_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_Result)() {
  if (!Order_Result__rosidl_typesupport_introspection_c__Order_Result_message_type_support_handle.typesupport_identifier) {
    Order_Result__rosidl_typesupport_introspection_c__Order_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Order_Result__rosidl_typesupport_introspection_c__Order_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/order__functions.h"
// already included above
// #include "messages_package/action/detail/order__struct.h"


// Include directives for member types
// Member `failure_reason`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__Order_Feedback__init(message_memory);
}

void Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_fini_function(void * message_memory)
{
  messages_package__action__Order_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_message_member_array[2] = {
  {
    "success_or_failure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__Order_Feedback, success_or_failure),  // bytes offset in struct
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
    offsetof(messages_package__action__Order_Feedback, failure_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_message_members = {
  "messages_package__action",  // message namespace
  "Order_Feedback",  // message name
  2,  // number of fields
  sizeof(messages_package__action__Order_Feedback),
  Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_message_member_array,  // message members
  Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_message_type_support_handle = {
  0,
  &Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_Feedback)() {
  if (!Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_message_type_support_handle.typesupport_identifier) {
    Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Order_Feedback__rosidl_typesupport_introspection_c__Order_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/order__functions.h"
// already included above
// #include "messages_package/action/detail/order__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "messages_package/action/order.h"
// Member `goal`
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__Order_SendGoal_Request__init(message_memory);
}

void Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_fini_function(void * message_memory)
{
  messages_package__action__Order_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__Order_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(messages_package__action__Order_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_members = {
  "messages_package__action",  // message namespace
  "Order_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(messages_package__action__Order_SendGoal_Request),
  Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_member_array,  // message members
  Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_type_support_handle = {
  0,
  &Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_SendGoal_Request)() {
  Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_Goal)();
  if (!Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Order_SendGoal_Request__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/order__functions.h"
// already included above
// #include "messages_package/action/detail/order__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__Order_SendGoal_Response__init(message_memory);
}

void Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_fini_function(void * message_memory)
{
  messages_package__action__Order_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__Order_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(messages_package__action__Order_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_members = {
  "messages_package__action",  // message namespace
  "Order_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(messages_package__action__Order_SendGoal_Response),
  Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_member_array,  // message members
  Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_type_support_handle = {
  0,
  &Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_SendGoal_Response)() {
  Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Order_SendGoal_Response__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_SendGoal_service_members = {
  "messages_package__action",  // service namespace
  "Order_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_SendGoal_service_type_support_handle = {
  0,
  &messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_SendGoal)() {
  if (!messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_SendGoal_service_type_support_handle.typesupport_identifier) {
    messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_SendGoal_Response)()->data;
  }

  return &messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/order__functions.h"
// already included above
// #include "messages_package/action/detail/order__struct.h"


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

void Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__Order_GetResult_Request__init(message_memory);
}

void Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_fini_function(void * message_memory)
{
  messages_package__action__Order_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__Order_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_members = {
  "messages_package__action",  // message namespace
  "Order_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(messages_package__action__Order_GetResult_Request),
  Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_member_array,  // message members
  Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_type_support_handle = {
  0,
  &Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_GetResult_Request)() {
  Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Order_GetResult_Request__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/order__functions.h"
// already included above
// #include "messages_package/action/detail/order__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "messages_package/action/order.h"
// Member `result`
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__Order_GetResult_Response__init(message_memory);
}

void Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_fini_function(void * message_memory)
{
  messages_package__action__Order_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__Order_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(messages_package__action__Order_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_members = {
  "messages_package__action",  // message namespace
  "Order_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(messages_package__action__Order_GetResult_Response),
  Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_member_array,  // message members
  Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_type_support_handle = {
  0,
  &Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_GetResult_Response)() {
  Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_Result)();
  if (!Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Order_GetResult_Response__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_GetResult_service_members = {
  "messages_package__action",  // service namespace
  "Order_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_GetResult_service_type_support_handle = {
  0,
  &messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_GetResult)() {
  if (!messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_GetResult_service_type_support_handle.typesupport_identifier) {
    messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_GetResult_Response)()->data;
  }

  return &messages_package__action__detail__order__rosidl_typesupport_introspection_c__Order_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/action/detail/order__functions.h"
// already included above
// #include "messages_package/action/detail/order__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "messages_package/action/order.h"
// Member `feedback`
// already included above
// #include "messages_package/action/detail/order__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__action__Order_FeedbackMessage__init(message_memory);
}

void Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_fini_function(void * message_memory)
{
  messages_package__action__Order_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__action__Order_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(messages_package__action__Order_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_members = {
  "messages_package__action",  // message namespace
  "Order_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(messages_package__action__Order_FeedbackMessage),
  Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_member_array,  // message members
  Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_type_support_handle = {
  0,
  &Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_FeedbackMessage)() {
  Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, action, Order_Feedback)();
  if (!Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Order_FeedbackMessage__rosidl_typesupport_introspection_c__Order_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
