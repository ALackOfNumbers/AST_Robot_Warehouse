// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from messages_package:srv/PickUpItem.idl
// generated code does not contain a copyright notice
#include "messages_package/srv/detail/pick_up_item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "messages_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "messages_package/srv/detail/pick_up_item__struct.h"
#include "messages_package/srv/detail/pick_up_item__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "messages_package/msg/detail/coordinates__functions.h"  // location
#include "messages_package/msg/detail/item__functions.h"  // item

// forward declare type support functions
size_t get_serialized_size_messages_package__msg__Coordinates(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_messages_package__msg__Coordinates(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, msg, Coordinates)();
size_t get_serialized_size_messages_package__msg__Item(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_messages_package__msg__Item(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, msg, Item)();


using _PickUpItem_Request__ros_msg_type = messages_package__srv__PickUpItem_Request;

static bool _PickUpItem_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PickUpItem_Request__ros_msg_type * ros_message = static_cast<const _PickUpItem_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: item
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, messages_package, msg, Item
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->item, cdr))
    {
      return false;
    }
  }

  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, messages_package, msg, Coordinates
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->location, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PickUpItem_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PickUpItem_Request__ros_msg_type * ros_message = static_cast<_PickUpItem_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: item
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, messages_package, msg, Item
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->item))
    {
      return false;
    }
  }

  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, messages_package, msg, Coordinates
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->location))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t get_serialized_size_messages_package__srv__PickUpItem_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PickUpItem_Request__ros_msg_type * ros_message = static_cast<const _PickUpItem_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name item

  current_alignment += get_serialized_size_messages_package__msg__Item(
    &(ros_message->item), current_alignment);
  // field.name location

  current_alignment += get_serialized_size_messages_package__msg__Coordinates(
    &(ros_message->location), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PickUpItem_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_messages_package__srv__PickUpItem_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t max_serialized_size_messages_package__srv__PickUpItem_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: item
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_messages_package__msg__Item(
        full_bounded, current_alignment);
    }
  }
  // member: location
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_messages_package__msg__Coordinates(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PickUpItem_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_messages_package__srv__PickUpItem_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PickUpItem_Request = {
  "messages_package::srv",
  "PickUpItem_Request",
  _PickUpItem_Request__cdr_serialize,
  _PickUpItem_Request__cdr_deserialize,
  _PickUpItem_Request__get_serialized_size,
  _PickUpItem_Request__max_serialized_size
};

static rosidl_message_type_support_t _PickUpItem_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PickUpItem_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, srv, PickUpItem_Request)() {
  return &_PickUpItem_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "messages_package/srv/detail/pick_up_item__struct.h"
// already included above
// #include "messages_package/srv/detail/pick_up_item__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PickUpItem_Response__ros_msg_type = messages_package__srv__PickUpItem_Response;

static bool _PickUpItem_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PickUpItem_Response__ros_msg_type * ros_message = static_cast<const _PickUpItem_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _PickUpItem_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PickUpItem_Response__ros_msg_type * ros_message = static_cast<_PickUpItem_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t get_serialized_size_messages_package__srv__PickUpItem_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PickUpItem_Response__ros_msg_type * ros_message = static_cast<const _PickUpItem_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PickUpItem_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_messages_package__srv__PickUpItem_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t max_serialized_size_messages_package__srv__PickUpItem_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PickUpItem_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_messages_package__srv__PickUpItem_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PickUpItem_Response = {
  "messages_package::srv",
  "PickUpItem_Response",
  _PickUpItem_Response__cdr_serialize,
  _PickUpItem_Response__cdr_deserialize,
  _PickUpItem_Response__get_serialized_size,
  _PickUpItem_Response__max_serialized_size
};

static rosidl_message_type_support_t _PickUpItem_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PickUpItem_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, srv, PickUpItem_Response)() {
  return &_PickUpItem_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "messages_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "messages_package/srv/pick_up_item.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PickUpItem__callbacks = {
  "messages_package::srv",
  "PickUpItem",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, srv, PickUpItem_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, srv, PickUpItem_Response)(),
};

static rosidl_service_type_support_t PickUpItem__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PickUpItem__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, srv, PickUpItem)() {
  return &PickUpItem__handle;
}

#if defined(__cplusplus)
}
#endif
