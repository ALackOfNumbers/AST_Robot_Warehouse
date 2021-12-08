// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from messages_package:msg/Item.idl
// generated code does not contain a copyright notice
#include "messages_package/msg/detail/item__rosidl_typesupport_fastrtps_cpp.hpp"
#include "messages_package/msg/detail/item__struct.hpp"

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
bool cdr_serialize(
  const messages_package::msg::Coordinates &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  messages_package::msg::Coordinates &);
size_t get_serialized_size(
  const messages_package::msg::Coordinates &,
  size_t current_alignment);
size_t
max_serialized_size_Coordinates(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace messages_package


namespace messages_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
cdr_serialize(
  const messages_package::msg::Item & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: age
  cdr << ros_message.age;
  // Member: location
  messages_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.location,
    cdr);
  // Member: quantity
  cdr << ros_message.quantity;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  messages_package::msg::Item & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: age
  cdr >> ros_message.age;

  // Member: location
  messages_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.location);

  // Member: quantity
  cdr >> ros_message.quantity;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
get_serialized_size(
  const messages_package::msg::Item & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: location

  current_alignment +=
    messages_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.location, current_alignment);
  // Member: quantity
  {
    size_t item_size = sizeof(ros_message.quantity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
max_serialized_size_Item(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: location
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        messages_package::msg::typesupport_fastrtps_cpp::max_serialized_size_Coordinates(
        full_bounded, current_alignment);
    }
  }

  // Member: quantity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Item__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const messages_package::msg::Item *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Item__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<messages_package::msg::Item *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Item__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const messages_package::msg::Item *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Item__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Item(full_bounded, 0);
}

static message_type_support_callbacks_t _Item__callbacks = {
  "messages_package::msg",
  "Item",
  _Item__cdr_serialize,
  _Item__cdr_deserialize,
  _Item__get_serialized_size,
  _Item__max_serialized_size
};

static rosidl_message_type_support_t _Item__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Item__callbacks,
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
get_message_type_support_handle<messages_package::msg::Item>()
{
  return &messages_package::msg::typesupport_fastrtps_cpp::_Item__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, msg, Item)() {
  return &messages_package::msg::typesupport_fastrtps_cpp::_Item__handle;
}

#ifdef __cplusplus
}
#endif
