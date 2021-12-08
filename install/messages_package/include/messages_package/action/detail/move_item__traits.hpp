// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages_package:action/MoveItem.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__TRAITS_HPP_
#define MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__TRAITS_HPP_

#include "messages_package/action/detail/move_item__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'item'
#include "messages_package/msg/detail/item__traits.hpp"
// Member 'initial_location'
// Member 'final_location'
#include "messages_package/msg/detail/coordinates__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_Goal>()
{
  return "messages_package::action::MoveItem_Goal";
}

template<>
inline const char * name<messages_package::action::MoveItem_Goal>()
{
  return "messages_package/action/MoveItem_Goal";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_Goal>
  : std::integral_constant<bool, has_fixed_size<messages_package::msg::Coordinates>::value && has_fixed_size<messages_package::msg::Item>::value> {};

template<>
struct has_bounded_size<messages_package::action::MoveItem_Goal>
  : std::integral_constant<bool, has_bounded_size<messages_package::msg::Coordinates>::value && has_bounded_size<messages_package::msg::Item>::value> {};

template<>
struct is_message<messages_package::action::MoveItem_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_location'
// Member 'target_location'
// already included above
// #include "messages_package/msg/detail/coordinates__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_Result>()
{
  return "messages_package::action::MoveItem_Result";
}

template<>
inline const char * name<messages_package::action::MoveItem_Result>()
{
  return "messages_package/action/MoveItem_Result";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_Result>
  : std::integral_constant<bool, has_fixed_size<messages_package::msg::Coordinates>::value> {};

template<>
struct has_bounded_size<messages_package::action::MoveItem_Result>
  : std::integral_constant<bool, has_bounded_size<messages_package::msg::Coordinates>::value> {};

template<>
struct is_message<messages_package::action::MoveItem_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_Feedback>()
{
  return "messages_package::action::MoveItem_Feedback";
}

template<>
inline const char * name<messages_package::action::MoveItem_Feedback>()
{
  return "messages_package/action/MoveItem_Feedback";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<messages_package::action::MoveItem_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<messages_package::action::MoveItem_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "messages_package/action/detail/move_item__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_SendGoal_Request>()
{
  return "messages_package::action::MoveItem_SendGoal_Request";
}

template<>
inline const char * name<messages_package::action::MoveItem_SendGoal_Request>()
{
  return "messages_package/action/MoveItem_SendGoal_Request";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<messages_package::action::MoveItem_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<messages_package::action::MoveItem_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<messages_package::action::MoveItem_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<messages_package::action::MoveItem_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_SendGoal_Response>()
{
  return "messages_package::action::MoveItem_SendGoal_Response";
}

template<>
inline const char * name<messages_package::action::MoveItem_SendGoal_Response>()
{
  return "messages_package/action/MoveItem_SendGoal_Response";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<messages_package::action::MoveItem_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<messages_package::action::MoveItem_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_SendGoal>()
{
  return "messages_package::action::MoveItem_SendGoal";
}

template<>
inline const char * name<messages_package::action::MoveItem_SendGoal>()
{
  return "messages_package/action/MoveItem_SendGoal";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<messages_package::action::MoveItem_SendGoal_Request>::value &&
    has_fixed_size<messages_package::action::MoveItem_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<messages_package::action::MoveItem_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<messages_package::action::MoveItem_SendGoal_Request>::value &&
    has_bounded_size<messages_package::action::MoveItem_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<messages_package::action::MoveItem_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<messages_package::action::MoveItem_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<messages_package::action::MoveItem_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_GetResult_Request>()
{
  return "messages_package::action::MoveItem_GetResult_Request";
}

template<>
inline const char * name<messages_package::action::MoveItem_GetResult_Request>()
{
  return "messages_package/action/MoveItem_GetResult_Request";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<messages_package::action::MoveItem_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<messages_package::action::MoveItem_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "messages_package/action/detail/move_item__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_GetResult_Response>()
{
  return "messages_package::action::MoveItem_GetResult_Response";
}

template<>
inline const char * name<messages_package::action::MoveItem_GetResult_Response>()
{
  return "messages_package/action/MoveItem_GetResult_Response";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<messages_package::action::MoveItem_Result>::value> {};

template<>
struct has_bounded_size<messages_package::action::MoveItem_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<messages_package::action::MoveItem_Result>::value> {};

template<>
struct is_message<messages_package::action::MoveItem_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_GetResult>()
{
  return "messages_package::action::MoveItem_GetResult";
}

template<>
inline const char * name<messages_package::action::MoveItem_GetResult>()
{
  return "messages_package/action/MoveItem_GetResult";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<messages_package::action::MoveItem_GetResult_Request>::value &&
    has_fixed_size<messages_package::action::MoveItem_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<messages_package::action::MoveItem_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<messages_package::action::MoveItem_GetResult_Request>::value &&
    has_bounded_size<messages_package::action::MoveItem_GetResult_Response>::value
  >
{
};

template<>
struct is_service<messages_package::action::MoveItem_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<messages_package::action::MoveItem_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<messages_package::action::MoveItem_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "messages_package/action/detail/move_item__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<messages_package::action::MoveItem_FeedbackMessage>()
{
  return "messages_package::action::MoveItem_FeedbackMessage";
}

template<>
inline const char * name<messages_package::action::MoveItem_FeedbackMessage>()
{
  return "messages_package/action/MoveItem_FeedbackMessage";
}

template<>
struct has_fixed_size<messages_package::action::MoveItem_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<messages_package::action::MoveItem_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<messages_package::action::MoveItem_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<messages_package::action::MoveItem_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<messages_package::action::MoveItem_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<messages_package::action::MoveItem>
  : std::true_type
{
};

template<>
struct is_action_goal<messages_package::action::MoveItem_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<messages_package::action::MoveItem_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<messages_package::action::MoveItem_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__TRAITS_HPP_