// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_base:msg/ProjectileMessage.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_BASE__MSG__DETAIL__PROJECTILE_MESSAGE__TRAITS_HPP_
#define ROBOT_BASE__MSG__DETAIL__PROJECTILE_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_base/msg/detail/projectile_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_base
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProjectileMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goaldistance
  {
    out << "goaldistance: ";
    rosidl_generator_traits::value_to_yaml(msg.goaldistance, out);
    out << ", ";
  }

  // member: goalangle
  {
    out << "goalangle: ";
    rosidl_generator_traits::value_to_yaml(msg.goalangle, out);
    out << ", ";
  }

  // member: robotdistance
  {
    out << "robotdistance: ";
    rosidl_generator_traits::value_to_yaml(msg.robotdistance, out);
    out << ", ";
  }

  // member: robotangle
  {
    out << "robotangle: ";
    rosidl_generator_traits::value_to_yaml(msg.robotangle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProjectileMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goaldistance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goaldistance: ";
    rosidl_generator_traits::value_to_yaml(msg.goaldistance, out);
    out << "\n";
  }

  // member: goalangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goalangle: ";
    rosidl_generator_traits::value_to_yaml(msg.goalangle, out);
    out << "\n";
  }

  // member: robotdistance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robotdistance: ";
    rosidl_generator_traits::value_to_yaml(msg.robotdistance, out);
    out << "\n";
  }

  // member: robotangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robotangle: ";
    rosidl_generator_traits::value_to_yaml(msg.robotangle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProjectileMessage & msg, bool use_flow_style = false)
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
  const robot_base::msg::ProjectileMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_base::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_base::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_base::msg::ProjectileMessage & msg)
{
  return robot_base::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_base::msg::ProjectileMessage>()
{
  return "robot_base::msg::ProjectileMessage";
}

template<>
inline const char * name<robot_base::msg::ProjectileMessage>()
{
  return "robot_base/msg/ProjectileMessage";
}

template<>
struct has_fixed_size<robot_base::msg::ProjectileMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_base::msg::ProjectileMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_base::msg::ProjectileMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_BASE__MSG__DETAIL__PROJECTILE_MESSAGE__TRAITS_HPP_
