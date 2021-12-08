// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from messages_package:msg/RobotLocation.idl
// generated code does not contain a copyright notice
#include "messages_package/msg/detail/robot_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `robot_location`
#include "messages_package/msg/detail/coordinates__functions.h"

bool
messages_package__msg__RobotLocation__init(messages_package__msg__RobotLocation * msg)
{
  if (!msg) {
    return false;
  }
  // robot_number
  // robot_location
  if (!messages_package__msg__Coordinates__init(&msg->robot_location)) {
    messages_package__msg__RobotLocation__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__msg__RobotLocation__fini(messages_package__msg__RobotLocation * msg)
{
  if (!msg) {
    return;
  }
  // robot_number
  // robot_location
  messages_package__msg__Coordinates__fini(&msg->robot_location);
}

messages_package__msg__RobotLocation *
messages_package__msg__RobotLocation__create()
{
  messages_package__msg__RobotLocation * msg = (messages_package__msg__RobotLocation *)malloc(sizeof(messages_package__msg__RobotLocation));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__msg__RobotLocation));
  bool success = messages_package__msg__RobotLocation__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__msg__RobotLocation__destroy(messages_package__msg__RobotLocation * msg)
{
  if (msg) {
    messages_package__msg__RobotLocation__fini(msg);
  }
  free(msg);
}


bool
messages_package__msg__RobotLocation__Sequence__init(messages_package__msg__RobotLocation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__msg__RobotLocation * data = NULL;
  if (size) {
    data = (messages_package__msg__RobotLocation *)calloc(size, sizeof(messages_package__msg__RobotLocation));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__msg__RobotLocation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__msg__RobotLocation__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
messages_package__msg__RobotLocation__Sequence__fini(messages_package__msg__RobotLocation__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__msg__RobotLocation__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

messages_package__msg__RobotLocation__Sequence *
messages_package__msg__RobotLocation__Sequence__create(size_t size)
{
  messages_package__msg__RobotLocation__Sequence * array = (messages_package__msg__RobotLocation__Sequence *)malloc(sizeof(messages_package__msg__RobotLocation__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__msg__RobotLocation__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__msg__RobotLocation__Sequence__destroy(messages_package__msg__RobotLocation__Sequence * array)
{
  if (array) {
    messages_package__msg__RobotLocation__Sequence__fini(array);
  }
  free(array);
}
