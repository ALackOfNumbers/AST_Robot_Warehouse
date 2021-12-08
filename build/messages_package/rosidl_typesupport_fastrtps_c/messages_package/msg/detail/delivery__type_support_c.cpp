// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from messages_package:msg/Delivery.idl
// generated code does not contain a copyright notice
#include "messages_package/msg/detail/delivery__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "messages_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "messages_package/msg/detail/delivery__struct.h"
#include "messages_package/msg/detail/delivery__functions.h"
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
#include "messages_package/msg/detail/item__functions.h"  // items

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


using _Delivery__ros_msg_type = messages_package__msg__Delivery;

static bool _Delivery__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Delivery__ros_msg_type * ros_message = static_cast<const _Delivery__ros_msg_type *>(untyped_ros_message);
  // Field name: items
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, messages_package, msg, Item
      )()->data);
    size_t size = ros_message->items.size;
    auto array_ptr = ros_message->items.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
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

  // Field name: time
  {
    cdr << ros_message->time;
  }

  return true;
}

static bool _Delivery__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Delivery__ros_msg_type * ros_message = static_cast<_Delivery__ros_msg_type *>(untyped_ros_message);
  // Field name: items
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, messages_package, msg, Item
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->items.data) {
      messages_package__msg__Item__Sequence__fini(&ros_message->items);
    }
    if (!messages_package__msg__Item__Sequence__init(&ros_message->items, size)) {
      return "failed to create array for field 'items'";
    }
    auto array_ptr = ros_message->items.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
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

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t get_serialized_size_messages_package__msg__Delivery(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Delivery__ros_msg_type * ros_message = static_cast<const _Delivery__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name items
  {
    size_t array_size = ros_message->items.size;
    auto array_ptr = ros_message->items.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_messages_package__msg__Item(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name location

  current_alignment += get_serialized_size_messages_package__msg__Coordinates(
    &(ros_message->location), current_alignment);
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Delivery__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_messages_package__msg__Delivery(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t max_serialized_size_messages_package__msg__Delivery(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: items
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


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
  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Delivery__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_messages_package__msg__Delivery(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Delivery = {
  "messages_package::msg",
  "Delivery",
  _Delivery__cdr_serialize,
  _Delivery__cdr_deserialize,
  _Delivery__get_serialized_size,
  _Delivery__max_serialized_size
};

static rosidl_message_type_support_t _Delivery__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Delivery,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, msg, Delivery)() {
  return &_Delivery__type_support;
}

#if defined(__cplusplus)
}
#endif
