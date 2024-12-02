#include <rclcpp/rclcpp.hpp>
#include "ros1_ros2_bridge/MyMessage.hpp" //This is important!

using namespace std::chrono_literals;

class Subscriber : public rclcpp::Node
{
public:
  Subscriber() : Node("subscriber") {
    subscription_ = this->create_subscription<ros1_ros2_bridge::MyMessage>(
      "my_topic", 10, std::bind(&Subscriber::topic_callback, this, std::placeholders::_1));
  }

private:
  void topic_callback(const ros1_ros2_bridge::MyMessage::SharedPtr msg) const {
    RCLCPP_INFO(this->get_logger(), "Received: %d", msg->data);
  }
  rclcpp::Subscription<ros1_ros2_bridge::MyMessage>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Subscriber>());
  rclcpp::shutdown();
  return 0;
}
