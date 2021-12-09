// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from messages_package:msg/Map.idl
// generated code does not contain a copyright notice
#include "messages_package/msg/detail/map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `map_array`
#include "messages_package/msg/detail/row__functions.h"

bool
messages_package__msg__Map__init(messages_package__msg__Map * msg)
{
  if (!msg) {
    return false;
  }
  // map_array
  for (size_t i = 0; i < 5; ++i) {
    if (!messages_package__msg__Row__init(&msg->map_array[i])) {
      messages_package__msg__Map__fini(msg);
      return false;
    }
  }
  return true;
}

void
messages_package__msg__Map__fini(messages_package__msg__Map * msg)
{
  if (!msg) {
    return;
  }
  // map_array
  for (size_t i = 0; i < 5; ++i) {
    messages_package__msg__Row__fini(&msg->map_array[i]);
  }
}

messages_package__msg__Map *
messages_package__msg__Map__create()
{
  messages_package__msg__Map * msg = (messages_package__msg__Map *)malloc(sizeof(messages_package__msg__Map));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__msg__Map));
  bool success = messages_package__msg__Map__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__msg__Map__destroy(messages_package__msg__Map * msg)
{
  if (msg) {
    messages_package__msg__Map__fini(msg);
  }
  free(msg);
}


bool
messages_package__msg__Map__Sequence__init(messages_package__msg__Map__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__msg__Map * data = NULL;
  if (size) {
    data = (messages_package__msg__Map *)calloc(size, sizeof(messages_package__msg__Map));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__msg__Map__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__msg__Map__fini(&data[i - 1]);
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
messages_package__msg__Map__Sequence__fini(messages_package__msg__Map__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__msg__Map__fini(&array->data[i]);
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

messages_package__msg__Map__Sequence *
messages_package__msg__Map__Sequence__create(size_t size)
{
  messages_package__msg__Map__Sequence * array = (messages_package__msg__Map__Sequence *)malloc(sizeof(messages_package__msg__Map__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__msg__Map__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__msg__Map__Sequence__destroy(messages_package__msg__Map__Sequence * array)
{
  if (array) {
    messages_package__msg__Map__Sequence__fini(array);
  }
  free(array);
}
