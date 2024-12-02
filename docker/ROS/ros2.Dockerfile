FROM ros:foxy

# Install ROS 2 demo nodes
RUN apt-get update && apt-get install -y \
      ros-${ROS_DISTRO}-demo-nodes-cpp \
      ros-${ROS_DISTRO}-demo-nodes-py && \
    rm -rf /var/lib/apt/lists/*

# Set environment variables for ROS 2
ENV ROS_DOMAIN_ID=1
ENV ROS_VERSION=2
ENV ROS_PYTHON_VERSION=3

# Launch the ROS 2 talker_listener demo (modified for simplicity)
CMD ["ros2", "run", "demo_nodes_cpp", "talker"]
