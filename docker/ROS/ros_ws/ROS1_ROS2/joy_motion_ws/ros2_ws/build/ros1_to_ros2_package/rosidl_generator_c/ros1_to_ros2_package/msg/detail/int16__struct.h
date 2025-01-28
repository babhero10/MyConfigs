// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros1_to_ros2_package:msg/Int16.idl
// generated code does not contain a copyright notice

#ifndef ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT16__STRUCT_H_
#define ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT16__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Int16 in the package ros1_to_ros2_package.
typedef struct ros1_to_ros2_package__msg__Int16
{
  int16_t data;
} ros1_to_ros2_package__msg__Int16;

// Struct for a sequence of ros1_to_ros2_package__msg__Int16.
typedef struct ros1_to_ros2_package__msg__Int16__Sequence
{
  ros1_to_ros2_package__msg__Int16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros1_to_ros2_package__msg__Int16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT16__STRUCT_H_
