import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/ros_ws/Aruco_tag_localization/install/turtlebot3_example'
