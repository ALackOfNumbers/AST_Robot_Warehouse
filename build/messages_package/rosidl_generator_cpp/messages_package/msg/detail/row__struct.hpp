// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages_package:msg/Row.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROW__STRUCT_HPP_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROW__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__messages_package__msg__Row __attribute__((deprecated))
#else
# define DEPRECATED__messages_package__msg__Row __declspec(deprecated)
#endif

namespace messages_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Row_
{
  using Type = Row_<ContainerAllocator>;

  explicit Row_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row = "";
    }
  }

  explicit Row_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : row(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row = "";
    }
  }

  // field types and members
  using _row_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _row_type row;

  // setters for named parameter idiom
  Type & set__row(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->row = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages_package::msg::Row_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages_package::msg::Row_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages_package::msg::Row_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages_package::msg::Row_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::Row_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::Row_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages_package::msg::Row_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages_package::msg::Row_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages_package::msg::Row_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages_package::msg::Row_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages_package__msg__Row
    std::shared_ptr<messages_package::msg::Row_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages_package__msg__Row
    std::shared_ptr<messages_package::msg::Row_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Row_ & other) const
  {
    if (this->row != other.row) {
      return false;
    }
    return true;
  }
  bool operator!=(const Row_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Row_

// alias to use template instance with default allocator
using Row =
  messages_package::msg::Row_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages_package

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROW__STRUCT_HPP_
