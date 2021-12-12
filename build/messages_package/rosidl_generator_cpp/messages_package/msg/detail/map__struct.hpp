// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__MAP__STRUCT_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__MAP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'map_array'
#include "messages_package/msg/detail/row__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__messages_package__msg__Map __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__msg__Map __declspec(deprecated)
#endif

namespace messages_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Map_
{
  using Type = Map_<ContainerAllocator>;

  explicit Map_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_array.fill(messages_package::msg::Row_<ContainerAllocator>{_init});
    }
  }

  explicit Map_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map_array(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_array.fill(messages_package::msg::Row_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _map_array_type =
    std::array<messages_package::msg::Row_<ContainerAllocator>, 16>;
  _map_array_type map_array;

  // setters for named parameter idiom
  Type & set__map_array(
    const std::array<messages_package::msg::Row_<ContainerAllocator>, 16> & _arg)
  {
    this->map_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::msg::Map_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::msg::Map_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::msg::Map_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::msg::Map_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::Map_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::Map_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::Map_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::Map_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::msg::Map_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::msg::Map_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__msg__Map
    std::shared_ptr<messages_package::msg::Map_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__msg__Map
    std::shared_ptr<messages_package::msg::Map_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Map_ & other) const
  {
    if (this->map_array != other.map_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const Map_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Map_

// alias to use template instance with default allocator
using Map =
  messages_package::msg::Map_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__MAP__STRUCT_HPP_
