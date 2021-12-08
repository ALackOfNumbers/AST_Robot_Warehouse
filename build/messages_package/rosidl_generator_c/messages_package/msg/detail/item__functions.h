// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from messages_package:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ITEM__FUNCTIONS_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__ITEM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "messages_package/msg/rosidl_generator_c__visibility_control.h"

#include "messages_package/msg/detail/item__struct.h"

/// Initialize msg/Item message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__msg__Item
 * )) before or use
 * messages_package__msg__Item__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__msg__Item__init(messages_package__msg__Item * msg);

/// Finalize msg/Item message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Item__fini(messages_package__msg__Item * msg);

/// Create msg/Item message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__msg__Item__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__msg__Item *
messages_package__msg__Item__create();

/// Destroy msg/Item message.
/**
 * It calls
 * messages_package__msg__Item__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Item__destroy(messages_package__msg__Item * msg);


/// Initialize array of msg/Item messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__msg__Item__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__msg__Item__Sequence__init(messages_package__msg__Item__Sequence * array, size_t size);

/// Finalize array of msg/Item messages.
/**
 * It calls
 * messages_package__msg__Item__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Item__Sequence__fini(messages_package__msg__Item__Sequence * array);

/// Create array of msg/Item messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__msg__Item__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__msg__Item__Sequence *
messages_package__msg__Item__Sequence__create(size_t size);

/// Destroy array of msg/Item messages.
/**
 * It calls
 * messages_package__msg__Item__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Item__Sequence__destroy(messages_package__msg__Item__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ITEM__FUNCTIONS_H_
