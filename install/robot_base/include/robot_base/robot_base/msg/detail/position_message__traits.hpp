// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_base:msg/PositionMessage.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__TRAITS_HPP_
#define ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_base/msg/detail/position_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header_odom
  {
    out << "header_odom: ";
    rosidl_generator_traits::value_to_yaml(msg.header_odom, out);
    out << ", ";
  }

  // member: odom_x
  {
    out << "odom_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_x, out);
    out << ", ";
  }

  // member: odom_y
  {
    out << "odom_y: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_y, out);
    out << ", ";
  }

  // member: odom_theta
  {
    out << "odom_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_theta, out);
    out << ", ";
  }

  // member: header_robot
  {
    out << "header_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.header_robot, out);
    out << ", ";
  }

  // member: robot_x
  {
    out << "robot_x: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_x, out);
    out << ", ";
  }

  // member: robot_y
  {
    out << "robot_y: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_y, out);
    out << ", ";
  }

  // member: robot_theta
  {
    out << "robot_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header_odom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_odom: ";
    rosidl_generator_traits::value_to_yaml(msg.header_odom, out);
    out << "\n";
  }

  // member: odom_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_x: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_x, out);
    out << "\n";
  }

  // member: odom_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_y: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_y, out);
    out << "\n";
  }

  // member: odom_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_theta, out);
    out << "\n";
  }

  // member: header_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.header_robot, out);
    out << "\n";
  }

  // member: robot_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_x: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_x, out);
    out << "\n";
  }

  // member: robot_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_y: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_y, out);
    out << "\n";
  }

  // member: robot_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_base

namespace rosidl_generator_traits
{

[[deprecated("use robot_base::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_base::msg::PositionMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_base::msg::PositionMessage & msg)
{
  return robot_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_base::msg::PositionMessage>()
{
  return "robot_base::msg::PositionMessage";
}

template<>
inline const char * name<robot_base::msg::PositionMessage>()
{
  return "robot_base/msg/PositionMessage";
}

template<>
struct has_fixed_size<robot_base::msg::PositionMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_base::msg::PositionMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_base::msg::PositionMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__TRAITS_HPP_
