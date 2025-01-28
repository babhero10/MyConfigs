// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ros1_to_ros2_package:msg/Int8.idl
// generated code does not contain a copyright notice

#ifndef ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT8__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT8__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros1_to_ros2_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ros1_to_ros2_package/msg/detail/int8__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ros1_to_ros2_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros1_to_ros2_package
cdr_serialize(
  const ros1_to_ros2_package::msg::Int8 & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros1_to_ros2_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros1_to_ros2_package::msg::Int8 & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros1_to_ros2_package
get_serialized_size(
  const ros1_to_ros2_package::msg::Int8 & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros1_to_ros2_package
max_serialized_size_Int8(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros1_to_ros2_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros1_to_ros2_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros1_to_ros2_package, msg, Int8)();

#ifdef __cplusplus
}
#endif

#endif  // ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT8__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
