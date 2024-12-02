 FROM ros:noetic

# Install ROS 1 tutorial packages
RUN apt-get update && apt-get install -y \
      ros-${ROS_DISTRO}-ros-tutorials \
      ros-${ROS_DISTRO}-common-tutorials && \
    rm -rf /var/lib/apt/lists/*

# Launch the ROS 1 listener node
CMD ["rosrun", "roscpp_tutorials", "listener"]
