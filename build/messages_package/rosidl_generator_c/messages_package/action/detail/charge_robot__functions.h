// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from messages_package:action/ChargeRobot.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES_PACKAGE__ACTION__DETAIL__CHARGE_ROBOT__FUNCTIONS_H_
#define MESSAGES_PACKAGE__ACTION__DETAIL__CHARGE_ROBOT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "messages_package/msg/rosidl_generator_c__visibility_control.h"

#include "messages_package/action/detail/charge_robot__struct.h"

/// Initialize action/ChargeRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__action__ChargeRobot_Goal
 * )) before or use
 * messages_package__action__ChargeRobot_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_Goal__init(messages_package__action__ChargeRobot_Goal * msg);

/// Finalize action/ChargeRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Goal__fini(messages_package__action__ChargeRobot_Goal * msg);

/// Create action/ChargeRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__action__ChargeRobot_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_Goal *
messages_package__action__ChargeRobot_Goal__create();

/// Destroy action/ChargeRobot message.
/**
 * It calls
 * messages_package__action__ChargeRobot_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Goal__destroy(messages_package__action__ChargeRobot_Goal * msg);


/// Initialize array of action/ChargeRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__action__ChargeRobot_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_Goal__Sequence__init(messages_package__action__ChargeRobot_Goal__Sequence * array, size_t size);

/// Finalize array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Goal__Sequence__fini(messages_package__action__ChargeRobot_Goal__Sequence * array);

/// Create array of action/ChargeRobot messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__action__ChargeRobot_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_Goal__Sequence *
messages_package__action__ChargeRobot_Goal__Sequence__create(size_t size);

/// Destroy array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Goal__Sequence__destroy(messages_package__action__ChargeRobot_Goal__Sequence * array);

/// Initialize action/ChargeRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__action__ChargeRobot_Result
 * )) before or use
 * messages_package__action__ChargeRobot_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_Result__init(messages_package__action__ChargeRobot_Result * msg);

/// Finalize action/ChargeRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Result__fini(messages_package__action__ChargeRobot_Result * msg);

/// Create action/ChargeRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__action__ChargeRobot_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_Result *
messages_package__action__ChargeRobot_Result__create();

/// Destroy action/ChargeRobot message.
/**
 * It calls
 * messages_package__action__ChargeRobot_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Result__destroy(messages_package__action__ChargeRobot_Result * msg);


/// Initialize array of action/ChargeRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__action__ChargeRobot_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_Result__Sequence__init(messages_package__action__ChargeRobot_Result__Sequence * array, size_t size);

/// Finalize array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Result__Sequence__fini(messages_package__action__ChargeRobot_Result__Sequence * array);

/// Create array of action/ChargeRobot messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__action__ChargeRobot_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_Result__Sequence *
messages_package__action__ChargeRobot_Result__Sequence__create(size_t size);

/// Destroy array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Result__Sequence__destroy(messages_package__action__ChargeRobot_Result__Sequence * array);

/// Initialize action/ChargeRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__action__ChargeRobot_Feedback
 * )) before or use
 * messages_package__action__ChargeRobot_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_Feedback__init(messages_package__action__ChargeRobot_Feedback * msg);

/// Finalize action/ChargeRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Feedback__fini(messages_package__action__ChargeRobot_Feedback * msg);

/// Create action/ChargeRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__action__ChargeRobot_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_Feedback *
messages_package__action__ChargeRobot_Feedback__create();

/// Destroy action/ChargeRobot message.
/**
 * It calls
 * messages_package__action__ChargeRobot_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Feedback__destroy(messages_package__action__ChargeRobot_Feedback * msg);


/// Initialize array of action/ChargeRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__action__ChargeRobot_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_Feedback__Sequence__init(messages_package__action__ChargeRobot_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Feedback__Sequence__fini(messages_package__action__ChargeRobot_Feedback__Sequence * array);

/// Create array of action/ChargeRobot messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__action__ChargeRobot_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_Feedback__Sequence *
messages_package__action__ChargeRobot_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_Feedback__Sequence__destroy(messages_package__action__ChargeRobot_Feedback__Sequence * array);

/// Initialize action/ChargeRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__action__ChargeRobot_SendGoal_Request
 * )) before or use
 * messages_package__action__ChargeRobot_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_SendGoal_Request__init(messages_package__action__ChargeRobot_SendGoal_Request * msg);

/// Finalize action/ChargeRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_SendGoal_Request__fini(messages_package__action__ChargeRobot_SendGoal_Request * msg);

/// Create action/ChargeRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__action__ChargeRobot_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_SendGoal_Request *
messages_package__action__ChargeRobot_SendGoal_Request__create();

/// Destroy action/ChargeRobot message.
/**
 * It calls
 * messages_package__action__ChargeRobot_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_SendGoal_Request__destroy(messages_package__action__ChargeRobot_SendGoal_Request * msg);


/// Initialize array of action/ChargeRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__action__ChargeRobot_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_SendGoal_Request__Sequence__init(messages_package__action__ChargeRobot_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_SendGoal_Request__Sequence__fini(messages_package__action__ChargeRobot_SendGoal_Request__Sequence * array);

/// Create array of action/ChargeRobot messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__action__ChargeRobot_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_SendGoal_Request__Sequence *
messages_package__action__ChargeRobot_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_SendGoal_Request__Sequence__destroy(messages_package__action__ChargeRobot_SendGoal_Request__Sequence * array);

/// Initialize action/ChargeRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__action__ChargeRobot_SendGoal_Response
 * )) before or use
 * messages_package__action__ChargeRobot_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_SendGoal_Response__init(messages_package__action__ChargeRobot_SendGoal_Response * msg);

/// Finalize action/ChargeRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_SendGoal_Response__fini(messages_package__action__ChargeRobot_SendGoal_Response * msg);

/// Create action/ChargeRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__action__ChargeRobot_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_SendGoal_Response *
messages_package__action__ChargeRobot_SendGoal_Response__create();

/// Destroy action/ChargeRobot message.
/**
 * It calls
 * messages_package__action__ChargeRobot_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_SendGoal_Response__destroy(messages_package__action__ChargeRobot_SendGoal_Response * msg);


/// Initialize array of action/ChargeRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__action__ChargeRobot_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_SendGoal_Response__Sequence__init(messages_package__action__ChargeRobot_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_SendGoal_Response__Sequence__fini(messages_package__action__ChargeRobot_SendGoal_Response__Sequence * array);

/// Create array of action/ChargeRobot messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__action__ChargeRobot_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_SendGoal_Response__Sequence *
messages_package__action__ChargeRobot_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_SendGoal_Response__Sequence__destroy(messages_package__action__ChargeRobot_SendGoal_Response__Sequence * array);

/// Initialize action/ChargeRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__action__ChargeRobot_GetResult_Request
 * )) before or use
 * messages_package__action__ChargeRobot_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_GetResult_Request__init(messages_package__action__ChargeRobot_GetResult_Request * msg);

/// Finalize action/ChargeRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_GetResult_Request__fini(messages_package__action__ChargeRobot_GetResult_Request * msg);

/// Create action/ChargeRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__action__ChargeRobot_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_GetResult_Request *
messages_package__action__ChargeRobot_GetResult_Request__create();

/// Destroy action/ChargeRobot message.
/**
 * It calls
 * messages_package__action__ChargeRobot_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_GetResult_Request__destroy(messages_package__action__ChargeRobot_GetResult_Request * msg);


/// Initialize array of action/ChargeRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__action__ChargeRobot_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_GetResult_Request__Sequence__init(messages_package__action__ChargeRobot_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_GetResult_Request__Sequence__fini(messages_package__action__ChargeRobot_GetResult_Request__Sequence * array);

/// Create array of action/ChargeRobot messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__action__ChargeRobot_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_GetResult_Request__Sequence *
messages_package__action__ChargeRobot_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_GetResult_Request__Sequence__destroy(messages_package__action__ChargeRobot_GetResult_Request__Sequence * array);

/// Initialize action/ChargeRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__action__ChargeRobot_GetResult_Response
 * )) before or use
 * messages_package__action__ChargeRobot_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_GetResult_Response__init(messages_package__action__ChargeRobot_GetResult_Response * msg);

/// Finalize action/ChargeRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_GetResult_Response__fini(messages_package__action__ChargeRobot_GetResult_Response * msg);

/// Create action/ChargeRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__action__ChargeRobot_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_GetResult_Response *
messages_package__action__ChargeRobot_GetResult_Response__create();

/// Destroy action/ChargeRobot message.
/**
 * It calls
 * messages_package__action__ChargeRobot_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_GetResult_Response__destroy(messages_package__action__ChargeRobot_GetResult_Response * msg);


/// Initialize array of action/ChargeRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__action__ChargeRobot_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_GetResult_Response__Sequence__init(messages_package__action__ChargeRobot_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_GetResult_Response__Sequence__fini(messages_package__action__ChargeRobot_GetResult_Response__Sequence * array);

/// Create array of action/ChargeRobot messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__action__ChargeRobot_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_GetResult_Response__Sequence *
messages_package__action__ChargeRobot_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_GetResult_Response__Sequence__destroy(messages_package__action__ChargeRobot_GetResult_Response__Sequence * array);

/// Initialize action/ChargeRobot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * messages_package__action__ChargeRobot_FeedbackMessage
 * )) before or use
 * messages_package__action__ChargeRobot_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_FeedbackMessage__init(messages_package__action__ChargeRobot_FeedbackMessage * msg);

/// Finalize action/ChargeRobot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_FeedbackMessage__fini(messages_package__action__ChargeRobot_FeedbackMessage * msg);

/// Create action/ChargeRobot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * messages_package__action__ChargeRobot_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_FeedbackMessage *
messages_package__action__ChargeRobot_FeedbackMessage__create();

/// Destroy action/ChargeRobot message.
/**
 * It calls
 * messages_package__action__ChargeRobot_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_FeedbackMessage__destroy(messages_package__action__ChargeRobot_FeedbackMessage * msg);


/// Initialize array of action/ChargeRobot messages.
/**
 * It allocates the memory for the number of elements and calls
 * messages_package__action__ChargeRobot_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
bool
messages_package__action__ChargeRobot_FeedbackMessage__Sequence__init(messages_package__action__ChargeRobot_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_FeedbackMessage__Sequence__fini(messages_package__action__ChargeRobot_FeedbackMessage__Sequence * array);

/// Create array of action/ChargeRobot messages.
/**
 * It allocates the memory for the array and calls
 * messages_package__action__ChargeRobot_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
messages_package__action__ChargeRobot_FeedbackMessage__Sequence *
messages_package__action__ChargeRobot_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ChargeRobot messages.
/**
 * It calls
 * messages_package__action__ChargeRobot_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_messages_package
void
messages_package__action__ChargeRobot_FeedbackMessage__Sequence__destroy(messages_package__action__ChargeRobot_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGES_PACKAGE__ACTION__DETAIL__CHARGE_ROBOT__FUNCTIONS_H_
