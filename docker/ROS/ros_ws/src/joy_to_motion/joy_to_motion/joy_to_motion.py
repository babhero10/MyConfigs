import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import Int8

class JoyToMotionNode(Node):
    def __init__(self):
        super().__init__('joy_to_motion_node')
        
        # Create a publisher to send motion data (Int8)
        self.motion_publisher = self.create_publisher(Int8, 'motion', 10)
        
        # Create a subscription to the joystick (joy) data
        self.joy_subscription = self.create_subscription(
            Joy,
            'joy',
            self.joy_callback,
            10
        )

    def joy_callback(self, msg: Joy):
        motion_msg = Int8()

        # Check for button presses or joystick directions (use the axis values or buttons)
        if msg.axes[1] > 0.5:  # Joystick moved up
            motion_msg.data = 1
        elif msg.axes[1] < -0.5:  # Joystick moved down
            motion_msg.data = 2
        elif msg.axes[0] > 0.5:  # Joystick moved right
            motion_msg.data = 3
        elif msg.axes[0] < -0.5:  # Joystick moved left
            motion_msg.data = 4
        else:  # Any other state
            motion_msg.data = 0
        
        # Publish the motion message
        self.motion_publisher.publish(motion_msg)
        self.get_logger().info(f"Published motion value: {motion_msg.data}")

def main(args=None):
    rclpy.init(args=args)
    joy_to_motion_node = JoyToMotionNode()
    
    # Spin the node to keep it active and listening to the joy topic
    rclpy.spin(joy_to_motion_node)
    
    joy_to_motion_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

