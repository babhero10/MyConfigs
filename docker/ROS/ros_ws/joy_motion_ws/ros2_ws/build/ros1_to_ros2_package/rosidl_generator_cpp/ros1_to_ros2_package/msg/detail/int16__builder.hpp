// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros1_to_ros2_package:msg/Int16.idl
// generated code does not contain a copyright notice

#ifndef ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT16__BUILDER_HPP_
#define ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT16__BUILDER_HPP_

#include "ros1_to_ros2_package/msg/detail/int16__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros1_to_ros2_package
{

namespace msg
{

namespace builder
{

class Init_Int16_data
{
public:
  Init_Int16_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros1_to_ros2_package::msg::Int16 data(::ros1_to_ros2_package::msg::Int16::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros1_to_ros2_package::msg::Int16 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros1_to_ros2_package::msg::Int16>()
{
  return ros1_to_ros2_package::msg::builder::Init_Int16_data();
}

}  // namespace ros1_to_ros2_package

#endif  // ROS1_TO_ROS2_PACKAGE__MSG__DETAIL__INT16__BUILDER_HPP_
