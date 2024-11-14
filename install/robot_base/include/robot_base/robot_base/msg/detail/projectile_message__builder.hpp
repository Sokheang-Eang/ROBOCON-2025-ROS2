// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_base:msg/ProjectileMessage.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_BASE__MSG__DETAIL__PROJECTILE_MESSAGE__BUILDER_HPP_
#define ROBOT_BASE__MSG__DETAIL__PROJECTILE_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_base/msg/detail/projectile_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_base
{

namespace msg
{

namespace builder
{

class Init_ProjectileMessage_robotangle
{
public:
  explicit Init_ProjectileMessage_robotangle(::robot_base::msg::ProjectileMessage & msg)
  : msg_(msg)
  {}
  ::robot_base::msg::ProjectileMessage robotangle(::robot_base::msg::ProjectileMessage::_robotangle_type arg)
  {
    msg_.robotangle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_base::msg::ProjectileMessage msg_;
};

class Init_ProjectileMessage_robotdistance
{
public:
  explicit Init_ProjectileMessage_robotdistance(::robot_base::msg::ProjectileMessage & msg)
  : msg_(msg)
  {}
  Init_ProjectileMessage_robotangle robotdistance(::robot_base::msg::ProjectileMessage::_robotdistance_type arg)
  {
    msg_.robotdistance = std::move(arg);
    return Init_ProjectileMessage_robotangle(msg_);
  }

private:
  ::robot_base::msg::ProjectileMessage msg_;
};

class Init_ProjectileMessage_goalangle
{
public:
  explicit Init_ProjectileMessage_goalangle(::robot_base::msg::ProjectileMessage & msg)
  : msg_(msg)
  {}
  Init_ProjectileMessage_robotdistance goalangle(::robot_base::msg::ProjectileMessage::_goalangle_type arg)
  {
    msg_.goalangle = std::move(arg);
    return Init_ProjectileMessage_robotdistance(msg_);
  }

private:
  ::robot_base::msg::ProjectileMessage msg_;
};

class Init_ProjectileMessage_goaldistance
{
public:
  Init_ProjectileMessage_goaldistance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProjectileMessage_goalangle goaldistance(::robot_base::msg::ProjectileMessage::_goaldistance_type arg)
  {
    msg_.goaldistance = std::move(arg);
    return Init_ProjectileMessage_goalangle(msg_);
  }

private:
  ::robot_base::msg::ProjectileMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_base::msg::ProjectileMessage>()
{
  return robot_base::msg::builder::Init_ProjectileMessage_goaldistance();
}

}  // namespace robot_base

#endif  // ROBOT_BASE__MSG__DETAIL__PROJECTILE_MESSAGE__BUILDER_HPP_
