cmake_minimum_required(VERSION 3.10.2)
project(ros1_publisher)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

add_message_files(FILES
  MyMessage.msg
)

generate_messages(DEPENDENCIES
  std_msgs
)

add_executable(publisher src/publisher.cpp)
target_link_libraries(publisher ${catkin_LIBRARIES})
