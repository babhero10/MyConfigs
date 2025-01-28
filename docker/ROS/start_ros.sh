#!/bin/bash

# Source ROS1 Noetic environment
# source /opt/ros/noetic/setup.bash

# Start roscore in the background
# roscore &

# Wait a few seconds to ensure roscore is fully started
# sleep 2

# Source ROS2 Foxy environment
# source /opt/ros/foxy/setup.bash

# Run the ros1_bridge with specific topics
# ros2 run ros1_bridge static_bridge \
#   --bridge-all-topics false \
#   --topic "/motion@std_msgs/msg/Int16[ros1]" \
#   --topic "/ticks@std_msgs/msg/Int16[ros1]"

# ros2 run ros1_bridge dynamic_bridge --bridge-all-topics

# Keep the container running
tail -f /dev/null

