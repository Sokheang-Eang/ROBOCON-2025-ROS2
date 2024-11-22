#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <geometry_msgs/msg/twist.hpp>

class JoyReader : public rclcpp::Node
{
public:
    JoyReader()
        : Node("joy_reader")
    {
        joy_subscription_ = this->create_subscription<sensor_msgs::msg::Joy>(
            "/joy", 10,
            std::bind(&JoyReader::joy_callback, this, std::placeholders::_1));

        speed2robot = this->create_publisher<geometry_msgs::msg::Twist>("speed/robot", 10);

        _non_holonomic = this->create_publisher<geometry_msgs::msg::Twist>("speed/non_holonomic", 10);

        _holonomic = this->create_publisher<geometry_msgs::msg::Twist>("speed/holonomic", 10);

        RCLCPP_INFO(this->get_logger(), "JoyReader node has started.");
    }

private:
    void joy_callback(const sensor_msgs::msg::Joy::SharedPtr msg)
    {
        // RCLCPP_INFO(this->get_logger(), "Axes: [%.2f, %.2f]", msg->axes[1], msg->axes[3]);
        // 2wd robot
        holonomic_robot(msg->axes[1], msg->axes[0], msg->axes[3]);
        // 4wd robot
        non_holonomic_robot(msg->axes[1], msg->axes[3]);
        
        joy_robot(msg->axes[1], msg->axes[2]);
    }
    void holonomic_robot(double speed_x, double speed_y, double speed_theta)
    {
        geometry_msgs::msg::Twist robot_holonomic;
        robot_holonomic.linear.x = speed_x / 5000;
        robot_holonomic.linear.y = speed_y / 5000;
        robot_holonomic.angular.z = speed_theta / 5000;
        _holonomic->publish(robot_holonomic);
    }
    void non_holonomic_robot(double _linear, double _angular)
    {
        geometry_msgs::msg::Twist robot_non_holonomic;
        robot_non_holonomic.linear.x = _linear / 1000.00;
        robot_non_holonomic.angular.z = _angular / 5000.00;
        _non_holonomic->publish(robot_non_holonomic);
    }
    void joy_robot(double linear_x, double linear_y)
    {
        geometry_msgs::msg::Twist robot;
        robot.linear.x = linear_x;
        robot.linear.y = linear_y;
        speed2robot->publish(robot);
    }
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr joy_subscription_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr _non_holonomic;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr _holonomic;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr speed2robot;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JoyReader>());
    rclcpp::shutdown();
    return 0;
}