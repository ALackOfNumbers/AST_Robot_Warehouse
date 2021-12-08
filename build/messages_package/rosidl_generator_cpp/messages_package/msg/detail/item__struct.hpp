// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ITEM__STRUCT_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ITEM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'location'
#include "messages_package/msg/detail/coordinates__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__msg__Item __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__msg__Item __declspec(deprecated)
#endif

namespace messages_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Item_
{
  using Type = Item_<ContainerAllocator>;

  explicit Item_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0.0;
      this->quantity = 0ll;
    }
  }

  explicit Item_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    location(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->age = 0.0;
      this->quantity = 0ll;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _age_type =
    double;
  _age_type age;
  using _location_type =
    messages_package::msg::Coordinates_<ContainerAllocator>;
  _location_type location;
  using _quantity_type =
    int64_t;
  _quantity_type quantity;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__age(
    const double & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__location(
    const messages_package::msg::Coordinates_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__quantity(
    const int64_t & _arg)
  {
    this->quantity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::msg::Item_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::msg::Item_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::msg::Item_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::msg::Item_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::Item_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::Item_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::Item_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::Item_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::msg::Item_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::msg::Item_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__msg__Item
    std::shared_ptr<messages_package::msg::Item_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__msg__Item
    std::shared_ptr<messages_package::msg::Item_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Item_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->quantity != other.quantity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Item_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Item_

// alias to use template instance with default allocator
using Item =
  messages_package::msg::Item_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ITEM__STRUCT_HPP_
