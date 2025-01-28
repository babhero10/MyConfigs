// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros1_to_ros2_package:msg/Int8.idl
// generated code does not contain a copyright notice

#ifndef ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT8__TRAITS_HPP_
#define ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT8__TRAITS_HPP_

#include "ros1_to_ros2_package/msg/detail/int8__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros1_to_ros2_package::msg::Int8>()
{
  return "ros1_to_ros2_package::msg::Int8";
}

template<>
inline const char * name<ros1_to_ros2_package::msg::Int8>()
{
  return "ros1_to_ros2_package/msg/Int8";
}

template<>
struct has_fixed_size<ros1_to_ros2_package::msg::Int8>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros1_to_ros2_package::msg::Int8>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros1_to_ros2_package::msg::Int8>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT8__TRAITS_HPP_
