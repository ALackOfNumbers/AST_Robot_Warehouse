// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:action/Order.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__ORDER__BUILDER_HPP_
#define MESSAGES_PACKAGE__ACTION__DETAIL__ORDER__BUILDER_HPP_

#include "messages_package/action/detail/order__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_Order_Goal_items
{
public:
  Init_Order_Goal_items()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::action::Order_Goal items(::messages_package::action::Order_Goal::_items_type arg)
  {
    msg_.items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::Order_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::Order_Goal>()
{
  return messages_package::action::builder::Init_Order_Goal_items();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_Order_Result_order_status
{
public:
  Init_Order_Result_order_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::action::Order_Result order_status(::messages_package::action::Order_Result::_order_status_type arg)
  {
    msg_.order_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::Order_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::Order_Result>()
{
  return messages_package::action::builder::Init_Order_Result_order_status();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_Order_Feedback_failure_reason
{
public:
  explicit Init_Order_Feedback_failure_reason(::messages_package::action::Order_Feedback & msg)
  : msg_(msg)
  {}
  ::messages_package::action::Order_Feedback failure_reason(::messages_package::action::Order_Feedback::_failure_reason_type arg)
  {
    msg_.failure_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::Order_Feedback msg_;
};

class Init_Order_Feedback_success_or_failure
{
public:
  Init_Order_Feedback_success_or_failure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Order_Feedback_failure_reason success_or_failure(::messages_package::action::Order_Feedback::_success_or_failure_type arg)
  {
    msg_.success_or_failure = std::move(arg);
    return Init_Order_Feedback_failure_reason(msg_);
  }

private:
  ::messages_package::action::Order_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::Order_Feedback>()
{
  return messages_package::action::builder::Init_Order_Feedback_success_or_failure();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_Order_SendGoal_Request_goal
{
public:
  explicit Init_Order_SendGoal_Request_goal(::messages_package::action::Order_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::messages_package::action::Order_SendGoal_Request goal(::messages_package::action::Order_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::Order_SendGoal_Request msg_;
};

class Init_Order_SendGoal_Request_goal_id
{
public:
  Init_Order_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Order_SendGoal_Request_goal goal_id(::messages_package::action::Order_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Order_SendGoal_Request_goal(msg_);
  }

private:
  ::messages_package::action::Order_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::Order_SendGoal_Request>()
{
  return messages_package::action::builder::Init_Order_SendGoal_Request_goal_id();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_Order_SendGoal_Response_stamp
{
public:
  explicit Init_Order_SendGoal_Response_stamp(::messages_package::action::Order_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::messages_package::action::Order_SendGoal_Response stamp(::messages_package::action::Order_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::Order_SendGoal_Response msg_;
};

class Init_Order_SendGoal_Response_accepted
{
public:
  Init_Order_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Order_SendGoal_Response_stamp accepted(::messages_package::action::Order_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Order_SendGoal_Response_stamp(msg_);
  }

private:
  ::messages_package::action::Order_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::Order_SendGoal_Response>()
{
  return messages_package::action::builder::Init_Order_SendGoal_Response_accepted();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_Order_GetResult_Request_goal_id
{
public:
  Init_Order_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::action::Order_GetResult_Request goal_id(::messages_package::action::Order_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::Order_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::Order_GetResult_Request>()
{
  return messages_package::action::builder::Init_Order_GetResult_Request_goal_id();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_Order_GetResult_Response_result
{
public:
  explicit Init_Order_GetResult_Response_result(::messages_package::action::Order_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::messages_package::action::Order_GetResult_Response result(::messages_package::action::Order_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::Order_GetResult_Response msg_;
};

class Init_Order_GetResult_Response_status
{
public:
  Init_Order_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Order_GetResult_Response_result status(::messages_package::action::Order_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Order_GetResult_Response_result(msg_);
  }

private:
  ::messages_package::action::Order_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::Order_GetResult_Response>()
{
  return messages_package::action::builder::Init_Order_GetResult_Response_status();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_Order_FeedbackMessage_feedback
{
public:
  explicit Init_Order_FeedbackMessage_feedback(::messages_package::action::Order_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::messages_package::action::Order_FeedbackMessage feedback(::messages_package::action::Order_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::Order_FeedbackMessage msg_;
};

class Init_Order_FeedbackMessage_goal_id
{
public:
  Init_Order_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Order_FeedbackMessage_feedback goal_id(::messages_package::action::Order_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Order_FeedbackMessage_feedback(msg_);
  }

private:
  ::messages_package::action::Order_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::Order_FeedbackMessage>()
{
  return messages_package::action::builder::Init_Order_FeedbackMessage_goal_id();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__ORDER__BUILDER_HPP_
