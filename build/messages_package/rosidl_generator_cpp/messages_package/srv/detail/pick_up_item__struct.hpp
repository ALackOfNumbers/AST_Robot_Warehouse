// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:srv/PickUpItem.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__SRV__DETAIL__PICK_UP_ITEM__STRUCT_HPP_
#define MESSAGES_PACKAGE__SRV__DETAIL__PICK_UP_ITEM__STRUCT_HPP_

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
// Member 'location'
#include "messages_package/msg/detail/coordinates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__srv__PickUpItem_Request __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__srv__PickUpItem_Request __declspec(deprecated)
#endif

namespace messages_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PickUpItem_Request_
{
  using Type = PickUpItem_Request_<ContainerAllocator>;

  explicit PickUpItem_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item(_init),
    location(_init)
  {
    (void)_init;
  }

  explicit PickUpItem_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item(_alloc, _init),
    location(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _item_type =
    messages_package::msg::Item_<ContainerAllocator>;
  _item_type item;
  using _location_type =
    messages_package::msg::Coordinates_<ContainerAllocator>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__item(
    const messages_package::msg::Item_<ContainerAllocator> & _arg)
  {
    this->item = _arg;
    return *this;
  }
  Type & set__location(
    const messages_package::msg::Coordinates_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::srv::PickUpItem_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::srv::PickUpItem_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::srv::PickUpItem_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::srv::PickUpItem_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::srv::PickUpItem_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::srv::PickUpItem_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::srv::PickUpItem_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::srv::PickUpItem_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::srv::PickUpItem_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::srv::PickUpItem_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__srv__PickUpItem_Request
    std::shared_ptr<messages_package::srv::PickUpItem_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__srv__PickUpItem_Request
    std::shared_ptr<messages_package::srv::PickUpItem_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickUpItem_Request_ & other) const
  {
    if (this->item != other.item) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickUpItem_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickUpItem_Request_

// alias to use template instance with default allocator
using PickUpItem_Request =
  messages_package::srv::PickUpItem_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_package


#ifndef _WIN32
# define DEPRECATED__messages_package__srv__PickUpItem_Response __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__srv__PickUpItem_Response __declspec(deprecated)
#endif

namespace messages_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PickUpItem_Response_
{
  using Type = PickUpItem_Response_<ContainerAllocator>;

  explicit PickUpItem_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PickUpItem_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::srv::PickUpItem_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::srv::PickUpItem_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::srv::PickUpItem_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::srv::PickUpItem_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::srv::PickUpItem_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::srv::PickUpItem_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::srv::PickUpItem_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::srv::PickUpItem_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::srv::PickUpItem_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::srv::PickUpItem_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__srv__PickUpItem_Response
    std::shared_ptr<messages_package::srv::PickUpItem_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__srv__PickUpItem_Response
    std::shared_ptr<messages_package::srv::PickUpItem_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PickUpItem_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PickUpItem_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PickUpItem_Response_

// alias to use template instance with default allocator
using PickUpItem_Response =
  messages_package::srv::PickUpItem_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace messages_package

namespace messages_package
{

namespace srv
{

struct PickUpItem
{
  using Request = messages_package::srv::PickUpItem_Request;
  using Response = messages_package::srv::PickUpItem_Response;
};

}  // namespace srv

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__SRV__DETAIL__PICK_UP_ITEM__STRUCT_HPP_
