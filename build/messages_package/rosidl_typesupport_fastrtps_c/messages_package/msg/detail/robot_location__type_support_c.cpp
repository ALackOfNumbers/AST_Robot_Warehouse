// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from messages_package:msg/RobotLocation.idl
// generated code does not contain a copyright notice
#include "messages_package/msg/detail/robot_location__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "messages_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "messages_package/msg/detail/robot_location__struct.h"
#include "messages_package/msg/detail/robot_location__functions.h"
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

#include "messages_package/msg/detail/coordinates__functions.h"  // robot_location

// forward declare type support functions
size_t get_serialized_size_messages_package__msg__Coordinates(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_messages_package__msg__Coordinates(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, msg, Coordinates)();


using _RobotLocation__ros_msg_type = messages_package__msg__RobotLocation;

static bool _RobotLocation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotLocation__ros_msg_type * ros_message = static_cast<const _RobotLocation__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_number
  {
    cdr << ros_message->robot_number;
  }

  // Field name: robot_location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, messages_package, msg, Coordinates
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robot_location, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RobotLocation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotLocation__ros_msg_type * ros_message = static_cast<_RobotLocation__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_number
  {
    cdr >> ros_message->robot_number;
  }

  // Field name: robot_location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, messages_package, msg, Coordinates
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robot_location))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t get_serialized_size_messages_package__msg__RobotLocation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotLocation__ros_msg_type * ros_message = static_cast<const _RobotLocation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_number
  {
    size_t item_size = sizeof(ros_message->robot_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_location

  current_alignment += get_serialized_size_messages_package__msg__Coordinates(
    &(ros_message->robot_location), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotLocation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_messages_package__msg__RobotLocation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t max_serialized_size_messages_package__msg__RobotLocation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_location
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

static size_t _RobotLocation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_messages_package__msg__RobotLocation(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotLocation = {
  "messages_package::msg",
  "RobotLocation",
  _RobotLocation__cdr_serialize,
  _RobotLocation__cdr_deserialize,
  _RobotLocation__get_serialized_size,
  _RobotLocation__max_serialized_size
};

static rosidl_message_type_support_t _RobotLocation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotLocation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, msg, RobotLocation)() {
  return &_RobotLocation__type_support;
}

#if defined(__cplusplus)
}
#endif
