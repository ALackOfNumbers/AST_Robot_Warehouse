// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:action/MoveItem.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__STRUCT_HPP_
#define MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'item'
#include "messages_package/msg/detail/item__struct.hpp"
// Member 'initial_location'
// Member 'final_location'
#include "messages_package/msg/detail/coordinates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__MoveItem_Goal __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__MoveItem_Goal __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveItem_Goal_
{
  using Type = MoveItem_Goal_<ContainerAllocator>;

  explicit MoveItem_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item(_init),
    initial_location(_init),
    final_location(_init)
  {
    (void)_init;
  }

  explicit MoveItem_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item(_alloc, _init),
    initial_location(_alloc, _init),
    final_location(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _item_type =
    messages_package::msg::Item_<ContainerAllocator>;
  _item_type item;
  using _initial_location_type =
    messages_package::msg::Coordinates_<ContainerAllocator>;
  _initial_location_type initial_location;
  using _final_location_type =
    messages_package::msg::Coordinates_<ContainerAllocator>;
  _final_location_type final_location;

  // setters for named parameter idiom
  Type & set__item(
    const messages_package::msg::Item_<ContainerAllocator> & _arg)
  {
    this->item = _arg;
    return *this;
  }
  Type & set__initial_location(
    const messages_package::msg::Coordinates_<ContainerAllocator> & _arg)
  {
    this->initial_location = _arg;
    return *this;
  }
  Type & set__final_location(
    const messages_package::msg::Coordinates_<ContainerAllocator> & _arg)
  {
    this->final_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::MoveItem_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::MoveItem_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__MoveItem_Goal
    std::shared_ptr<messages_package::action::MoveItem_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__MoveItem_Goal
    std::shared_ptr<messages_package::action::MoveItem_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItem_Goal_ & other) const
  {
    if (this->item != other.item) {
      return false;
    }
    if (this->initial_location != other.initial_location) {
      return false;
    }
    if (this->final_location != other.final_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItem_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItem_Goal_

// alias to use template instance with default allocator
using MoveItem_Goal =
  messages_package::action::MoveItem_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'current_location'
// Member 'target_location'
// already included above
// #include "messages_package/msg/detail/coordinates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__MoveItem_Result __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__MoveItem_Result __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveItem_Result_
{
  using Type = MoveItem_Result_<ContainerAllocator>;

  explicit MoveItem_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_location(_init),
    target_location(_init)
  {
    (void)_init;
  }

  explicit MoveItem_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_location(_alloc, _init),
    target_location(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _current_location_type =
    messages_package::msg::Coordinates_<ContainerAllocator>;
  _current_location_type current_location;
  using _target_location_type =
    messages_package::msg::Coordinates_<ContainerAllocator>;
  _target_location_type target_location;

  // setters for named parameter idiom
  Type & set__current_location(
    const messages_package::msg::Coordinates_<ContainerAllocator> & _arg)
  {
    this->current_location = _arg;
    return *this;
  }
  Type & set__target_location(
    const messages_package::msg::Coordinates_<ContainerAllocator> & _arg)
  {
    this->target_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::MoveItem_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::MoveItem_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__MoveItem_Result
    std::shared_ptr<messages_package::action::MoveItem_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__MoveItem_Result
    std::shared_ptr<messages_package::action::MoveItem_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItem_Result_ & other) const
  {
    if (this->current_location != other.current_location) {
      return false;
    }
    if (this->target_location != other.target_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItem_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItem_Result_

// alias to use template instance with default allocator
using MoveItem_Result =
  messages_package::action::MoveItem_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


#ifndef _WIN32
# define DEPRECATED__messages_package__action__MoveItem_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__MoveItem_Feedback __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveItem_Feedback_
{
  using Type = MoveItem_Feedback_<ContainerAllocator>;

  explicit MoveItem_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success_or_failure = false;
      this->failure_reason = "";
    }
  }

  explicit MoveItem_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : failure_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success_or_failure = false;
      this->failure_reason = "";
    }
  }

  // field types and members
  using _success_or_failure_type =
    bool;
  _success_or_failure_type success_or_failure;
  using _failure_reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _failure_reason_type failure_reason;

  // setters for named parameter idiom
  Type & set__success_or_failure(
    const bool & _arg)
  {
    this->success_or_failure = _arg;
    return *this;
  }
  Type & set__failure_reason(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->failure_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::MoveItem_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::MoveItem_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__MoveItem_Feedback
    std::shared_ptr<messages_package::action::MoveItem_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__MoveItem_Feedback
    std::shared_ptr<messages_package::action::MoveItem_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItem_Feedback_ & other) const
  {
    if (this->success_or_failure != other.success_or_failure) {
      return false;
    }
    if (this->failure_reason != other.failure_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItem_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItem_Feedback_

// alias to use template instance with default allocator
using MoveItem_Feedback =
  messages_package::action::MoveItem_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "messages_package/action/detail/move_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__MoveItem_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__MoveItem_SendGoal_Request __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveItem_SendGoal_Request_
{
  using Type = MoveItem_SendGoal_Request_<ContainerAllocator>;

  explicit MoveItem_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveItem_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    messages_package::action::MoveItem_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const messages_package::action::MoveItem_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__MoveItem_SendGoal_Request
    std::shared_ptr<messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__MoveItem_SendGoal_Request
    std::shared_ptr<messages_package::action::MoveItem_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItem_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItem_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItem_SendGoal_Request_

// alias to use template instance with default allocator
using MoveItem_SendGoal_Request =
  messages_package::action::MoveItem_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__MoveItem_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__MoveItem_SendGoal_Response __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveItem_SendGoal_Response_
{
  using Type = MoveItem_SendGoal_Response_<ContainerAllocator>;

  explicit MoveItem_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveItem_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__MoveItem_SendGoal_Response
    std::shared_ptr<messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__MoveItem_SendGoal_Response
    std::shared_ptr<messages_package::action::MoveItem_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItem_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItem_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItem_SendGoal_Response_

// alias to use template instance with default allocator
using MoveItem_SendGoal_Response =
  messages_package::action::MoveItem_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package

namespace messages_package
{

namespace action
{

struct MoveItem_SendGoal
{
  using Request = messages_package::action::MoveItem_SendGoal_Request;
  using Response = messages_package::action::MoveItem_SendGoal_Response;
};

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__MoveItem_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__MoveItem_GetResult_Request __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveItem_GetResult_Request_
{
  using Type = MoveItem_GetResult_Request_<ContainerAllocator>;

  explicit MoveItem_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveItem_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__MoveItem_GetResult_Request
    std::shared_ptr<messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__MoveItem_GetResult_Request
    std::shared_ptr<messages_package::action::MoveItem_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItem_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItem_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItem_GetResult_Request_

// alias to use template instance with default allocator
using MoveItem_GetResult_Request =
  messages_package::action::MoveItem_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'result'
// already included above
// #include "messages_package/action/detail/move_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__MoveItem_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__MoveItem_GetResult_Response __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveItem_GetResult_Response_
{
  using Type = MoveItem_GetResult_Response_<ContainerAllocator>;

  explicit MoveItem_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveItem_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    messages_package::action::MoveItem_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const messages_package::action::MoveItem_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__MoveItem_GetResult_Response
    std::shared_ptr<messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__MoveItem_GetResult_Response
    std::shared_ptr<messages_package::action::MoveItem_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItem_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItem_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItem_GetResult_Response_

// alias to use template instance with default allocator
using MoveItem_GetResult_Response =
  messages_package::action::MoveItem_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package

namespace messages_package
{

namespace action
{

struct MoveItem_GetResult
{
  using Request = messages_package::action::MoveItem_GetResult_Request;
  using Response = messages_package::action::MoveItem_GetResult_Response;
};

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "messages_package/action/detail/move_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__MoveItem_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__MoveItem_FeedbackMessage __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveItem_FeedbackMessage_
{
  using Type = MoveItem_FeedbackMessage_<ContainerAllocator>;

  explicit MoveItem_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveItem_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    messages_package::action::MoveItem_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const messages_package::action::MoveItem_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__MoveItem_FeedbackMessage
    std::shared_ptr<messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__MoveItem_FeedbackMessage
    std::shared_ptr<messages_package::action::MoveItem_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItem_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItem_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItem_FeedbackMessage_

// alias to use template instance with default allocator
using MoveItem_FeedbackMessage =
  messages_package::action::MoveItem_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace messages_package
{

namespace action
{

struct MoveItem
{
  /// The goal message defined in the action definition.
  using Goal = messages_package::action::MoveItem_Goal;
  /// The result message defined in the action definition.
  using Result = messages_package::action::MoveItem_Result;
  /// The feedback message defined in the action definition.
  using Feedback = messages_package::action::MoveItem_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = messages_package::action::MoveItem_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = messages_package::action::MoveItem_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = messages_package::action::MoveItem_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveItem MoveItem;

}  // namespace action

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__MOVE_ITEM__STRUCT_HPP_
