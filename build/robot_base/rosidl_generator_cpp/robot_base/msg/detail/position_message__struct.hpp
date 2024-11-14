// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_base:msg/PositionMessage.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__STRUCT_HPP_
#define ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_base__msg__PositionMessage __attribute__((deprecated))
#else
# define DEPRECATED__robot_base__msg__PositionMessage __declspec(deprecated)
#endif

namespace robot_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionMessage_
{
  using Type = PositionMessage_<ContainerAllocator>;

  explicit PositionMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_odom = "";
      this->odom_x = 0.0;
      this->odom_y = 0.0;
      this->odom_theta = 0.0;
      this->header_robot = "";
      this->robot_x = 0.0;
      this->robot_y = 0.0;
      this->robot_theta = 0.0;
    }
  }

  explicit PositionMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header_odom(_alloc),
    header_robot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_odom = "";
      this->odom_x = 0.0;
      this->odom_y = 0.0;
      this->odom_theta = 0.0;
      this->header_robot = "";
      this->robot_x = 0.0;
      this->robot_y = 0.0;
      this->robot_theta = 0.0;
    }
  }

  // field types and members
  using _header_odom_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _header_odom_type header_odom;
  using _odom_x_type =
    double;
  _odom_x_type odom_x;
  using _odom_y_type =
    double;
  _odom_y_type odom_y;
  using _odom_theta_type =
    double;
  _odom_theta_type odom_theta;
  using _header_robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _header_robot_type header_robot;
  using _robot_x_type =
    double;
  _robot_x_type robot_x;
  using _robot_y_type =
    double;
  _robot_y_type robot_y;
  using _robot_theta_type =
    double;
  _robot_theta_type robot_theta;

  // setters for named parameter idiom
  Type & set__header_odom(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->header_odom = _arg;
    return *this;
  }
  Type & set__odom_x(
    const double & _arg)
  {
    this->odom_x = _arg;
    return *this;
  }
  Type & set__odom_y(
    const double & _arg)
  {
    this->odom_y = _arg;
    return *this;
  }
  Type & set__odom_theta(
    const double & _arg)
  {
    this->odom_theta = _arg;
    return *this;
  }
  Type & set__header_robot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->header_robot = _arg;
    return *this;
  }
  Type & set__robot_x(
    const double & _arg)
  {
    this->robot_x = _arg;
    return *this;
  }
  Type & set__robot_y(
    const double & _arg)
  {
    this->robot_y = _arg;
    return *this;
  }
  Type & set__robot_theta(
    const double & _arg)
  {
    this->robot_theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_base::msg::PositionMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_base::msg::PositionMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_base::msg::PositionMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_base::msg::PositionMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_base::msg::PositionMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_base::msg::PositionMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_base::msg::PositionMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_base::msg::PositionMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_base::msg::PositionMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_base::msg::PositionMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_base__msg__PositionMessage
    std::shared_ptr<robot_base::msg::PositionMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_base__msg__PositionMessage
    std::shared_ptr<robot_base::msg::PositionMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionMessage_ & other) const
  {
    if (this->header_odom != other.header_odom) {
      return false;
    }
    if (this->odom_x != other.odom_x) {
      return false;
    }
    if (this->odom_y != other.odom_y) {
      return false;
    }
    if (this->odom_theta != other.odom_theta) {
      return false;
    }
    if (this->header_robot != other.header_robot) {
      return false;
    }
    if (this->robot_x != other.robot_x) {
      return false;
    }
    if (this->robot_y != other.robot_y) {
      return false;
    }
    if (this->robot_theta != other.robot_theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionMessage_

// alias to use template instance with default allocator
using PositionMessage =
  robot_base::msg::PositionMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_base

#endif  // ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__STRUCT_HPP_
