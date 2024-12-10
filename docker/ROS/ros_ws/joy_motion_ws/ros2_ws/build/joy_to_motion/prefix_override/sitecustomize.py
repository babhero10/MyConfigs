import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/ros_ws/joy_motion_ws/ros2_ws/install/joy_to_motion'
