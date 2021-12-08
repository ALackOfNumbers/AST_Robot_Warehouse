// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from messages_package:srv/PutDownItem.idl
// generated code does not contain a copyright notice
#include "messages_package/srv/detail/put_down_item__rosidl_typesupport_fastrtps_cpp.hpp"
#include "messages_package/srv/detail/put_down_item__struct.hpp"

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
  const messages_package::msg::Item &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  messages_package::msg::Item &);
size_t get_serialized_size(
  const messages_package::msg::Item &,
  size_t current_alignment);
size_t
max_serialized_size_Item(
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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
cdr_serialize(
  const messages_package::srv::PutDownItem_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: item
  messages_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.item,
    cdr);
  // Member: location
  messages_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.location,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  messages_package::srv::PutDownItem_Request & ros_message)
{
  // Member: item
  messages_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.item);

  // Member: location
  messages_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.location);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
get_serialized_size(
  const messages_package::srv::PutDownItem_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: item

  current_alignment +=
    messages_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.item, current_alignment);
  // Member: location

  current_alignment +=
    messages_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.location, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
max_serialized_size_PutDownItem_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: item
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        messages_package::msg::typesupport_fastrtps_cpp::max_serialized_size_Item(
        full_bounded, current_alignment);
    }
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

  return current_alignment - initial_alignment;
}

static bool _PutDownItem_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const messages_package::srv::PutDownItem_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PutDownItem_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<messages_package::srv::PutDownItem_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PutDownItem_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const messages_package::srv::PutDownItem_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PutDownItem_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PutDownItem_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _PutDownItem_Request__callbacks = {
  "messages_package::srv",
  "PutDownItem_Request",
  _PutDownItem_Request__cdr_serialize,
  _PutDownItem_Request__cdr_deserialize,
  _PutDownItem_Request__get_serialized_size,
  _PutDownItem_Request__max_serialized_size
};

static rosidl_message_type_support_t _PutDownItem_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PutDownItem_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace messages_package

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_messages_package
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::srv::PutDownItem_Request>()
{
  return &messages_package::srv::typesupport_fastrtps_cpp::_PutDownItem_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, srv, PutDownItem_Request)() {
  return &messages_package::srv::typesupport_fastrtps_cpp::_PutDownItem_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace messages_package
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
cdr_serialize(
  const messages_package::srv::PutDownItem_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  messages_package::srv::PutDownItem_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
get_serialized_size(
  const messages_package::srv::PutDownItem_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_messages_package
max_serialized_size_PutDownItem_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _PutDownItem_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const messages_package::srv::PutDownItem_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PutDownItem_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<messages_package::srv::PutDownItem_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PutDownItem_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const messages_package::srv::PutDownItem_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PutDownItem_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PutDownItem_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _PutDownItem_Response__callbacks = {
  "messages_package::srv",
  "PutDownItem_Response",
  _PutDownItem_Response__cdr_serialize,
  _PutDownItem_Response__cdr_deserialize,
  _PutDownItem_Response__get_serialized_size,
  _PutDownItem_Response__max_serialized_size
};

static rosidl_message_type_support_t _PutDownItem_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PutDownItem_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace messages_package

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_messages_package
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::srv::PutDownItem_Response>()
{
  return &messages_package::srv::typesupport_fastrtps_cpp::_PutDownItem_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, srv, PutDownItem_Response)() {
  return &messages_package::srv::typesupport_fastrtps_cpp::_PutDownItem_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace messages_package
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _PutDownItem__callbacks = {
  "messages_package::srv",
  "PutDownItem",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, srv, PutDownItem_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, srv, PutDownItem_Response)(),
};

static rosidl_service_type_support_t _PutDownItem__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PutDownItem__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace messages_package

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_messages_package
const rosidl_service_type_support_t *
get_service_type_support_handle<messages_package::srv::PutDownItem>()
{
  return &messages_package::srv::typesupport_fastrtps_cpp::_PutDownItem__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, srv, PutDownItem)() {
  return &messages_package::srv::typesupport_fastrtps_cpp::_PutDownItem__handle;
}

#ifdef __cplusplus
}
#endif
