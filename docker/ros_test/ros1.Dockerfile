FROM ros:noetic

WORKDIR /workspace

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y --no-install-recommends curl && \
    curl -fsSL https://www.google.com -o /dev/null && \
    apt-get install -y python3-rosinstall catkin_tools && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /workspace/src
RUN catkin_make_isolated --install --install-space /opt/ros/noetic

ENV ROS_MASTER_URI http://ros1:11311
ENV ROS_HOSTNAME ros1
ENV ROS_NAMESPACE /ros1

CMD ["roscore"]
