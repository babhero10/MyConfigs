cmake_minimum_required(VERSION 3.10.2)
project(ros2_subscriber)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(subscriber src/subscriber.cpp)
ament_target_dependencies(subscriber
  rclcpp
  std_msgs
  ros1_ros2_bridge) # Assuming you've built the message package
