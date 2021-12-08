// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:srv/Delivery.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__STRUCT_HPP_
#define MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'delivery_contents'
#include "messages_package/msg/detail/delivery__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__srv__Delivery_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__srv__Delivery_Request __declspec(deprecated)
#endif

namespace messages_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Delivery_Request_
{
  using Type = Delivery_Request_<ContainerAllocator>;

  explicit Delivery_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delivery_contents(_init)
  {
    (void)_init;
  }

  explicit Delivery_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delivery_contents(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _delivery_contents_type =
    messages_package::msg::Delivery_<ContainerAllocator>;
  _delivery_contents_type delivery_contents;

  // setters for named parameter idiom
  Type & set__delivery_contents(
    const messages_package::msg::Delivery_<ContainerAllocator> & _arg)
  {
    this->delivery_contents = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::srv::Delivery_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::srv::Delivery_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::srv::Delivery_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::srv::Delivery_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::srv::Delivery_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::srv::Delivery_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::srv::Delivery_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::srv::Delivery_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::srv::Delivery_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::srv::Delivery_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__srv__Delivery_Request
    std::shared_ptr<messages_package::srv::Delivery_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__srv__Delivery_Request
    std::shared_ptr<messages_package::srv::Delivery_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Delivery_Request_ & other) const
  {
    if (this->delivery_contents != other.delivery_contents) {
      return false;
    }
    return true;
  }
  bool operator!=(const Delivery_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Delivery_Request_

// alias to use template instance with default allocator
using Delivery_Request =
  messages_package::srv::Delivery_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_package


#ifndef _WIN32
# define DEPRECATED__messages_package__srv__Delivery_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__srv__Delivery_Response __declspec(deprecated)
#endif

namespace messages_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Delivery_Response_
{
  using Type = Delivery_Response_<ContainerAllocator>;

  explicit Delivery_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success_or_failure = false;
    }
  }

  explicit Delivery_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success_or_failure = false;
    }
  }

  // field types and members
  using _success_or_failure_type =
    bool;
  _success_or_failure_type success_or_failure;

  // setters for named parameter idiom
  Type & set__success_or_failure(
    const bool & _arg)
  {
    this->success_or_failure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::srv::Delivery_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::srv::Delivery_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::srv::Delivery_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::srv::Delivery_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::srv::Delivery_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::srv::Delivery_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::srv::Delivery_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::srv::Delivery_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::srv::Delivery_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::srv::Delivery_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__srv__Delivery_Response
    std::shared_ptr<messages_package::srv::Delivery_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__srv__Delivery_Response
    std::shared_ptr<messages_package::srv::Delivery_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Delivery_Response_ & other) const
  {
    if (this->success_or_failure != other.success_or_failure) {
      return false;
    }
    return true;
  }
  bool operator!=(const Delivery_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Delivery_Response_

// alias to use template instance with default allocator
using Delivery_Response =
  messages_package::srv::Delivery_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_package

namespace messages_package
{

namespace srv
{

struct Delivery
{
  using Request = messages_package::srv::Delivery_Request;
  using Response = messages_package::srv::Delivery_Response;
};

}  // namespace srv

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__SRV__DETAIL__DELIVERY__STRUCT_HPP_
