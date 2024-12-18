#!/usr/bin/env python3
import rospy
from std_msgs.msg import Int16


def talker():
    pub = rospy.Publisher('ticks', Int16, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown():
        msg = Int16()
        msg.data = 10
        rospy.loginfo(msg)
        pub.publish(msg)
        rate.sleep()


if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
