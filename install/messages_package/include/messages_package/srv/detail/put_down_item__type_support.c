// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from messages_package:srv/PutDownItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "messages_package/srv/detail/put_down_item__rosidl_typesupport_introspection_c.h"
#include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "messages_package/srv/detail/put_down_item__functions.h"
#include "messages_package/srv/detail/put_down_item__struct.h"


// Include directives for member types
// Member `item`
#include "messages_package/msg/item.h"
// Member `item`
#include "messages_package/msg/detail/item__rosidl_typesupport_introspection_c.h"
// Member `location`
#include "messages_package/msg/coordinates.h"
// Member `location`
#include "messages_package/msg/detail/coordinates__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__srv__PutDownItem_Request__init(message_memory);
}

void PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_fini_function(void * message_memory)
{
  messages_package__srv__PutDownItem_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_member_array[2] = {
  {
    "item",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__srv__PutDownItem_Request, item),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__srv__PutDownItem_Request, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_members = {
  "messages_package__srv",  // message namespace
  "PutDownItem_Request",  // message name
  2,  // number of fields
  sizeof(messages_package__srv__PutDownItem_Request),
  PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_member_array,  // message members
  PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_type_support_handle = {
  0,
  &PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, srv, PutDownItem_Request)() {
  PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Item)();
  PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, msg, Coordinates)();
  if (!PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_type_support_handle.typesupport_identifier) {
    PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PutDownItem_Request__rosidl_typesupport_introspection_c__PutDownItem_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "messages_package/srv/detail/put_down_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "messages_package/srv/detail/put_down_item__functions.h"
// already included above
// #include "messages_package/srv/detail/put_down_item__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  messages_package__srv__PutDownItem_Response__init(message_memory);
}

void PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_fini_function(void * message_memory)
{
  messages_package__srv__PutDownItem_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_message_member_array[1] = {
  {
    "success_or_failure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages_package__srv__PutDownItem_Response, success_or_failure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_message_members = {
  "messages_package__srv",  // message namespace
  "PutDownItem_Response",  // message name
  1,  // number of fields
  sizeof(messages_package__srv__PutDownItem_Response),
  PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_message_member_array,  // message members
  PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_message_type_support_handle = {
  0,
  &PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, srv, PutDownItem_Response)() {
  if (!PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_message_type_support_handle.typesupport_identifier) {
    PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PutDownItem_Response__rosidl_typesupport_introspection_c__PutDownItem_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "messages_package/srv/detail/put_down_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers messages_package__srv__detail__put_down_item__rosidl_typesupport_introspection_c__PutDownItem_service_members = {
  "messages_package__srv",  // service namespace
  "PutDownItem",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // messages_package__srv__detail__put_down_item__rosidl_typesupport_introspection_c__PutDownItem_Request_message_type_support_handle,
  NULL  // response message
  // messages_package__srv__detail__put_down_item__rosidl_typesupport_introspection_c__PutDownItem_Response_message_type_support_handle
};

static rosidl_service_type_support_t messages_package__srv__detail__put_down_item__rosidl_typesupport_introspection_c__PutDownItem_service_type_support_handle = {
  0,
  &messages_package__srv__detail__put_down_item__rosidl_typesupport_introspection_c__PutDownItem_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, srv, PutDownItem_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, srv, PutDownItem_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_messages_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, srv, PutDownItem)() {
  if (!messages_package__srv__detail__put_down_item__rosidl_typesupport_introspection_c__PutDownItem_service_type_support_handle.typesupport_identifier) {
    messages_package__srv__detail__put_down_item__rosidl_typesupport_introspection_c__PutDownItem_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)messages_package__srv__detail__put_down_item__rosidl_typesupport_introspection_c__PutDownItem_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, srv, PutDownItem_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, messages_package, srv, PutDownItem_Response)()->data;
  }

  return &messages_package__srv__detail__put_down_item__rosidl_typesupport_introspection_c__PutDownItem_service_type_support_handle;
}
