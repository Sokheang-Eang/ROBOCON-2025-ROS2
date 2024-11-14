// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_base:msg/PositionMessage.idl
// generated code does not contain a copyright notice
#include "robot_base/msg/detail/position_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header_odom`
// Member `header_robot`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_base__msg__PositionMessage__init(robot_base__msg__PositionMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header_odom
  if (!rosidl_runtime_c__String__init(&msg->header_odom)) {
    robot_base__msg__PositionMessage__fini(msg);
    return false;
  }
  // odom_x
  // odom_y
  // odom_theta
  // header_robot
  if (!rosidl_runtime_c__String__init(&msg->header_robot)) {
    robot_base__msg__PositionMessage__fini(msg);
    return false;
  }
  // robot_x
  // robot_y
  // robot_theta
  return true;
}

void
robot_base__msg__PositionMessage__fini(robot_base__msg__PositionMessage * msg)
{
  if (!msg) {
    return;
  }
  // header_odom
  rosidl_runtime_c__String__fini(&msg->header_odom);
  // odom_x
  // odom_y
  // odom_theta
  // header_robot
  rosidl_runtime_c__String__fini(&msg->header_robot);
  // robot_x
  // robot_y
  // robot_theta
}

bool
robot_base__msg__PositionMessage__are_equal(const robot_base__msg__PositionMessage * lhs, const robot_base__msg__PositionMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header_odom
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->header_odom), &(rhs->header_odom)))
  {
    return false;
  }
  // odom_x
  if (lhs->odom_x != rhs->odom_x) {
    return false;
  }
  // odom_y
  if (lhs->odom_y != rhs->odom_y) {
    return false;
  }
  // odom_theta
  if (lhs->odom_theta != rhs->odom_theta) {
    return false;
  }
  // header_robot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->header_robot), &(rhs->header_robot)))
  {
    return false;
  }
  // robot_x
  if (lhs->robot_x != rhs->robot_x) {
    return false;
  }
  // robot_y
  if (lhs->robot_y != rhs->robot_y) {
    return false;
  }
  // robot_theta
  if (lhs->robot_theta != rhs->robot_theta) {
    return false;
  }
  return true;
}

bool
robot_base__msg__PositionMessage__copy(
  const robot_base__msg__PositionMessage * input,
  robot_base__msg__PositionMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // header_odom
  if (!rosidl_runtime_c__String__copy(
      &(input->header_odom), &(output->header_odom)))
  {
    return false;
  }
  // odom_x
  output->odom_x = input->odom_x;
  // odom_y
  output->odom_y = input->odom_y;
  // odom_theta
  output->odom_theta = input->odom_theta;
  // header_robot
  if (!rosidl_runtime_c__String__copy(
      &(input->header_robot), &(output->header_robot)))
  {
    return false;
  }
  // robot_x
  output->robot_x = input->robot_x;
  // robot_y
  output->robot_y = input->robot_y;
  // robot_theta
  output->robot_theta = input->robot_theta;
  return true;
}

robot_base__msg__PositionMessage *
robot_base__msg__PositionMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_base__msg__PositionMessage * msg = (robot_base__msg__PositionMessage *)allocator.allocate(sizeof(robot_base__msg__PositionMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_base__msg__PositionMessage));
  bool success = robot_base__msg__PositionMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_base__msg__PositionMessage__destroy(robot_base__msg__PositionMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_base__msg__PositionMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_base__msg__PositionMessage__Sequence__init(robot_base__msg__PositionMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_base__msg__PositionMessage * data = NULL;

  if (size) {
    data = (robot_base__msg__PositionMessage *)allocator.zero_allocate(size, sizeof(robot_base__msg__PositionMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_base__msg__PositionMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_base__msg__PositionMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_base__msg__PositionMessage__Sequence__fini(robot_base__msg__PositionMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_base__msg__PositionMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_base__msg__PositionMessage__Sequence *
robot_base__msg__PositionMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_base__msg__PositionMessage__Sequence * array = (robot_base__msg__PositionMessage__Sequence *)allocator.allocate(sizeof(robot_base__msg__PositionMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_base__msg__PositionMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_base__msg__PositionMessage__Sequence__destroy(robot_base__msg__PositionMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_base__msg__PositionMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_base__msg__PositionMessage__Sequence__are_equal(const robot_base__msg__PositionMessage__Sequence * lhs, const robot_base__msg__PositionMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_base__msg__PositionMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_base__msg__PositionMessage__Sequence__copy(
  const robot_base__msg__PositionMessage__Sequence * input,
  robot_base__msg__PositionMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_base__msg__PositionMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_base__msg__PositionMessage * data =
      (robot_base__msg__PositionMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_base__msg__PositionMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_base__msg__PositionMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_base__msg__PositionMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
