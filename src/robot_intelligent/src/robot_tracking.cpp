#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose2_d.hpp>
#include <robot_base/msg/projectile_message.hpp>
#include <cmath>

class RobotTracking : public rclcpp::Node
{
public:
    RobotTracking() : Node("tracking_robot")
    {
        RCLCPP_INFO(this->get_logger(), "Node Started");

        // Initialize Subscriber and Publisher
        odom_robot_i_ = this->create_subscription<geometry_msgs::msg::Pose2D>(
            "position_robot", 10, std::bind(&RobotTracking::pose_callback, this, std::placeholders::_1));

        odom_robot_ii_ = this->create_subscription<geometry_msgs::msg::Pose2D>(
            "/odom/robot_ii", 10, std::bind(&RobotTracking::pose_callback_, this, std::placeholders::_1));

        shooting_data_ = this->create_publisher<robot_base::msg::ProjectileMessage>("/shooting_data_", 10);

        timer_ = this->create_wall_timer(std::chrono::milliseconds(50), std::bind(&RobotTracking::computeTracking, this));

        /*--------- const goal point need to change --------------*/
        goal_x = 3.00, goal_y = 9.6;
        pos_x_ = 0.00; pos_y_ = 8.00;
    }

private:
    void pose_callback(const geometry_msgs::msg::Pose2D::SharedPtr msg)
    {
        // robot 1 pose
        pos_x = msg->x;
        pos_y = msg->y;
        theta = msg->theta;
        // Debug
        // RCLCPP_INFO(this->get_logger(), "robot_i_pose -> x = %.2f, y = %.2f, theta = %.2f", pos_x, pos_y, theta);
        // computeTracking(); // Simulation
    }
    void pose_callback_(const geometry_msgs::msg::Pose2D::SharedPtr msg)
    {
        // robot 2 pose
        pos_x_ = msg->x;
        pos_y_ = msg->y;
        theta_ = msg->theta;
        // Debug
        // RCLCPP_WARN(this->get_logger(), "robot_ii_pose -> x = %.2f, y = %.2f, theta = %.2f", pos_x_, pos_y_, theta_);
        // computeTracking(); // Simulation
    }
    void computeTracking()
    {

        /*--------- Robot Tracking ----------*/
        // Calculate errors in position robot
        double error_x = pos_x - pos_x_;
        double error_y = pos_y - pos_y_;

        // Calculate distance and angle robot
        double distance = std::sqrt(pow(error_x, 2) + pow(error_y, 2));
        double angle = std::atan2(error_y, error_x);
        double angle2target = normalizeAngle(angle) * (180 / M_PI);

        /*--------- Goal Tracking ----------*/
        // Calculate errors in position goal
        double error_x_ = pos_x - goal_x;
        double error_y_ = pos_y - goal_y;

        // Calculate distance and angle goal
        double distance_ = std::sqrt(pow(error_x_, 2) + pow(error_y_, 2));
        double angle_ = std::atan2(error_y_, error_x_);
        double angle2target_ = normalizeAngle(angle_) * (180 / M_PI);

        // access data
        // Get topic
        robot_base::msg::ProjectileMessage shooting_;
        shooting_.goaldistance = distance_;
        shooting_.goalangle = angle2target_;
        shooting_.robotdistance = distance;
        shooting_.robotangle = angle2target;
        // publish
        shooting_data_->publish(shooting_);

        // Debug Robot
        RCLCPP_INFO(this->get_logger(), "robot -> Distance = %.2f, Angle = %.2f", distance, angle2target);
        // Debug Goal
        RCLCPP_WARN(this->get_logger(), "goal -> Distance = %.2f, Angle = %.2f", distance_, angle2target_);
    }
    double normalizeAngle(double angle)
    {
        while (angle > M_PI)
            angle -= 2 * M_PI;
        while (angle < -M_PI)
            angle += 2 * M_PI;
        return angle;
    }
    /*------- Globle Variable -------*/
    // robot 1
    double pos_x, pos_y, theta;
    // robot 2
    double pos_x_, pos_y_, theta_;
    // goal
    double goal_x, goal_y;

    rclcpp::Subscription<geometry_msgs::msg::Pose2D>::SharedPtr odom_robot_i_;
    rclcpp::Subscription<geometry_msgs::msg::Pose2D>::SharedPtr odom_robot_ii_;
    rclcpp::Publisher<robot_base::msg::ProjectileMessage>::SharedPtr shooting_data_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotTracking>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}