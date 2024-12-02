#include <ros/ros.h>
#include "ros1_ros2_bridge/MyMessage.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "publisher");
  ros::NodeHandle nh;
  ros::Publisher pub = nh.advertise<ros1_ros2_bridge::MyMessage>("my_topic", 10);

  ros1_ros2_bridge::MyMessage msg;
  ros::Rate loop_rate(1);

  while (ros::ok()) {
    msg.data = 10; //increment
    pub.publish(msg);
    ROS_INFO("Published: %d", msg.data);
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
