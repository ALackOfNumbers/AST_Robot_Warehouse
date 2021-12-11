// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from messages_package:srv/PickUpItem.idl
// generated code does not contain a copyright notice
#include "messages_package/srv/detail/pick_up_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `item`
#include "messages_package/msg/detail/item__functions.h"
// Member `location`
#include "messages_package/msg/detail/coordinates__functions.h"

bool
messages_package__srv__PickUpItem_Request__init(messages_package__srv__PickUpItem_Request * msg)
{
  if (!msg) {
    return false;
  }
  // item
  if (!messages_package__msg__Item__init(&msg->item)) {
    messages_package__srv__PickUpItem_Request__fini(msg);
    return false;
  }
  // location
  if (!messages_package__msg__Coordinates__init(&msg->location)) {
    messages_package__srv__PickUpItem_Request__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__srv__PickUpItem_Request__fini(messages_package__srv__PickUpItem_Request * msg)
{
  if (!msg) {
    return;
  }
  // item
  messages_package__msg__Item__fini(&msg->item);
  // location
  messages_package__msg__Coordinates__fini(&msg->location);
}

messages_package__srv__PickUpItem_Request *
messages_package__srv__PickUpItem_Request__create()
{
  messages_package__srv__PickUpItem_Request * msg = (messages_package__srv__PickUpItem_Request *)malloc(sizeof(messages_package__srv__PickUpItem_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__srv__PickUpItem_Request));
  bool success = messages_package__srv__PickUpItem_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__srv__PickUpItem_Request__destroy(messages_package__srv__PickUpItem_Request * msg)
{
  if (msg) {
    messages_package__srv__PickUpItem_Request__fini(msg);
  }
  free(msg);
}


bool
messages_package__srv__PickUpItem_Request__Sequence__init(messages_package__srv__PickUpItem_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__srv__PickUpItem_Request * data = NULL;
  if (size) {
    data = (messages_package__srv__PickUpItem_Request *)calloc(size, sizeof(messages_package__srv__PickUpItem_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__srv__PickUpItem_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__srv__PickUpItem_Request__fini(&data[i - 1]);
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
messages_package__srv__PickUpItem_Request__Sequence__fini(messages_package__srv__PickUpItem_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__srv__PickUpItem_Request__fini(&array->data[i]);
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

messages_package__srv__PickUpItem_Request__Sequence *
messages_package__srv__PickUpItem_Request__Sequence__create(size_t size)
{
  messages_package__srv__PickUpItem_Request__Sequence * array = (messages_package__srv__PickUpItem_Request__Sequence *)malloc(sizeof(messages_package__srv__PickUpItem_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__srv__PickUpItem_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__srv__PickUpItem_Request__Sequence__destroy(messages_package__srv__PickUpItem_Request__Sequence * array)
{
  if (array) {
    messages_package__srv__PickUpItem_Request__Sequence__fini(array);
  }
  free(array);
}


bool
messages_package__srv__PickUpItem_Response__init(messages_package__srv__PickUpItem_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success_or_failure
  return true;
}

void
messages_package__srv__PickUpItem_Response__fini(messages_package__srv__PickUpItem_Response * msg)
{
  if (!msg) {
    return;
  }
  // success_or_failure
}

messages_package__srv__PickUpItem_Response *
messages_package__srv__PickUpItem_Response__create()
{
  messages_package__srv__PickUpItem_Response * msg = (messages_package__srv__PickUpItem_Response *)malloc(sizeof(messages_package__srv__PickUpItem_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__srv__PickUpItem_Response));
  bool success = messages_package__srv__PickUpItem_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__srv__PickUpItem_Response__destroy(messages_package__srv__PickUpItem_Response * msg)
{
  if (msg) {
    messages_package__srv__PickUpItem_Response__fini(msg);
  }
  free(msg);
}


bool
messages_package__srv__PickUpItem_Response__Sequence__init(messages_package__srv__PickUpItem_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__srv__PickUpItem_Response * data = NULL;
  if (size) {
    data = (messages_package__srv__PickUpItem_Response *)calloc(size, sizeof(messages_package__srv__PickUpItem_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__srv__PickUpItem_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__srv__PickUpItem_Response__fini(&data[i - 1]);
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
messages_package__srv__PickUpItem_Response__Sequence__fini(messages_package__srv__PickUpItem_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__srv__PickUpItem_Response__fini(&array->data[i]);
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

messages_package__srv__PickUpItem_Response__Sequence *
messages_package__srv__PickUpItem_Response__Sequence__create(size_t size)
{
  messages_package__srv__PickUpItem_Response__Sequence * array = (messages_package__srv__PickUpItem_Response__Sequence *)malloc(sizeof(messages_package__srv__PickUpItem_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__srv__PickUpItem_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__srv__PickUpItem_Response__Sequence__destroy(messages_package__srv__PickUpItem_Response__Sequence * array)
{
  if (array) {
    messages_package__srv__PickUpItem_Response__Sequence__fini(array);
  }
  free(array);
}
