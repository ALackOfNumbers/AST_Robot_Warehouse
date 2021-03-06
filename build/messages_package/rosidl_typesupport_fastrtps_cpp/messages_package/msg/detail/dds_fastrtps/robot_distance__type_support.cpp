// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from messages_package:msg/RobotDistance.idl
// generated code does not contain a copyright notice
#include "messages_package/msg/detail/robot_distance__rosidl_typesupport_fastrtps_cpp.hpp"
#include "messages_package/msg/detail/robot_distance__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace messages_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
cdr_serialize(
  const messages_package::msg::RobotDistance & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_number
  cdr << ros_message.robot_number;
  // Member: robot_distance
  cdr << ros_message.robot_distance;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  messages_package::msg::RobotDistance & ros_message)
{
  // Member: robot_number
  cdr >> ros_message.robot_number;

  // Member: robot_distance
  cdr >> ros_message.robot_distance;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
get_serialized_size(
  const messages_package::msg::RobotDistance & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_number
  {
    size_t item_size = sizeof(ros_message.robot_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_distance
  {
    size_t item_size = sizeof(ros_message.robot_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
max_serialized_size_RobotDistance(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: robot_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: robot_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RobotDistance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const messages_package::msg::RobotDistance *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotDistance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<messages_package::msg::RobotDistance *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotDistance__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const messages_package::msg::RobotDistance *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotDistance__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotDistance(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotDistance__callbacks = {
  "messages_package::msg",
  "RobotDistance",
  _RobotDistance__cdr_serialize,
  _RobotDistance__cdr_deserialize,
  _RobotDistance__get_serialized_size,
  _RobotDistance__max_serialized_size
};

static rosidl_message_type_support_t _RobotDistance__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotDistance__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace messages_package

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_messages_package
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::msg::RobotDistance>()
{
  return &messages_package::msg::typesupport_fastrtps_cpp::_RobotDistance__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, msg, RobotDistance)() {
  return &messages_package::msg::typesupport_fastrtps_cpp::_RobotDistance__handle;
}

#ifdef __cplusplus
}
#endif
