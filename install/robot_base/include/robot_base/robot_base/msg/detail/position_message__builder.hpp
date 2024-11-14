// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_base:msg/PositionMessage.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__BUILDER_HPP_
#define ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_base/msg/detail/position_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_base
{

namespace msg
{

namespace builder
{

class Init_PositionMessage_robot_theta
{
public:
  explicit Init_PositionMessage_robot_theta(::robot_base::msg::PositionMessage & msg)
  : msg_(msg)
  {}
  ::robot_base::msg::PositionMessage robot_theta(::robot_base::msg::PositionMessage::_robot_theta_type arg)
  {
    msg_.robot_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_base::msg::PositionMessage msg_;
};

class Init_PositionMessage_robot_y
{
public:
  explicit Init_PositionMessage_robot_y(::robot_base::msg::PositionMessage & msg)
  : msg_(msg)
  {}
  Init_PositionMessage_robot_theta robot_y(::robot_base::msg::PositionMessage::_robot_y_type arg)
  {
    msg_.robot_y = std::move(arg);
    return Init_PositionMessage_robot_theta(msg_);
  }

private:
  ::robot_base::msg::PositionMessage msg_;
};

class Init_PositionMessage_robot_x
{
public:
  explicit Init_PositionMessage_robot_x(::robot_base::msg::PositionMessage & msg)
  : msg_(msg)
  {}
  Init_PositionMessage_robot_y robot_x(::robot_base::msg::PositionMessage::_robot_x_type arg)
  {
    msg_.robot_x = std::move(arg);
    return Init_PositionMessage_robot_y(msg_);
  }

private:
  ::robot_base::msg::PositionMessage msg_;
};

class Init_PositionMessage_header_robot
{
public:
  explicit Init_PositionMessage_header_robot(::robot_base::msg::PositionMessage & msg)
  : msg_(msg)
  {}
  Init_PositionMessage_robot_x header_robot(::robot_base::msg::PositionMessage::_header_robot_type arg)
  {
    msg_.header_robot = std::move(arg);
    return Init_PositionMessage_robot_x(msg_);
  }

private:
  ::robot_base::msg::PositionMessage msg_;
};

class Init_PositionMessage_odom_theta
{
public:
  explicit Init_PositionMessage_odom_theta(::robot_base::msg::PositionMessage & msg)
  : msg_(msg)
  {}
  Init_PositionMessage_header_robot odom_theta(::robot_base::msg::PositionMessage::_odom_theta_type arg)
  {
    msg_.odom_theta = std::move(arg);
    return Init_PositionMessage_header_robot(msg_);
  }

private:
  ::robot_base::msg::PositionMessage msg_;
};

class Init_PositionMessage_odom_y
{
public:
  explicit Init_PositionMessage_odom_y(::robot_base::msg::PositionMessage & msg)
  : msg_(msg)
  {}
  Init_PositionMessage_odom_theta odom_y(::robot_base::msg::PositionMessage::_odom_y_type arg)
  {
    msg_.odom_y = std::move(arg);
    return Init_PositionMessage_odom_theta(msg_);
  }

private:
  ::robot_base::msg::PositionMessage msg_;
};

class Init_PositionMessage_odom_x
{
public:
  explicit Init_PositionMessage_odom_x(::robot_base::msg::PositionMessage & msg)
  : msg_(msg)
  {}
  Init_PositionMessage_odom_y odom_x(::robot_base::msg::PositionMessage::_odom_x_type arg)
  {
    msg_.odom_x = std::move(arg);
    return Init_PositionMessage_odom_y(msg_);
  }

private:
  ::robot_base::msg::PositionMessage msg_;
};

class Init_PositionMessage_header_odom
{
public:
  Init_PositionMessage_header_odom()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionMessage_odom_x header_odom(::robot_base::msg::PositionMessage::_header_odom_type arg)
  {
    msg_.header_odom = std::move(arg);
    return Init_PositionMessage_odom_x(msg_);
  }

private:
  ::robot_base::msg::PositionMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_base::msg::PositionMessage>()
{
  return robot_base::msg::builder::Init_PositionMessage_header_odom();
}

}  // namespace robot_base

#endif  // ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__BUILDER_HPP_
