FROM ros:humble

WORKDIR /workspace

RUN apt-get update && apt-get install -y python3-rosinstall

WORKDIR /workspace/src
RUN colcon build --symlink-install --packages-select ros2_subscriber

ENV ROS_DOMAIN_ID 10
ENV ROS_HOSTNAME ros2

CMD ["ros2", "daemon", "start"]
