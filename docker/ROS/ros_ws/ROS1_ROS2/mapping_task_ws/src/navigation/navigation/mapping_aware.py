import rclpy
from rclpy.node import Node
from nav_msgs.msg import OccupancyGrid, Odometry
import numpy as np

from rclpy.qos import QoSProfile, DurabilityPolicy


# Define a QoS profile for transient local subscriptions
qos_profile = QoSProfile(
    depth=5,
    durability=DurabilityPolicy.TRANSIENT_LOCAL
)


class MapAnalyzer(Node):
    def __init__(self, n_blocks):
        """
        Initializes the MapAnalyzer class.

        Args:
        n_blocks (int): The size of the square region (N x N) around the rover to check for obstacles.
        """
        super().__init__("map_analyzer")  # Initialize the ROS2 node
        self.n_blocks = n_blocks  # Size of the square region to analyze
        self.map_data = None  # Placeholder for map data (occupancy grid)
        self.map_resolution = None  # Resolution of the map (meters per cell)
        self.map_origin = None  # Origin of the map (world coordinates)
        self.rover_position = None  # Current rover position (world coordinates)

        # Create subscribers for /map and /odom topics
        self.create_subscription(OccupancyGrid, "/map", self.map_callback, qos_profile)
        self.create_subscription(Odometry, "/odom", self.odom_callback, 10)

        self.get_logger().info("MapAnalyzer node initialized")

    def map_callback(self, msg):
        """
        Callback function for /map topic.

        Args:
        msg (OccupancyGrid): The occupancy grid message containing the map.
        """
        # Convert the flat map data into a 2D numpy array for easier processing
        self.map_data = np.array(msg.data).reshape(msg.info.height, msg.info.width)

        # Store the map resolution (meters per grid cell)
        self.map_resolution = msg.info.resolution

        # Store the map's origin (bottom-left corner in world coordinates)
        self.map_origin = (msg.info.origin.position.x, msg.info.origin.position.y)

        self.get_logger().info("Map data updated")

    def odom_callback(self, msg):
        """
        Callback function for /odom topic.

        Args:
        msg (Odometry): The odometry message containing the rover's position.
        """
        # Extract the rover's current position in world coordinates
        self.rover_position = (msg.pose.pose.position.x, msg.pose.pose.position.y)

    def check_obstacles(self):
        """
        Checks for obstacles in the N x N region around the rover.

        Returns:
        bool: True if obstacles are detected, False otherwise. None if map or position data is unavailable.
        """
        # Ensure that map data has been received
        if self.map_data is None:
            self.get_logger().warn("Map data not received yet.")
            return None

        # Ensure that the rover's position has been received
        if self.rover_position is None:
            self.get_logger().warn("Rover position not received yet.")
            return None

        # Convert the rover's position from world coordinates to grid coordinates
        grid_x = int((self.rover_position[0] - self.map_origin[0]) / self.map_resolution)
        grid_y = int((self.rover_position[1] - self.map_origin[1]) / self.map_resolution)

        # Calculate the bounds of the N x N square region
        half_n = self.n_blocks // 2
        x_min = max(0, grid_x - half_n)  # Ensure the bounds don't go out of the map
        x_max = min(self.map_data.shape[1], grid_x + half_n + 1)
        y_min = max(0, grid_y - half_n)  # Ensure the bounds don't go out of the map
        y_max = min(self.map_data.shape[0], grid_y + half_n + 1)

        # Extract the N x N region around the rover
        region = self.map_data[y_min:y_max, x_min:x_max]

        # Count the number of cells with occupancy values > 50 (indicating obstacles)
        obstacle_cells = np.count_nonzero(region > 50)

        # Log the result and return True if obstacles are found, False otherwise
        if obstacle_cells > 0:
            self.get_logger().info(f"Obstacles detected in {obstacle_cells} cells around the rover.")
            print(f"Obstacles detected in {obstacle_cells} cells around the rover.")
            return True
        else:
            print("No obstacles detected around the rover.")
            return False


def main(args=None):
    rclpy.init(args=args)  # Initialize the ROS2 system

    # Define the size of the square region (e.g., 15 x 15 blocks)
    n_blocks = 15

    # Create an instance of the MapAnalyzer class
    analyzer = MapAnalyzer(n_blocks)

    # Define the loop rate (1 Hz = check for obstacles once per second)
    rate = analyzer.create_rate(1)

    try:
        while rclpy.ok():
            rclpy.spin_once(analyzer)
            if analyzer.check_obstacles() is not None:
                pass  # Add any action here based on obstacle detection
            # rate.sleep()
    except KeyboardInterrupt:
        analyzer.get_logger().info("MapAnalyzer node shutting down.")
    finally:
        analyzer.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
