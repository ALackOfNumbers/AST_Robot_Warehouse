// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:msg/Delivery.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__DELIVERY__STRUCT_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__DELIVERY__STRUCT_HPP_

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
// Member 'location'
#include "messages_package/msg/detail/coordinates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__msg__Delivery __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__msg__Delivery __declspec(deprecated)
#endif

namespace messages_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Delivery_
{
  using Type = Delivery_<ContainerAllocator>;

  explicit Delivery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
    }
  }

  explicit Delivery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
    }
  }

  // field types and members
  using _items_type =
    std::vector<messages_package::msg::Item_<ContainerAllocator>, typename ContainerAllocator::template rebind<messages_package::msg::Item_<ContainerAllocator>>::other>;
  _items_type items;
  using _location_type =
    messages_package::msg::Coordinates_<ContainerAllocator>;
  _location_type location;
  using _time_type =
    double;
  _time_type time;

  // setters for named parameter idiom
  Type & set__items(
    const std::vector<messages_package::msg::Item_<ContainerAllocator>, typename ContainerAllocator::template rebind<messages_package::msg::Item_<ContainerAllocator>>::other> & _arg)
  {
    this->items = _arg;
    return *this;
  }
  Type & set__location(
    const messages_package::msg::Coordinates_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::msg::Delivery_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::msg::Delivery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::msg::Delivery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::msg::Delivery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::Delivery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::Delivery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::Delivery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::Delivery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::msg::Delivery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::msg::Delivery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__msg__Delivery
    std::shared_ptr<messages_package::msg::Delivery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__msg__Delivery
    std::shared_ptr<messages_package::msg::Delivery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Delivery_ & other) const
  {
    if (this->items != other.items) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Delivery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Delivery_

// alias to use template instance with default allocator
using Delivery =
  messages_package::msg::Delivery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__DELIVERY__STRUCT_HPP_
