// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_base:msg/ProjectileMessage.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_BASE__MSG__DETAIL__PROJECTILE_MESSAGE__STRUCT_HPP_
#define ROBOT_BASE__MSG__DETAIL__PROJECTILE_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_base__msg__ProjectileMessage __attribute__((deprecated))
#else
# define DEPRECATED__robot_base__msg__ProjectileMessage __declspec(deprecated)
#endif

namespace robot_base
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProjectileMessage_
{
  using Type = ProjectileMessage_<ContainerAllocator>;

  explicit ProjectileMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goaldistance = 0.0;
      this->goalangle = 0.0;
      this->robotdistance = 0.0;
      this->robotangle = 0.0;
    }
  }

  explicit ProjectileMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goaldistance = 0.0;
      this->goalangle = 0.0;
      this->robotdistance = 0.0;
      this->robotangle = 0.0;
    }
  }

  // field types and members
  using _goaldistance_type =
    double;
  _goaldistance_type goaldistance;
  using _goalangle_type =
    double;
  _goalangle_type goalangle;
  using _robotdistance_type =
    double;
  _robotdistance_type robotdistance;
  using _robotangle_type =
    double;
  _robotangle_type robotangle;

  // setters for named parameter idiom
  Type & set__goaldistance(
    const double & _arg)
  {
    this->goaldistance = _arg;
    return *this;
  }
  Type & set__goalangle(
    const double & _arg)
  {
    this->goalangle = _arg;
    return *this;
  }
  Type & set__robotdistance(
    const double & _arg)
  {
    this->robotdistance = _arg;
    return *this;
  }
  Type & set__robotangle(
    const double & _arg)
  {
    this->robotangle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_base::msg::ProjectileMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_base::msg::ProjectileMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_base::msg::ProjectileMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_base::msg::ProjectileMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_base::msg::ProjectileMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_base::msg::ProjectileMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_base::msg::ProjectileMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_base::msg::ProjectileMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_base::msg::ProjectileMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_base::msg::ProjectileMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_base__msg__ProjectileMessage
    std::shared_ptr<robot_base::msg::ProjectileMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_base__msg__ProjectileMessage
    std::shared_ptr<robot_base::msg::ProjectileMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProjectileMessage_ & other) const
  {
    if (this->goaldistance != other.goaldistance) {
      return false;
    }
    if (this->goalangle != other.goalangle) {
      return false;
    }
    if (this->robotdistance != other.robotdistance) {
      return false;
    }
    if (this->robotangle != other.robotangle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProjectileMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProjectileMessage_

// alias to use template instance with default allocator
using ProjectileMessage =
  robot_base::msg::ProjectileMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_base

#endif  // ROBOT_BASE__MSG__DETAIL__PROJECTILE_MESSAGE__STRUCT_HPP_
