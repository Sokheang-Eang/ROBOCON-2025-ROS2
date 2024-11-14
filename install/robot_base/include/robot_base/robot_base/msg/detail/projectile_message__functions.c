// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_base:msg/ProjectileMessage.idl
// generated code does not contain a copyright notice
#include "robot_base/msg/detail/projectile_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robot_base__msg__ProjectileMessage__init(robot_base__msg__ProjectileMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goaldistance
  // goalangle
  // robotdistance
  // robotangle
  return true;
}

void
robot_base__msg__ProjectileMessage__fini(robot_base__msg__ProjectileMessage * msg)
{
  if (!msg) {
    return;
  }
  // goaldistance
  // goalangle
  // robotdistance
  // robotangle
}

bool
robot_base__msg__ProjectileMessage__are_equal(const robot_base__msg__ProjectileMessage * lhs, const robot_base__msg__ProjectileMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goaldistance
  if (lhs->goaldistance != rhs->goaldistance) {
    return false;
  }
  // goalangle
  if (lhs->goalangle != rhs->goalangle) {
    return false;
  }
  // robotdistance
  if (lhs->robotdistance != rhs->robotdistance) {
    return false;
  }
  // robotangle
  if (lhs->robotangle != rhs->robotangle) {
    return false;
  }
  return true;
}

bool
robot_base__msg__ProjectileMessage__copy(
  const robot_base__msg__ProjectileMessage * input,
  robot_base__msg__ProjectileMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goaldistance
  output->goaldistance = input->goaldistance;
  // goalangle
  output->goalangle = input->goalangle;
  // robotdistance
  output->robotdistance = input->robotdistance;
  // robotangle
  output->robotangle = input->robotangle;
  return true;
}

robot_base__msg__ProjectileMessage *
robot_base__msg__ProjectileMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_base__msg__ProjectileMessage * msg = (robot_base__msg__ProjectileMessage *)allocator.allocate(sizeof(robot_base__msg__ProjectileMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_base__msg__ProjectileMessage));
  bool success = robot_base__msg__ProjectileMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_base__msg__ProjectileMessage__destroy(robot_base__msg__ProjectileMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_base__msg__ProjectileMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_base__msg__ProjectileMessage__Sequence__init(robot_base__msg__ProjectileMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_base__msg__ProjectileMessage * data = NULL;

  if (size) {
    data = (robot_base__msg__ProjectileMessage *)allocator.zero_allocate(size, sizeof(robot_base__msg__ProjectileMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_base__msg__ProjectileMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_base__msg__ProjectileMessage__fini(&data[i - 1]);
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
robot_base__msg__ProjectileMessage__Sequence__fini(robot_base__msg__ProjectileMessage__Sequence * array)
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
      robot_base__msg__ProjectileMessage__fini(&array->data[i]);
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

robot_base__msg__ProjectileMessage__Sequence *
robot_base__msg__ProjectileMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_base__msg__ProjectileMessage__Sequence * array = (robot_base__msg__ProjectileMessage__Sequence *)allocator.allocate(sizeof(robot_base__msg__ProjectileMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_base__msg__ProjectileMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_base__msg__ProjectileMessage__Sequence__destroy(robot_base__msg__ProjectileMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_base__msg__ProjectileMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_base__msg__ProjectileMessage__Sequence__are_equal(const robot_base__msg__ProjectileMessage__Sequence * lhs, const robot_base__msg__ProjectileMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_base__msg__ProjectileMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_base__msg__ProjectileMessage__Sequence__copy(
  const robot_base__msg__ProjectileMessage__Sequence * input,
  robot_base__msg__ProjectileMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_base__msg__ProjectileMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_base__msg__ProjectileMessage * data =
      (robot_base__msg__ProjectileMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_base__msg__ProjectileMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_base__msg__ProjectileMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_base__msg__ProjectileMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
