// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:action/MoveItem.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__BUILDER_HPP_
#define MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__BUILDER_HPP_

#include "messages_package/action/detail/move_item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_MoveItem_Goal_final_location
{
public:
  explicit Init_MoveItem_Goal_final_location(::messages_package::action::MoveItem_Goal & msg)
  : msg_(msg)
  {}
  ::messages_package::action::MoveItem_Goal final_location(::messages_package::action::MoveItem_Goal::_final_location_type arg)
  {
    msg_.final_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::MoveItem_Goal msg_;
};

class Init_MoveItem_Goal_initial_location
{
public:
  explicit Init_MoveItem_Goal_initial_location(::messages_package::action::MoveItem_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveItem_Goal_final_location initial_location(::messages_package::action::MoveItem_Goal::_initial_location_type arg)
  {
    msg_.initial_location = std::move(arg);
    return Init_MoveItem_Goal_final_location(msg_);
  }

private:
  ::messages_package::action::MoveItem_Goal msg_;
};

class Init_MoveItem_Goal_item
{
public:
  Init_MoveItem_Goal_item()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItem_Goal_initial_location item(::messages_package::action::MoveItem_Goal::_item_type arg)
  {
    msg_.item = std::move(arg);
    return Init_MoveItem_Goal_initial_location(msg_);
  }

private:
  ::messages_package::action::MoveItem_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::MoveItem_Goal>()
{
  return messages_package::action::builder::Init_MoveItem_Goal_item();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_MoveItem_Result_failure_reason
{
public:
  explicit Init_MoveItem_Result_failure_reason(::messages_package::action::MoveItem_Result & msg)
  : msg_(msg)
  {}
  ::messages_package::action::MoveItem_Result failure_reason(::messages_package::action::MoveItem_Result::_failure_reason_type arg)
  {
    msg_.failure_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::MoveItem_Result msg_;
};

class Init_MoveItem_Result_success_or_failure
{
public:
  Init_MoveItem_Result_success_or_failure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItem_Result_failure_reason success_or_failure(::messages_package::action::MoveItem_Result::_success_or_failure_type arg)
  {
    msg_.success_or_failure = std::move(arg);
    return Init_MoveItem_Result_failure_reason(msg_);
  }

private:
  ::messages_package::action::MoveItem_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::MoveItem_Result>()
{
  return messages_package::action::builder::Init_MoveItem_Result_success_or_failure();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_MoveItem_Feedback_target_location
{
public:
  explicit Init_MoveItem_Feedback_target_location(::messages_package::action::MoveItem_Feedback & msg)
  : msg_(msg)
  {}
  ::messages_package::action::MoveItem_Feedback target_location(::messages_package::action::MoveItem_Feedback::_target_location_type arg)
  {
    msg_.target_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::MoveItem_Feedback msg_;
};

class Init_MoveItem_Feedback_current_location
{
public:
  Init_MoveItem_Feedback_current_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItem_Feedback_target_location current_location(::messages_package::action::MoveItem_Feedback::_current_location_type arg)
  {
    msg_.current_location = std::move(arg);
    return Init_MoveItem_Feedback_target_location(msg_);
  }

private:
  ::messages_package::action::MoveItem_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::MoveItem_Feedback>()
{
  return messages_package::action::builder::Init_MoveItem_Feedback_current_location();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_MoveItem_SendGoal_Request_goal
{
public:
  explicit Init_MoveItem_SendGoal_Request_goal(::messages_package::action::MoveItem_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::messages_package::action::MoveItem_SendGoal_Request goal(::messages_package::action::MoveItem_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::MoveItem_SendGoal_Request msg_;
};

class Init_MoveItem_SendGoal_Request_goal_id
{
public:
  Init_MoveItem_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItem_SendGoal_Request_goal goal_id(::messages_package::action::MoveItem_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveItem_SendGoal_Request_goal(msg_);
  }

private:
  ::messages_package::action::MoveItem_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::MoveItem_SendGoal_Request>()
{
  return messages_package::action::builder::Init_MoveItem_SendGoal_Request_goal_id();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_MoveItem_SendGoal_Response_stamp
{
public:
  explicit Init_MoveItem_SendGoal_Response_stamp(::messages_package::action::MoveItem_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::messages_package::action::MoveItem_SendGoal_Response stamp(::messages_package::action::MoveItem_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::MoveItem_SendGoal_Response msg_;
};

class Init_MoveItem_SendGoal_Response_accepted
{
public:
  Init_MoveItem_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItem_SendGoal_Response_stamp accepted(::messages_package::action::MoveItem_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveItem_SendGoal_Response_stamp(msg_);
  }

private:
  ::messages_package::action::MoveItem_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::MoveItem_SendGoal_Response>()
{
  return messages_package::action::builder::Init_MoveItem_SendGoal_Response_accepted();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_MoveItem_GetResult_Request_goal_id
{
public:
  Init_MoveItem_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::action::MoveItem_GetResult_Request goal_id(::messages_package::action::MoveItem_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::MoveItem_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::MoveItem_GetResult_Request>()
{
  return messages_package::action::builder::Init_MoveItem_GetResult_Request_goal_id();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_MoveItem_GetResult_Response_result
{
public:
  explicit Init_MoveItem_GetResult_Response_result(::messages_package::action::MoveItem_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::messages_package::action::MoveItem_GetResult_Response result(::messages_package::action::MoveItem_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::MoveItem_GetResult_Response msg_;
};

class Init_MoveItem_GetResult_Response_status
{
public:
  Init_MoveItem_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItem_GetResult_Response_result status(::messages_package::action::MoveItem_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveItem_GetResult_Response_result(msg_);
  }

private:
  ::messages_package::action::MoveItem_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::MoveItem_GetResult_Response>()
{
  return messages_package::action::builder::Init_MoveItem_GetResult_Response_status();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_MoveItem_FeedbackMessage_feedback
{
public:
  explicit Init_MoveItem_FeedbackMessage_feedback(::messages_package::action::MoveItem_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::messages_package::action::MoveItem_FeedbackMessage feedback(::messages_package::action::MoveItem_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::MoveItem_FeedbackMessage msg_;
};

class Init_MoveItem_FeedbackMessage_goal_id
{
public:
  Init_MoveItem_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveItem_FeedbackMessage_feedback goal_id(::messages_package::action::MoveItem_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveItem_FeedbackMessage_feedback(msg_);
  }

private:
  ::messages_package::action::MoveItem_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::MoveItem_FeedbackMessage>()
{
  return messages_package::action::builder::Init_MoveItem_FeedbackMessage_goal_id();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__BUILDER_HPP_
