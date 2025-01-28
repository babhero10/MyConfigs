// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros1_msgs_srvs:msg/Int16.idl
// generated code does not contain a copyright notice

#ifndef ROS1_MSGS_SRVS__MSG__DETAIL__INT16__TRAITS_HPP_
#define ROS1_MSGS_SRVS__MSG__DETAIL__INT16__TRAITS_HPP_

#include "ros1_msgs_srvs/msg/detail/int16__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros1_msgs_srvs::msg::Int16>()
{
  return "ros1_msgs_srvs::msg::Int16";
}

template<>
inline const char * name<ros1_msgs_srvs::msg::Int16>()
{
  return "ros1_msgs_srvs/msg/Int16";
}

template<>
struct has_fixed_size<ros1_msgs_srvs::msg::Int16>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros1_msgs_srvs::msg::Int16>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros1_msgs_srvs::msg::Int16>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS1_MSGS_SRVS__MSG__DETAIL__INT16__TRAITS_HPP_
