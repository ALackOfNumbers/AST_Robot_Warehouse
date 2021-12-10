// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from messages_package:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "messages_package/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `robot_state`
#include "rosidl_runtime_c/string_functions.h"

bool
messages_package__msg__RobotState__init(messages_package__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // robot_number
  // robot_state
  if (!rosidl_runtime_c__String__init(&msg->robot_state)) {
    messages_package__msg__RobotState__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__msg__RobotState__fini(messages_package__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // robot_number
  // robot_state
  rosidl_runtime_c__String__fini(&msg->robot_state);
}

messages_package__msg__RobotState *
messages_package__msg__RobotState__create()
{
  messages_package__msg__RobotState * msg = (messages_package__msg__RobotState *)malloc(sizeof(messages_package__msg__RobotState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__msg__RobotState));
  bool success = messages_package__msg__RobotState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__msg__RobotState__destroy(messages_package__msg__RobotState * msg)
{
  if (msg) {
    messages_package__msg__RobotState__fini(msg);
  }
  free(msg);
}


bool
messages_package__msg__RobotState__Sequence__init(messages_package__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__msg__RobotState * data = NULL;
  if (size) {
    data = (messages_package__msg__RobotState *)calloc(size, sizeof(messages_package__msg__RobotState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__msg__RobotState__fini(&data[i - 1]);
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
messages_package__msg__RobotState__Sequence__fini(messages_package__msg__RobotState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__msg__RobotState__fini(&array->data[i]);
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

messages_package__msg__RobotState__Sequence *
messages_package__msg__RobotState__Sequence__create(size_t size)
{
  messages_package__msg__RobotState__Sequence * array = (messages_package__msg__RobotState__Sequence *)malloc(sizeof(messages_package__msg__RobotState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__msg__RobotState__Sequence__destroy(messages_package__msg__RobotState__Sequence * array)
{
  if (array) {
    messages_package__msg__RobotState__Sequence__fini(array);
  }
  free(array);
}
