// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_base:msg/PositionMessage.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__STRUCT_H_
#define ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header_odom'
// Member 'header_robot'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PositionMessage in the package robot_base.
/**
  * ------ Robot -------#
 */
typedef struct robot_base__msg__PositionMessage
{
  rosidl_runtime_c__String header_odom;
  double odom_x;
  double odom_y;
  double odom_theta;
  /// ------ Robot -------#
  rosidl_runtime_c__String header_robot;
  double robot_x;
  double robot_y;
  double robot_theta;
} robot_base__msg__PositionMessage;

// Struct for a sequence of robot_base__msg__PositionMessage.
typedef struct robot_base__msg__PositionMessage__Sequence
{
  robot_base__msg__PositionMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_base__msg__PositionMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_BASE__MSG__DETAIL__POSITION_MESSAGE__STRUCT_H_
