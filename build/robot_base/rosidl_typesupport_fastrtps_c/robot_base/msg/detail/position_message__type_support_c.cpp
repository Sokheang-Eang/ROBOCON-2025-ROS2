// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robot_base:msg/PositionMessage.idl
// generated code does not contain a copyright notice
#include "robot_base/msg/detail/position_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robot_base/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_base/msg/detail/position_message__struct.h"
#include "robot_base/msg/detail/position_message__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // header_odom, header_robot
#include "rosidl_runtime_c/string_functions.h"  // header_odom, header_robot

// forward declare type support functions


using _PositionMessage__ros_msg_type = robot_base__msg__PositionMessage;

static bool _PositionMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionMessage__ros_msg_type * ros_message = static_cast<const _PositionMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: header_odom
  {
    const rosidl_runtime_c__String * str = &ros_message->header_odom;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: odom_x
  {
    cdr << ros_message->odom_x;
  }

  // Field name: odom_y
  {
    cdr << ros_message->odom_y;
  }

  // Field name: odom_theta
  {
    cdr << ros_message->odom_theta;
  }

  // Field name: header_robot
  {
    const rosidl_runtime_c__String * str = &ros_message->header_robot;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: robot_x
  {
    cdr << ros_message->robot_x;
  }

  // Field name: robot_y
  {
    cdr << ros_message->robot_y;
  }

  // Field name: robot_theta
  {
    cdr << ros_message->robot_theta;
  }

  return true;
}

static bool _PositionMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionMessage__ros_msg_type * ros_message = static_cast<_PositionMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: header_odom
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->header_odom.data) {
      rosidl_runtime_c__String__init(&ros_message->header_odom);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->header_odom,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'header_odom'\n");
      return false;
    }
  }

  // Field name: odom_x
  {
    cdr >> ros_message->odom_x;
  }

  // Field name: odom_y
  {
    cdr >> ros_message->odom_y;
  }

  // Field name: odom_theta
  {
    cdr >> ros_message->odom_theta;
  }

  // Field name: header_robot
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->header_robot.data) {
      rosidl_runtime_c__String__init(&ros_message->header_robot);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->header_robot,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'header_robot'\n");
      return false;
    }
  }

  // Field name: robot_x
  {
    cdr >> ros_message->robot_x;
  }

  // Field name: robot_y
  {
    cdr >> ros_message->robot_y;
  }

  // Field name: robot_theta
  {
    cdr >> ros_message->robot_theta;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_base
size_t get_serialized_size_robot_base__msg__PositionMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionMessage__ros_msg_type * ros_message = static_cast<const _PositionMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header_odom
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->header_odom.size + 1);
  // field.name odom_x
  {
    size_t item_size = sizeof(ros_message->odom_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_y
  {
    size_t item_size = sizeof(ros_message->odom_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_theta
  {
    size_t item_size = sizeof(ros_message->odom_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name header_robot
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->header_robot.size + 1);
  // field.name robot_x
  {
    size_t item_size = sizeof(ros_message->robot_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_y
  {
    size_t item_size = sizeof(ros_message->robot_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_theta
  {
    size_t item_size = sizeof(ros_message->robot_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PositionMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robot_base__msg__PositionMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_base
size_t max_serialized_size_robot_base__msg__PositionMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header_odom
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: odom_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: odom_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: odom_theta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: header_robot
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: robot_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_theta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_base__msg__PositionMessage;
    is_plain =
      (
      offsetof(DataType, robot_theta) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PositionMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robot_base__msg__PositionMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PositionMessage = {
  "robot_base::msg",
  "PositionMessage",
  _PositionMessage__cdr_serialize,
  _PositionMessage__cdr_deserialize,
  _PositionMessage__get_serialized_size,
  _PositionMessage__max_serialized_size
};

static rosidl_message_type_support_t _PositionMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_base, msg, PositionMessage)() {
  return &_PositionMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
