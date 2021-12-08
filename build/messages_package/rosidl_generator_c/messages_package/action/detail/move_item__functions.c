// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from messages_package:action/MoveItem.idl
// generated code does not contain a copyright notice
#include "messages_package/action/detail/move_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `item`
#include "messages_package/msg/detail/item__functions.h"
// Member `initial_location`
// Member `final_location`
#include "messages_package/msg/detail/coordinates__functions.h"

bool
messages_package__action__MoveItem_Goal__init(messages_package__action__MoveItem_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // item
  if (!messages_package__msg__Item__init(&msg->item)) {
    messages_package__action__MoveItem_Goal__fini(msg);
    return false;
  }
  // initial_location
  if (!messages_package__msg__Coordinates__init(&msg->initial_location)) {
    messages_package__action__MoveItem_Goal__fini(msg);
    return false;
  }
  // final_location
  if (!messages_package__msg__Coordinates__init(&msg->final_location)) {
    messages_package__action__MoveItem_Goal__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__action__MoveItem_Goal__fini(messages_package__action__MoveItem_Goal * msg)
{
  if (!msg) {
    return;
  }
  // item
  messages_package__msg__Item__fini(&msg->item);
  // initial_location
  messages_package__msg__Coordinates__fini(&msg->initial_location);
  // final_location
  messages_package__msg__Coordinates__fini(&msg->final_location);
}

messages_package__action__MoveItem_Goal *
messages_package__action__MoveItem_Goal__create()
{
  messages_package__action__MoveItem_Goal * msg = (messages_package__action__MoveItem_Goal *)malloc(sizeof(messages_package__action__MoveItem_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__action__MoveItem_Goal));
  bool success = messages_package__action__MoveItem_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__action__MoveItem_Goal__destroy(messages_package__action__MoveItem_Goal * msg)
{
  if (msg) {
    messages_package__action__MoveItem_Goal__fini(msg);
  }
  free(msg);
}


bool
messages_package__action__MoveItem_Goal__Sequence__init(messages_package__action__MoveItem_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__action__MoveItem_Goal * data = NULL;
  if (size) {
    data = (messages_package__action__MoveItem_Goal *)calloc(size, sizeof(messages_package__action__MoveItem_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__action__MoveItem_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__action__MoveItem_Goal__fini(&data[i - 1]);
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
messages_package__action__MoveItem_Goal__Sequence__fini(messages_package__action__MoveItem_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__action__MoveItem_Goal__fini(&array->data[i]);
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

messages_package__action__MoveItem_Goal__Sequence *
messages_package__action__MoveItem_Goal__Sequence__create(size_t size)
{
  messages_package__action__MoveItem_Goal__Sequence * array = (messages_package__action__MoveItem_Goal__Sequence *)malloc(sizeof(messages_package__action__MoveItem_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__action__MoveItem_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__action__MoveItem_Goal__Sequence__destroy(messages_package__action__MoveItem_Goal__Sequence * array)
{
  if (array) {
    messages_package__action__MoveItem_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `current_location`
// Member `target_location`
// already included above
// #include "messages_package/msg/detail/coordinates__functions.h"

bool
messages_package__action__MoveItem_Result__init(messages_package__action__MoveItem_Result * msg)
{
  if (!msg) {
    return false;
  }
  // current_location
  if (!messages_package__msg__Coordinates__init(&msg->current_location)) {
    messages_package__action__MoveItem_Result__fini(msg);
    return false;
  }
  // target_location
  if (!messages_package__msg__Coordinates__init(&msg->target_location)) {
    messages_package__action__MoveItem_Result__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__action__MoveItem_Result__fini(messages_package__action__MoveItem_Result * msg)
{
  if (!msg) {
    return;
  }
  // current_location
  messages_package__msg__Coordinates__fini(&msg->current_location);
  // target_location
  messages_package__msg__Coordinates__fini(&msg->target_location);
}

messages_package__action__MoveItem_Result *
messages_package__action__MoveItem_Result__create()
{
  messages_package__action__MoveItem_Result * msg = (messages_package__action__MoveItem_Result *)malloc(sizeof(messages_package__action__MoveItem_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__action__MoveItem_Result));
  bool success = messages_package__action__MoveItem_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__action__MoveItem_Result__destroy(messages_package__action__MoveItem_Result * msg)
{
  if (msg) {
    messages_package__action__MoveItem_Result__fini(msg);
  }
  free(msg);
}


bool
messages_package__action__MoveItem_Result__Sequence__init(messages_package__action__MoveItem_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__action__MoveItem_Result * data = NULL;
  if (size) {
    data = (messages_package__action__MoveItem_Result *)calloc(size, sizeof(messages_package__action__MoveItem_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__action__MoveItem_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__action__MoveItem_Result__fini(&data[i - 1]);
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
messages_package__action__MoveItem_Result__Sequence__fini(messages_package__action__MoveItem_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__action__MoveItem_Result__fini(&array->data[i]);
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

messages_package__action__MoveItem_Result__Sequence *
messages_package__action__MoveItem_Result__Sequence__create(size_t size)
{
  messages_package__action__MoveItem_Result__Sequence * array = (messages_package__action__MoveItem_Result__Sequence *)malloc(sizeof(messages_package__action__MoveItem_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__action__MoveItem_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__action__MoveItem_Result__Sequence__destroy(messages_package__action__MoveItem_Result__Sequence * array)
{
  if (array) {
    messages_package__action__MoveItem_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `failure_reason`
#include "rosidl_runtime_c/string_functions.h"

bool
messages_package__action__MoveItem_Feedback__init(messages_package__action__MoveItem_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // success_or_failure
  // failure_reason
  if (!rosidl_runtime_c__String__init(&msg->failure_reason)) {
    messages_package__action__MoveItem_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__action__MoveItem_Feedback__fini(messages_package__action__MoveItem_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // success_or_failure
  // failure_reason
  rosidl_runtime_c__String__fini(&msg->failure_reason);
}

messages_package__action__MoveItem_Feedback *
messages_package__action__MoveItem_Feedback__create()
{
  messages_package__action__MoveItem_Feedback * msg = (messages_package__action__MoveItem_Feedback *)malloc(sizeof(messages_package__action__MoveItem_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__action__MoveItem_Feedback));
  bool success = messages_package__action__MoveItem_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__action__MoveItem_Feedback__destroy(messages_package__action__MoveItem_Feedback * msg)
{
  if (msg) {
    messages_package__action__MoveItem_Feedback__fini(msg);
  }
  free(msg);
}


bool
messages_package__action__MoveItem_Feedback__Sequence__init(messages_package__action__MoveItem_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__action__MoveItem_Feedback * data = NULL;
  if (size) {
    data = (messages_package__action__MoveItem_Feedback *)calloc(size, sizeof(messages_package__action__MoveItem_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__action__MoveItem_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__action__MoveItem_Feedback__fini(&data[i - 1]);
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
messages_package__action__MoveItem_Feedback__Sequence__fini(messages_package__action__MoveItem_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__action__MoveItem_Feedback__fini(&array->data[i]);
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

messages_package__action__MoveItem_Feedback__Sequence *
messages_package__action__MoveItem_Feedback__Sequence__create(size_t size)
{
  messages_package__action__MoveItem_Feedback__Sequence * array = (messages_package__action__MoveItem_Feedback__Sequence *)malloc(sizeof(messages_package__action__MoveItem_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__action__MoveItem_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__action__MoveItem_Feedback__Sequence__destroy(messages_package__action__MoveItem_Feedback__Sequence * array)
{
  if (array) {
    messages_package__action__MoveItem_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "messages_package/action/detail/move_item__functions.h"

bool
messages_package__action__MoveItem_SendGoal_Request__init(messages_package__action__MoveItem_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    messages_package__action__MoveItem_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!messages_package__action__MoveItem_Goal__init(&msg->goal)) {
    messages_package__action__MoveItem_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__action__MoveItem_SendGoal_Request__fini(messages_package__action__MoveItem_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  messages_package__action__MoveItem_Goal__fini(&msg->goal);
}

messages_package__action__MoveItem_SendGoal_Request *
messages_package__action__MoveItem_SendGoal_Request__create()
{
  messages_package__action__MoveItem_SendGoal_Request * msg = (messages_package__action__MoveItem_SendGoal_Request *)malloc(sizeof(messages_package__action__MoveItem_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__action__MoveItem_SendGoal_Request));
  bool success = messages_package__action__MoveItem_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__action__MoveItem_SendGoal_Request__destroy(messages_package__action__MoveItem_SendGoal_Request * msg)
{
  if (msg) {
    messages_package__action__MoveItem_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
messages_package__action__MoveItem_SendGoal_Request__Sequence__init(messages_package__action__MoveItem_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__action__MoveItem_SendGoal_Request * data = NULL;
  if (size) {
    data = (messages_package__action__MoveItem_SendGoal_Request *)calloc(size, sizeof(messages_package__action__MoveItem_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__action__MoveItem_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__action__MoveItem_SendGoal_Request__fini(&data[i - 1]);
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
messages_package__action__MoveItem_SendGoal_Request__Sequence__fini(messages_package__action__MoveItem_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__action__MoveItem_SendGoal_Request__fini(&array->data[i]);
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

messages_package__action__MoveItem_SendGoal_Request__Sequence *
messages_package__action__MoveItem_SendGoal_Request__Sequence__create(size_t size)
{
  messages_package__action__MoveItem_SendGoal_Request__Sequence * array = (messages_package__action__MoveItem_SendGoal_Request__Sequence *)malloc(sizeof(messages_package__action__MoveItem_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__action__MoveItem_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__action__MoveItem_SendGoal_Request__Sequence__destroy(messages_package__action__MoveItem_SendGoal_Request__Sequence * array)
{
  if (array) {
    messages_package__action__MoveItem_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
messages_package__action__MoveItem_SendGoal_Response__init(messages_package__action__MoveItem_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    messages_package__action__MoveItem_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__action__MoveItem_SendGoal_Response__fini(messages_package__action__MoveItem_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

messages_package__action__MoveItem_SendGoal_Response *
messages_package__action__MoveItem_SendGoal_Response__create()
{
  messages_package__action__MoveItem_SendGoal_Response * msg = (messages_package__action__MoveItem_SendGoal_Response *)malloc(sizeof(messages_package__action__MoveItem_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__action__MoveItem_SendGoal_Response));
  bool success = messages_package__action__MoveItem_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__action__MoveItem_SendGoal_Response__destroy(messages_package__action__MoveItem_SendGoal_Response * msg)
{
  if (msg) {
    messages_package__action__MoveItem_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
messages_package__action__MoveItem_SendGoal_Response__Sequence__init(messages_package__action__MoveItem_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__action__MoveItem_SendGoal_Response * data = NULL;
  if (size) {
    data = (messages_package__action__MoveItem_SendGoal_Response *)calloc(size, sizeof(messages_package__action__MoveItem_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__action__MoveItem_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__action__MoveItem_SendGoal_Response__fini(&data[i - 1]);
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
messages_package__action__MoveItem_SendGoal_Response__Sequence__fini(messages_package__action__MoveItem_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__action__MoveItem_SendGoal_Response__fini(&array->data[i]);
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

messages_package__action__MoveItem_SendGoal_Response__Sequence *
messages_package__action__MoveItem_SendGoal_Response__Sequence__create(size_t size)
{
  messages_package__action__MoveItem_SendGoal_Response__Sequence * array = (messages_package__action__MoveItem_SendGoal_Response__Sequence *)malloc(sizeof(messages_package__action__MoveItem_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__action__MoveItem_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__action__MoveItem_SendGoal_Response__Sequence__destroy(messages_package__action__MoveItem_SendGoal_Response__Sequence * array)
{
  if (array) {
    messages_package__action__MoveItem_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
messages_package__action__MoveItem_GetResult_Request__init(messages_package__action__MoveItem_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    messages_package__action__MoveItem_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__action__MoveItem_GetResult_Request__fini(messages_package__action__MoveItem_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

messages_package__action__MoveItem_GetResult_Request *
messages_package__action__MoveItem_GetResult_Request__create()
{
  messages_package__action__MoveItem_GetResult_Request * msg = (messages_package__action__MoveItem_GetResult_Request *)malloc(sizeof(messages_package__action__MoveItem_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__action__MoveItem_GetResult_Request));
  bool success = messages_package__action__MoveItem_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__action__MoveItem_GetResult_Request__destroy(messages_package__action__MoveItem_GetResult_Request * msg)
{
  if (msg) {
    messages_package__action__MoveItem_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
messages_package__action__MoveItem_GetResult_Request__Sequence__init(messages_package__action__MoveItem_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__action__MoveItem_GetResult_Request * data = NULL;
  if (size) {
    data = (messages_package__action__MoveItem_GetResult_Request *)calloc(size, sizeof(messages_package__action__MoveItem_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__action__MoveItem_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__action__MoveItem_GetResult_Request__fini(&data[i - 1]);
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
messages_package__action__MoveItem_GetResult_Request__Sequence__fini(messages_package__action__MoveItem_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__action__MoveItem_GetResult_Request__fini(&array->data[i]);
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

messages_package__action__MoveItem_GetResult_Request__Sequence *
messages_package__action__MoveItem_GetResult_Request__Sequence__create(size_t size)
{
  messages_package__action__MoveItem_GetResult_Request__Sequence * array = (messages_package__action__MoveItem_GetResult_Request__Sequence *)malloc(sizeof(messages_package__action__MoveItem_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__action__MoveItem_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__action__MoveItem_GetResult_Request__Sequence__destroy(messages_package__action__MoveItem_GetResult_Request__Sequence * array)
{
  if (array) {
    messages_package__action__MoveItem_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "messages_package/action/detail/move_item__functions.h"

bool
messages_package__action__MoveItem_GetResult_Response__init(messages_package__action__MoveItem_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!messages_package__action__MoveItem_Result__init(&msg->result)) {
    messages_package__action__MoveItem_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__action__MoveItem_GetResult_Response__fini(messages_package__action__MoveItem_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  messages_package__action__MoveItem_Result__fini(&msg->result);
}

messages_package__action__MoveItem_GetResult_Response *
messages_package__action__MoveItem_GetResult_Response__create()
{
  messages_package__action__MoveItem_GetResult_Response * msg = (messages_package__action__MoveItem_GetResult_Response *)malloc(sizeof(messages_package__action__MoveItem_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__action__MoveItem_GetResult_Response));
  bool success = messages_package__action__MoveItem_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__action__MoveItem_GetResult_Response__destroy(messages_package__action__MoveItem_GetResult_Response * msg)
{
  if (msg) {
    messages_package__action__MoveItem_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
messages_package__action__MoveItem_GetResult_Response__Sequence__init(messages_package__action__MoveItem_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__action__MoveItem_GetResult_Response * data = NULL;
  if (size) {
    data = (messages_package__action__MoveItem_GetResult_Response *)calloc(size, sizeof(messages_package__action__MoveItem_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__action__MoveItem_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__action__MoveItem_GetResult_Response__fini(&data[i - 1]);
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
messages_package__action__MoveItem_GetResult_Response__Sequence__fini(messages_package__action__MoveItem_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__action__MoveItem_GetResult_Response__fini(&array->data[i]);
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

messages_package__action__MoveItem_GetResult_Response__Sequence *
messages_package__action__MoveItem_GetResult_Response__Sequence__create(size_t size)
{
  messages_package__action__MoveItem_GetResult_Response__Sequence * array = (messages_package__action__MoveItem_GetResult_Response__Sequence *)malloc(sizeof(messages_package__action__MoveItem_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__action__MoveItem_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__action__MoveItem_GetResult_Response__Sequence__destroy(messages_package__action__MoveItem_GetResult_Response__Sequence * array)
{
  if (array) {
    messages_package__action__MoveItem_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "messages_package/action/detail/move_item__functions.h"

bool
messages_package__action__MoveItem_FeedbackMessage__init(messages_package__action__MoveItem_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    messages_package__action__MoveItem_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!messages_package__action__MoveItem_Feedback__init(&msg->feedback)) {
    messages_package__action__MoveItem_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
messages_package__action__MoveItem_FeedbackMessage__fini(messages_package__action__MoveItem_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  messages_package__action__MoveItem_Feedback__fini(&msg->feedback);
}

messages_package__action__MoveItem_FeedbackMessage *
messages_package__action__MoveItem_FeedbackMessage__create()
{
  messages_package__action__MoveItem_FeedbackMessage * msg = (messages_package__action__MoveItem_FeedbackMessage *)malloc(sizeof(messages_package__action__MoveItem_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(messages_package__action__MoveItem_FeedbackMessage));
  bool success = messages_package__action__MoveItem_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
messages_package__action__MoveItem_FeedbackMessage__destroy(messages_package__action__MoveItem_FeedbackMessage * msg)
{
  if (msg) {
    messages_package__action__MoveItem_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
messages_package__action__MoveItem_FeedbackMessage__Sequence__init(messages_package__action__MoveItem_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  messages_package__action__MoveItem_FeedbackMessage * data = NULL;
  if (size) {
    data = (messages_package__action__MoveItem_FeedbackMessage *)calloc(size, sizeof(messages_package__action__MoveItem_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = messages_package__action__MoveItem_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        messages_package__action__MoveItem_FeedbackMessage__fini(&data[i - 1]);
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
messages_package__action__MoveItem_FeedbackMessage__Sequence__fini(messages_package__action__MoveItem_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      messages_package__action__MoveItem_FeedbackMessage__fini(&array->data[i]);
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

messages_package__action__MoveItem_FeedbackMessage__Sequence *
messages_package__action__MoveItem_FeedbackMessage__Sequence__create(size_t size)
{
  messages_package__action__MoveItem_FeedbackMessage__Sequence * array = (messages_package__action__MoveItem_FeedbackMessage__Sequence *)malloc(sizeof(messages_package__action__MoveItem_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = messages_package__action__MoveItem_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
messages_package__action__MoveItem_FeedbackMessage__Sequence__destroy(messages_package__action__MoveItem_FeedbackMessage__Sequence * array)
{
  if (array) {
    messages_package__action__MoveItem_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
