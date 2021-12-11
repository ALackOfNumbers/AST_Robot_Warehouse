// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:action/Order.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__ORDER__STRUCT_HPP_
#define MESSAGES_PACKAGE__ACTION__DETAIL__ORDER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'items'
#include "messages_package/msg/detail/item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__Order_Goal __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__Order_Goal __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Order_Goal_
{
  using Type = Order_Goal_<ContainerAllocator>;

  explicit Order_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Order_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _items_type =
    std::vector<messages_package::msg::Item_<ContainerAllocator>, typename ContainerAllocator::template rebind<messages_package::msg::Item_<ContainerAllocator>>::other>;
  _items_type items;

  // setters for named parameter idiom
  Type & set__items(
    const std::vector<messages_package::msg::Item_<ContainerAllocator>, typename ContainerAllocator::template rebind<messages_package::msg::Item_<ContainerAllocator>>::other> & _arg)
  {
    this->items = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::Order_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::Order_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::Order_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::Order_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::Order_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::Order_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__Order_Goal
    std::shared_ptr<messages_package::action::Order_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__Order_Goal
    std::shared_ptr<messages_package::action::Order_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Order_Goal_ & other) const
  {
    if (this->items != other.items) {
      return false;
    }
    return true;
  }
  bool operator!=(const Order_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Order_Goal_

// alias to use template instance with default allocator
using Order_Goal =
  messages_package::action::Order_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


#ifndef _WIN32
# define DEPRECATED__messages_package__action__Order_Result __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__Order_Result __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Order_Result_
{
  using Type = Order_Result_<ContainerAllocator>;

  explicit Order_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success_or_failure = false;
      this->failure_reason = "";
    }
  }

  explicit Order_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    messages_package::action::Order_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::Order_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::Order_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::Order_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::Order_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::Order_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__Order_Result
    std::shared_ptr<messages_package::action::Order_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__Order_Result
    std::shared_ptr<messages_package::action::Order_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Order_Result_ & other) const
  {
    if (this->success_or_failure != other.success_or_failure) {
      return false;
    }
    if (this->failure_reason != other.failure_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const Order_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Order_Result_

// alias to use template instance with default allocator
using Order_Result =
  messages_package::action::Order_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


#ifndef _WIN32
# define DEPRECATED__messages_package__action__Order_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__Order_Feedback __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Order_Feedback_
{
  using Type = Order_Feedback_<ContainerAllocator>;

  explicit Order_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_status = "";
    }
  }

  explicit Order_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_status = "";
    }
  }

  // field types and members
  using _order_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _order_status_type order_status;

  // setters for named parameter idiom
  Type & set__order_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->order_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::Order_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::Order_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::Order_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::Order_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::Order_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::Order_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__Order_Feedback
    std::shared_ptr<messages_package::action::Order_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__Order_Feedback
    std::shared_ptr<messages_package::action::Order_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Order_Feedback_ & other) const
  {
    if (this->order_status != other.order_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Order_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Order_Feedback_

// alias to use template instance with default allocator
using Order_Feedback =
  messages_package::action::Order_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "messages_package/action/detail/order__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__Order_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__Order_SendGoal_Request __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Order_SendGoal_Request_
{
  using Type = Order_SendGoal_Request_<ContainerAllocator>;

  explicit Order_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Order_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    messages_package::action::Order_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const messages_package::action::Order_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::Order_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::Order_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::Order_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::Order_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::Order_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::Order_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__Order_SendGoal_Request
    std::shared_ptr<messages_package::action::Order_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__Order_SendGoal_Request
    std::shared_ptr<messages_package::action::Order_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Order_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Order_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Order_SendGoal_Request_

// alias to use template instance with default allocator
using Order_SendGoal_Request =
  messages_package::action::Order_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__Order_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__Order_SendGoal_Response __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Order_SendGoal_Response_
{
  using Type = Order_SendGoal_Response_<ContainerAllocator>;

  explicit Order_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Order_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    messages_package::action::Order_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::Order_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::Order_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::Order_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::Order_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::Order_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__Order_SendGoal_Response
    std::shared_ptr<messages_package::action::Order_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__Order_SendGoal_Response
    std::shared_ptr<messages_package::action::Order_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Order_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Order_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Order_SendGoal_Response_

// alias to use template instance with default allocator
using Order_SendGoal_Response =
  messages_package::action::Order_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package

namespace messages_package
{

namespace action
{

struct Order_SendGoal
{
  using Request = messages_package::action::Order_SendGoal_Request;
  using Response = messages_package::action::Order_SendGoal_Response;
};

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__Order_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__Order_GetResult_Request __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Order_GetResult_Request_
{
  using Type = Order_GetResult_Request_<ContainerAllocator>;

  explicit Order_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Order_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    messages_package::action::Order_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::Order_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::Order_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::Order_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::Order_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::Order_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__Order_GetResult_Request
    std::shared_ptr<messages_package::action::Order_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__Order_GetResult_Request
    std::shared_ptr<messages_package::action::Order_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Order_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Order_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Order_GetResult_Request_

// alias to use template instance with default allocator
using Order_GetResult_Request =
  messages_package::action::Order_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'result'
// already included above
// #include "messages_package/action/detail/order__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__Order_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__Order_GetResult_Response __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Order_GetResult_Response_
{
  using Type = Order_GetResult_Response_<ContainerAllocator>;

  explicit Order_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Order_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    messages_package::action::Order_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const messages_package::action::Order_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::Order_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::Order_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::Order_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::Order_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::Order_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::Order_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__Order_GetResult_Response
    std::shared_ptr<messages_package::action::Order_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__Order_GetResult_Response
    std::shared_ptr<messages_package::action::Order_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Order_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Order_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Order_GetResult_Response_

// alias to use template instance with default allocator
using Order_GetResult_Response =
  messages_package::action::Order_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace messages_package

namespace messages_package
{

namespace action
{

struct Order_GetResult
{
  using Request = messages_package::action::Order_GetResult_Request;
  using Response = messages_package::action::Order_GetResult_Response;
};

}  // namespace action

}  // namespace messages_package


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "messages_package/action/detail/order__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__action__Order_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__action__Order_FeedbackMessage __declspec(deprecated)
#endif

namespace messages_package
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Order_FeedbackMessage_
{
  using Type = Order_FeedbackMessage_<ContainerAllocator>;

  explicit Order_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Order_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    messages_package::action::Order_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const messages_package::action::Order_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::action::Order_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::action::Order_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::action::Order_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::action::Order_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::action::Order_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::action::Order_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::action::Order_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::action::Order_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__action__Order_FeedbackMessage
    std::shared_ptr<messages_package::action::Order_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__action__Order_FeedbackMessage
    std::shared_ptr<messages_package::action::Order_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Order_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Order_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Order_FeedbackMessage_

// alias to use template instance with default allocator
using Order_FeedbackMessage =
  messages_package::action::Order_FeedbackMessage_<std::allocator<void>>;

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

struct Order
{
  /// The goal message defined in the action definition.
  using Goal = messages_package::action::Order_Goal;
  /// The result message defined in the action definition.
  using Result = messages_package::action::Order_Result;
  /// The feedback message defined in the action definition.
  using Feedback = messages_package::action::Order_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = messages_package::action::Order_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = messages_package::action::Order_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = messages_package::action::Order_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Order Order;

}  // namespace action

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__ORDER__STRUCT_HPP_
