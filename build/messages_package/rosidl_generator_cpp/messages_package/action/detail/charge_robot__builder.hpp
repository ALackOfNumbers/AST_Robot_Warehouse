// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages_package:action/ChargeRobot.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__CHARGE_ROBOT__BUILDER_HPP_
#define MESSAGES_PACKAGE__ACTION__DETAIL__CHARGE_ROBOT__BUILDER_HPP_

#include "messages_package/action/detail/charge_robot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_Goal_charger_location
{
public:
  Init_ChargeRobot_Goal_charger_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::action::ChargeRobot_Goal charger_location(::messages_package::action::ChargeRobot_Goal::_charger_location_type arg)
  {
    msg_.charger_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::ChargeRobot_Goal>()
{
  return messages_package::action::builder::Init_ChargeRobot_Goal_charger_location();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_Result_current_battery_level
{
public:
  Init_ChargeRobot_Result_current_battery_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::action::ChargeRobot_Result current_battery_level(::messages_package::action::ChargeRobot_Result::_current_battery_level_type arg)
  {
    msg_.current_battery_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::ChargeRobot_Result>()
{
  return messages_package::action::builder::Init_ChargeRobot_Result_current_battery_level();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_Feedback_final_battery_level
{
public:
  Init_ChargeRobot_Feedback_final_battery_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::action::ChargeRobot_Feedback final_battery_level(::messages_package::action::ChargeRobot_Feedback::_final_battery_level_type arg)
  {
    msg_.final_battery_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::ChargeRobot_Feedback>()
{
  return messages_package::action::builder::Init_ChargeRobot_Feedback_final_battery_level();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_SendGoal_Request_goal
{
public:
  explicit Init_ChargeRobot_SendGoal_Request_goal(::messages_package::action::ChargeRobot_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::messages_package::action::ChargeRobot_SendGoal_Request goal(::messages_package::action::ChargeRobot_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_SendGoal_Request msg_;
};

class Init_ChargeRobot_SendGoal_Request_goal_id
{
public:
  Init_ChargeRobot_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_SendGoal_Request_goal goal_id(::messages_package::action::ChargeRobot_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ChargeRobot_SendGoal_Request_goal(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::ChargeRobot_SendGoal_Request>()
{
  return messages_package::action::builder::Init_ChargeRobot_SendGoal_Request_goal_id();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_SendGoal_Response_stamp
{
public:
  explicit Init_ChargeRobot_SendGoal_Response_stamp(::messages_package::action::ChargeRobot_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::messages_package::action::ChargeRobot_SendGoal_Response stamp(::messages_package::action::ChargeRobot_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_SendGoal_Response msg_;
};

class Init_ChargeRobot_SendGoal_Response_accepted
{
public:
  Init_ChargeRobot_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_SendGoal_Response_stamp accepted(::messages_package::action::ChargeRobot_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ChargeRobot_SendGoal_Response_stamp(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::ChargeRobot_SendGoal_Response>()
{
  return messages_package::action::builder::Init_ChargeRobot_SendGoal_Response_accepted();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_GetResult_Request_goal_id
{
public:
  Init_ChargeRobot_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages_package::action::ChargeRobot_GetResult_Request goal_id(::messages_package::action::ChargeRobot_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::ChargeRobot_GetResult_Request>()
{
  return messages_package::action::builder::Init_ChargeRobot_GetResult_Request_goal_id();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_GetResult_Response_result
{
public:
  explicit Init_ChargeRobot_GetResult_Response_result(::messages_package::action::ChargeRobot_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::messages_package::action::ChargeRobot_GetResult_Response result(::messages_package::action::ChargeRobot_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_GetResult_Response msg_;
};

class Init_ChargeRobot_GetResult_Response_status
{
public:
  Init_ChargeRobot_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_GetResult_Response_result status(::messages_package::action::ChargeRobot_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ChargeRobot_GetResult_Response_result(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::ChargeRobot_GetResult_Response>()
{
  return messages_package::action::builder::Init_ChargeRobot_GetResult_Response_status();
}

}  // namespace messages_package


namespace messages_package
{

namespace action
{

namespace builder
{

class Init_ChargeRobot_FeedbackMessage_feedback
{
public:
  explicit Init_ChargeRobot_FeedbackMessage_feedback(::messages_package::action::ChargeRobot_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::messages_package::action::ChargeRobot_FeedbackMessage feedback(::messages_package::action::ChargeRobot_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_FeedbackMessage msg_;
};

class Init_ChargeRobot_FeedbackMessage_goal_id
{
public:
  Init_ChargeRobot_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeRobot_FeedbackMessage_feedback goal_id(::messages_package::action::ChargeRobot_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ChargeRobot_FeedbackMessage_feedback(msg_);
  }

private:
  ::messages_package::action::ChargeRobot_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages_package::action::ChargeRobot_FeedbackMessage>()
{
  return messages_package::action::builder::Init_ChargeRobot_FeedbackMessage_goal_id();
}

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__CHARGE_ROBOT__BUILDER_HPP_
