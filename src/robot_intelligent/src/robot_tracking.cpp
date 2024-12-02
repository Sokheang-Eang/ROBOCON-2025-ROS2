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
        last_time_ = this->now();
        // Initialize Subscriber and Publisher
        odom_robot_i_ = this->create_subscription<geometry_msgs::msg::Pose2D>(
            "position_robot/odom", 10, std::bind(&RobotTracking::pose_callback, this, std::placeholders::_1));
        // -----------------------------------
        odom_robot_ii_ = this->create_subscription<geometry_msgs::msg::Pose2D>(
            "position_robot/pos", 10, std::bind(&RobotTracking::pose_callback_, this, std::placeholders::_1));
        // -----------------------------------
        shooting_data_ = this->create_publisher<robot_base::msg::ProjectileMessage>("/shooting_data_", 10);
        //------------------------------------
        timer_ = this->create_wall_timer(std::chrono::milliseconds(20), std::bind(&RobotTracking::computeTracking, this));
        /*--------- const goal point need to change --------------*/
        goal_x = 10.90, goal_y = -3.73;
        pos_x_ = 0.00;
        pos_y_ = 0.00;
    }

private:
    void pose_callback(const geometry_msgs::msg::Pose2D::SharedPtr msg)
    {
        // robot 1 pose
        current_x = msg->x;
        current_y = msg->y;
        current_theta = msg->theta;
        // RCLCPP_INFO(this->get_logger(), "R1 -> x = %.2f, y = %.2f, theta = %.2f", pos_x, pos_y, theta);
    }
    void pose_callback_(const geometry_msgs::msg::Pose2D::SharedPtr msg)
    {
        // robot 2 pose
        current_x_ = msg->x;
        current_y_ = msg->y;
        current_theta_ = msg->theta;
        // RCLCPP_WARN(this->get_logger(), "R2 -> x = %.2f, y = %.2f, theta = %.2f", pos_x_, pos_y_, theta_);
    }
    void computeTracking()
    {
        /*--------- Robot Tracking ----------*/
        // Get current time
        auto current_time = this->now();
        // Compute time difference
        double dt = (current_time - last_time_).seconds();
        // Compute delta pose
        double delta_x = current_x - last_x;
        double delta_y = current_y - last_y;
        double delta_theta = current_theta - last_theta;
        // Compute Velocity
        vx_ = delta_x / dt;
        vy_ = delta_y / dt;
        vtheta_ = delta_theta / dt;
        // Compute Localization
        double linear_x = vx_ * cos(current_theta) - vy_ * sin(current_theta);
        double linear_y = vx_ * sin(current_theta) + vy_ * cos(current_theta);
        // Compute pos in coordinate frame
        pos_x += linear_x * dt;
        pos_y += linear_y * dt;
        // --------------------------------
        double error_x = pos_x - current_x_;
        double error_y = pos_y - current_y_;
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

        // RCLCPP_INFO(this->get_logger(), "robot -> Distance = %.2f, Angle = %.2f", distance, angle2target);
        // Debug Goal
        // RCLCPP_WARN(this->get_logger(), "goal -> Distance = %.2f, Angle = %.2f", distance_, angle2target_);
                // Update
        last_time_ = current_time;
        last_x = current_x;
        last_y = current_y;
        last_theta = current_theta;
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
    //
    double current_x, current_y, current_theta;
    double current_x_, current_y_, current_theta_;
    double last_x, last_y, last_theta;
    double vx_, vy_, vtheta_;
    //
    rclcpp::Subscription<geometry_msgs::msg::Pose2D>::SharedPtr odom_robot_i_;
    rclcpp::Subscription<geometry_msgs::msg::Pose2D>::SharedPtr odom_robot_ii_;
    rclcpp::Publisher<robot_base::msg::ProjectileMessage>::SharedPtr shooting_data_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Time last_time_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotTracking>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}