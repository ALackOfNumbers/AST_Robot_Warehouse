// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from messages_package:action/Order.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "messages_package/action/detail/order__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_Goal_type_support_ids_t;

static const _Order_Goal_type_support_ids_t _Order_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_Goal_type_support_symbol_names_t _Order_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_Goal)),
  }
};

typedef struct _Order_Goal_type_support_data_t
{
  void * data[2];
} _Order_Goal_type_support_data_t;

static _Order_Goal_type_support_data_t _Order_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_Goal_message_typesupport_map = {
  2,
  "messages_package",
  &_Order_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Order_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Order_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Order_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::action::Order_Goal>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages_package, action, Order_Goal)() {
  return get_message_type_support_handle<messages_package::action::Order_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_Result_type_support_ids_t;

static const _Order_Result_type_support_ids_t _Order_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_Result_type_support_symbol_names_t _Order_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_Result)),
  }
};

typedef struct _Order_Result_type_support_data_t
{
  void * data[2];
} _Order_Result_type_support_data_t;

static _Order_Result_type_support_data_t _Order_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_Result_message_typesupport_map = {
  2,
  "messages_package",
  &_Order_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Order_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Order_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Order_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::action::Order_Result>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages_package, action, Order_Result)() {
  return get_message_type_support_handle<messages_package::action::Order_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_Feedback_type_support_ids_t;

static const _Order_Feedback_type_support_ids_t _Order_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_Feedback_type_support_symbol_names_t _Order_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_Feedback)),
  }
};

typedef struct _Order_Feedback_type_support_data_t
{
  void * data[2];
} _Order_Feedback_type_support_data_t;

static _Order_Feedback_type_support_data_t _Order_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_Feedback_message_typesupport_map = {
  2,
  "messages_package",
  &_Order_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Order_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Order_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Order_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::action::Order_Feedback>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages_package, action, Order_Feedback)() {
  return get_message_type_support_handle<messages_package::action::Order_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_SendGoal_Request_type_support_ids_t;

static const _Order_SendGoal_Request_type_support_ids_t _Order_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_SendGoal_Request_type_support_symbol_names_t _Order_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_SendGoal_Request)),
  }
};

typedef struct _Order_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Order_SendGoal_Request_type_support_data_t;

static _Order_SendGoal_Request_type_support_data_t _Order_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_SendGoal_Request_message_typesupport_map = {
  2,
  "messages_package",
  &_Order_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Order_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Order_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Order_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::action::Order_SendGoal_Request>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages_package, action, Order_SendGoal_Request)() {
  return get_message_type_support_handle<messages_package::action::Order_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_SendGoal_Response_type_support_ids_t;

static const _Order_SendGoal_Response_type_support_ids_t _Order_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_SendGoal_Response_type_support_symbol_names_t _Order_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_SendGoal_Response)),
  }
};

typedef struct _Order_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Order_SendGoal_Response_type_support_data_t;

static _Order_SendGoal_Response_type_support_data_t _Order_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_SendGoal_Response_message_typesupport_map = {
  2,
  "messages_package",
  &_Order_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Order_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Order_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Order_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::action::Order_SendGoal_Response>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages_package, action, Order_SendGoal_Response)() {
  return get_message_type_support_handle<messages_package::action::Order_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_SendGoal_type_support_ids_t;

static const _Order_SendGoal_type_support_ids_t _Order_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_SendGoal_type_support_symbol_names_t _Order_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_SendGoal)),
  }
};

typedef struct _Order_SendGoal_type_support_data_t
{
  void * data[2];
} _Order_SendGoal_type_support_data_t;

static _Order_SendGoal_type_support_data_t _Order_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_SendGoal_service_typesupport_map = {
  2,
  "messages_package",
  &_Order_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Order_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Order_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Order_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<messages_package::action::Order_SendGoal>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_GetResult_Request_type_support_ids_t;

static const _Order_GetResult_Request_type_support_ids_t _Order_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_GetResult_Request_type_support_symbol_names_t _Order_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_GetResult_Request)),
  }
};

typedef struct _Order_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Order_GetResult_Request_type_support_data_t;

static _Order_GetResult_Request_type_support_data_t _Order_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_GetResult_Request_message_typesupport_map = {
  2,
  "messages_package",
  &_Order_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Order_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Order_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Order_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::action::Order_GetResult_Request>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages_package, action, Order_GetResult_Request)() {
  return get_message_type_support_handle<messages_package::action::Order_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_GetResult_Response_type_support_ids_t;

static const _Order_GetResult_Response_type_support_ids_t _Order_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_GetResult_Response_type_support_symbol_names_t _Order_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_GetResult_Response)),
  }
};

typedef struct _Order_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Order_GetResult_Response_type_support_data_t;

static _Order_GetResult_Response_type_support_data_t _Order_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_GetResult_Response_message_typesupport_map = {
  2,
  "messages_package",
  &_Order_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Order_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Order_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Order_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::action::Order_GetResult_Response>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages_package, action, Order_GetResult_Response)() {
  return get_message_type_support_handle<messages_package::action::Order_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_GetResult_type_support_ids_t;

static const _Order_GetResult_type_support_ids_t _Order_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_GetResult_type_support_symbol_names_t _Order_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_GetResult)),
  }
};

typedef struct _Order_GetResult_type_support_data_t
{
  void * data[2];
} _Order_GetResult_type_support_data_t;

static _Order_GetResult_type_support_data_t _Order_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_GetResult_service_typesupport_map = {
  2,
  "messages_package",
  &_Order_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Order_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Order_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Order_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<messages_package::action::Order_GetResult>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Order_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Order_FeedbackMessage_type_support_ids_t;

static const _Order_FeedbackMessage_type_support_ids_t _Order_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Order_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Order_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Order_FeedbackMessage_type_support_symbol_names_t _Order_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, messages_package, action, Order_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages_package, action, Order_FeedbackMessage)),
  }
};

typedef struct _Order_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Order_FeedbackMessage_type_support_data_t;

static _Order_FeedbackMessage_type_support_data_t _Order_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Order_FeedbackMessage_message_typesupport_map = {
  2,
  "messages_package",
  &_Order_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Order_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Order_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Order_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Order_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages_package::action::Order_FeedbackMessage>()
{
  return &::messages_package::action::rosidl_typesupport_cpp::Order_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, messages_package, action, Order_FeedbackMessage)() {
  return get_message_type_support_handle<messages_package::action::Order_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "messages_package/action/detail/order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace messages_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Order_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace messages_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<messages_package::action::Order>()
{
  using ::messages_package::action::rosidl_typesupport_cpp::Order_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Order_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::messages_package::action::Order::Impl::SendGoalService>();
  Order_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::messages_package::action::Order::Impl::GetResultService>();
  Order_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::messages_package::action::Order::Impl::CancelGoalService>();
  Order_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::messages_package::action::Order::Impl::FeedbackMessage>();
  Order_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::messages_package::action::Order::Impl::GoalStatusMessage>();
  return &Order_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
