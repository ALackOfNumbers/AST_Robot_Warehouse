// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from messages_package:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__MSG__DETAIL__MAP__FUNCTIONS_H_
#define MESSAGES_PACKAGE__MSG__DETAIL__MAP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "messages_package/msg/rosidl_generator_c__visibility_control.h"

#include "messages_package/msg/detail/map__struct.h"

/// Initialize msg/Map message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__msg__Map
 * )) before or use
 * messages_package__msg__Map__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__msg__Map__init(messages_package__msg__Map * msg);

/// Finalize msg/Map message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Map__fini(messages_package__msg__Map * msg);

/// Create msg/Map message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__msg__Map__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__msg__Map *
messages_package__msg__Map__create();

/// Destroy msg/Map message.
/**
 * It calls
 * messages_package__msg__Map__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Map__destroy(messages_package__msg__Map * msg);


/// Initialize array of msg/Map messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__msg__Map__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__msg__Map__Sequence__init(messages_package__msg__Map__Sequence * array, size_t size);

/// Finalize array of msg/Map messages.
/**
 * It calls
 * messages_package__msg__Map__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Map__Sequence__fini(messages_package__msg__Map__Sequence * array);

/// Create array of msg/Map messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__msg__Map__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__msg__Map__Sequence *
messages_package__msg__Map__Sequence__create(size_t size);

/// Destroy array of msg/Map messages.
/**
 * It calls
 * messages_package__msg__Map__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__msg__Map__Sequence__destroy(messages_package__msg__Map__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__MSG__DETAIL__MAP__FUNCTIONS_H_
