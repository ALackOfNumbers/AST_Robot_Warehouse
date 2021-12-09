// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from messages_package:msg/Row.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__ROW__FUNCTIONS_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__ROW__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "messages_package/msg/rosidl_generator_c__visibility_control.h"

#include "messages_package/msg/detail/row__struct.h"

/// Initialize msg/Row message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__msg__Row
 * )) before or use
 * messages_package__msg__Row__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__msg__Row__init(messages_package__msg__Row * msg);

/// Finalize msg/Row message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Row__fini(messages_package__msg__Row * msg);

/// Create msg/Row message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__msg__Row__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__msg__Row *
messages_package__msg__Row__create();

/// Destroy msg/Row message.
/**
 * It calls
 * messages_package__msg__Row__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Row__destroy(messages_package__msg__Row * msg);


/// Initialize array of msg/Row messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__msg__Row__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__msg__Row__Sequence__init(messages_package__msg__Row__Sequence * array, size_t size);

/// Finalize array of msg/Row messages.
/**
 * It calls
 * messages_package__msg__Row__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Row__Sequence__fini(messages_package__msg__Row__Sequence * array);

/// Create array of msg/Row messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__msg__Row__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__msg__Row__Sequence *
messages_package__msg__Row__Sequence__create(size_t size);

/// Destroy array of msg/Row messages.
/**
 * It calls
 * messages_package__msg__Row__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Row__Sequence__destroy(messages_package__msg__Row__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__ROW__FUNCTIONS_H_
