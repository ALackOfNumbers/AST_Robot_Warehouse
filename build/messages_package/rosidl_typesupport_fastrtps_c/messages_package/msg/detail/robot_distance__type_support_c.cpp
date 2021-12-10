// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from messages_package:msg/RobotDistance.idl
// generated code does not contain a copyright notice
#include "messages_package/msg/detail/robot_distance__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "messages_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "messages_package/msg/detail/robot_distance__struct.h"
#include "messages_package/msg/detail/robot_distance__functions.h"
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


// forward declare type support functions


using _RobotDistance__ros_msg_type = messages_package__msg__RobotDistance;

static bool _RobotDistance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotDistance__ros_msg_type * ros_message = static_cast<const _RobotDistance__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_number
  {
    cdr << ros_message->robot_number;
  }

  // Field name: robot_distance
  {
    cdr << ros_message->robot_distance;
  }

  // Field name: beacon_number
  {
    cdr << ros_message->beacon_number;
  }

  return true;
}

static bool _RobotDistance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotDistance__ros_msg_type * ros_message = static_cast<_RobotDistance__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_number
  {
    cdr >> ros_message->robot_number;
  }

  // Field name: robot_distance
  {
    cdr >> ros_message->robot_distance;
  }

  // Field name: beacon_number
  {
    cdr >> ros_message->beacon_number;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t get_serialized_size_messages_package__msg__RobotDistance(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotDistance__ros_msg_type * ros_message = static_cast<const _RobotDistance__ros_msg_type *>(untyped_ros_message);
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
  // field.name robot_distance
  {
    size_t item_size = sizeof(ros_message->robot_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beacon_number
  {
    size_t item_size = sizeof(ros_message->beacon_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotDistance__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_messages_package__msg__RobotDistance(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_messages_package
size_t max_serialized_size_messages_package__msg__RobotDistance(
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
  // member: robot_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: beacon_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotDistance__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_messages_package__msg__RobotDistance(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotDistance = {
  "messages_package::msg",
  "RobotDistance",
  _RobotDistance__cdr_serialize,
  _RobotDistance__cdr_deserialize,
  _RobotDistance__get_serialized_size,
  _RobotDistance__max_serialized_size
};

static rosidl_message_type_support_t _RobotDistance__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotDistance,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, messages_package, msg, RobotDistance)() {
  return &_RobotDistance__type_support;
}

#if defined(__cplusplus)
}
#endif
