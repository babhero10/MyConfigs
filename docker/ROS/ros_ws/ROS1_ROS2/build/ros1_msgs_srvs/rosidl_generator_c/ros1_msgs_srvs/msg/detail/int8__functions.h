// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros1_msgs_srvs:msg/Int8.idl
// generated code does not contain a copyright notice

#ifndef ROS1_MSGS_SRVS__MSG__DETAIL__INT8__FUNCTIONS_H_
#define ROS1_MSGS_SRVS__MSG__DETAIL__INT8__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros1_msgs_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "ros1_msgs_srvs/msg/detail/int8__struct.h"

/// Initialize msg/Int8 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros1_msgs_srvs__msg__Int8
 * )) before or use
 * ros1_msgs_srvs__msg__Int8__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
bool
ros1_msgs_srvs__msg__Int8__init(ros1_msgs_srvs__msg__Int8 * msg);

/// Finalize msg/Int8 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
void
ros1_msgs_srvs__msg__Int8__fini(ros1_msgs_srvs__msg__Int8 * msg);

/// Create msg/Int8 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros1_msgs_srvs__msg__Int8__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
ros1_msgs_srvs__msg__Int8 *
ros1_msgs_srvs__msg__Int8__create();

/// Destroy msg/Int8 message.
/**
 * It calls
 * ros1_msgs_srvs__msg__Int8__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
void
ros1_msgs_srvs__msg__Int8__destroy(ros1_msgs_srvs__msg__Int8 * msg);

/// Check for msg/Int8 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
bool
ros1_msgs_srvs__msg__Int8__are_equal(const ros1_msgs_srvs__msg__Int8 * lhs, const ros1_msgs_srvs__msg__Int8 * rhs);

/// Copy a msg/Int8 message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
bool
ros1_msgs_srvs__msg__Int8__copy(
  const ros1_msgs_srvs__msg__Int8 * input,
  ros1_msgs_srvs__msg__Int8 * output);

/// Initialize array of msg/Int8 messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros1_msgs_srvs__msg__Int8__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
bool
ros1_msgs_srvs__msg__Int8__Sequence__init(ros1_msgs_srvs__msg__Int8__Sequence * array, size_t size);

/// Finalize array of msg/Int8 messages.
/**
 * It calls
 * ros1_msgs_srvs__msg__Int8__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
void
ros1_msgs_srvs__msg__Int8__Sequence__fini(ros1_msgs_srvs__msg__Int8__Sequence * array);

/// Create array of msg/Int8 messages.
/**
 * It allocates the memory for the array and calls
 * ros1_msgs_srvs__msg__Int8__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
ros1_msgs_srvs__msg__Int8__Sequence *
ros1_msgs_srvs__msg__Int8__Sequence__create(size_t size);

/// Destroy array of msg/Int8 messages.
/**
 * It calls
 * ros1_msgs_srvs__msg__Int8__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
void
ros1_msgs_srvs__msg__Int8__Sequence__destroy(ros1_msgs_srvs__msg__Int8__Sequence * array);

/// Check for msg/Int8 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
bool
ros1_msgs_srvs__msg__Int8__Sequence__are_equal(const ros1_msgs_srvs__msg__Int8__Sequence * lhs, const ros1_msgs_srvs__msg__Int8__Sequence * rhs);

/// Copy an array of msg/Int8 messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros1_msgs_srvs
bool
ros1_msgs_srvs__msg__Int8__Sequence__copy(
  const ros1_msgs_srvs__msg__Int8__Sequence * input,
  ros1_msgs_srvs__msg__Int8__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS1_MSGS_SRVS__MSG__DETAIL__INT8__FUNCTIONS_H_
