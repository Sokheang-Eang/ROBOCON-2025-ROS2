// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robot_base:msg/ProjectileMessage.idl
// generated code does not contain a copyright notice
#include "robot_base/msg/detail/projectile_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robot_base/msg/detail/projectile_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robot_base
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_base
cdr_serialize(
  const robot_base::msg::ProjectileMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goaldistance
  cdr << ros_message.goaldistance;
  // Member: goalangle
  cdr << ros_message.goalangle;
  // Member: robotdistance
  cdr << ros_message.robotdistance;
  // Member: robotangle
  cdr << ros_message.robotangle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_base
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_base::msg::ProjectileMessage & ros_message)
{
  // Member: goaldistance
  cdr >> ros_message.goaldistance;

  // Member: goalangle
  cdr >> ros_message.goalangle;

  // Member: robotdistance
  cdr >> ros_message.robotdistance;

  // Member: robotangle
  cdr >> ros_message.robotangle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_base
get_serialized_size(
  const robot_base::msg::ProjectileMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goaldistance
  {
    size_t item_size = sizeof(ros_message.goaldistance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goalangle
  {
    size_t item_size = sizeof(ros_message.goalangle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robotdistance
  {
    size_t item_size = sizeof(ros_message.robotdistance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robotangle
  {
    size_t item_size = sizeof(ros_message.robotangle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_base
max_serialized_size_ProjectileMessage(
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


  // Member: goaldistance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: goalangle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: robotdistance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: robotangle
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
    using DataType = robot_base::msg::ProjectileMessage;
    is_plain =
      (
      offsetof(DataType, robotangle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ProjectileMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robot_base::msg::ProjectileMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ProjectileMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robot_base::msg::ProjectileMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ProjectileMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robot_base::msg::ProjectileMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ProjectileMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ProjectileMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ProjectileMessage__callbacks = {
  "robot_base::msg",
  "ProjectileMessage",
  _ProjectileMessage__cdr_serialize,
  _ProjectileMessage__cdr_deserialize,
  _ProjectileMessage__get_serialized_size,
  _ProjectileMessage__max_serialized_size
};

static rosidl_message_type_support_t _ProjectileMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ProjectileMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robot_base

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_base
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_base::msg::ProjectileMessage>()
{
  return &robot_base::msg::typesupport_fastrtps_cpp::_ProjectileMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_base, msg, ProjectileMessage)() {
  return &robot_base::msg::typesupport_fastrtps_cpp::_ProjectileMessage__handle;
}

#ifdef __cplusplus
}
#endif
