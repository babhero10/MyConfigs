#!/bin/bash

# Source ROS1 Noetic environment
source /opt/ros/noetic/setup.bash

# Start roscore in the background
roscore &

# Keep the container running
tail -f /dev/null

