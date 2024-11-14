#include <rclcpp/rclcpp.hpp>
#include <robot_base/msg/projectile_message.hpp>
#include <cmath>

class ProjectileMotion : public rclcpp::Node
{
public:
    ProjectileMotion() : Node("projectile_motion")
    {
        RCLCPP_INFO(this->get_logger(), "Node Started");
        // Initialize Subscriber and Publisher
        shooting_data = this->create_subscription<robot_base::msg::ProjectileMessage>(
            "/shooting_data_", 10, std::bind(&ProjectileMotion::shooting_callback, this, std::placeholders::_1));
        // timer_ = this->create_wall_timer(std::chrono::milliseconds(50), std::bind(&ProjectileMotion::computeShooting, this));
    }

private:
    void shooting_callback(const robot_base::msg::ProjectileMessage::SharedPtr msg)
    {
        robot_dist = msg->robotdistance;
        robot_angle = msg->robotangle;
        goal_dist = msg->goaldistance;
        goal_angle = msg->goalangle;
        // Debug
        // RCLCPP_INFO(this->get_logger(), "Datat -> robot_dist = %.2f, robot_angle = %.2f, goal_dist = %.2f, goal_angle = %.2f", robot_dist, robot_angle, goal_dist, goal_angle);
        computeShooting();
    }
    void computeShooting()
    {

        // Calculate Velocity of the ball to robot
        ball_velocity = std::sqrt((gravity * pow(robot_dist, 2)) / (robot_dist - (robot_h - gun_h)));
        // Calculate Velocity of the ball to goal
        ball_velocity_ = std::sqrt((gravity * pow(goal_dist, 2)) / (goal_dist - (goal_h - gun_h)));
        // Debug
        RCLCPP_INFO(this->get_logger(), "Robot -> Vo = %.2f  m/s", ball_velocity);
        RCLCPP_WARN(this->get_logger(), "Goal -> Vo = %.2f m/s", ball_velocity_);
    }

    /*------- Globle Variable -------*/
    double robot_dist, goal_dist, robot_angle, goal_angle;
    double gun_h = 0.2;    // High of Gun
    double robot_h = 0.2;  // High of Robot
    double goal_h = 2.43;  // High of Goal = 2.43 m
    double gravity = 9.8;  // gravity = 9.8 m/s^2
    double ball_velocity;  // shooting to robot
    double ball_velocity_; // shooting to goal

    rclcpp::Subscription<robot_base::msg::ProjectileMessage>::SharedPtr shooting_data;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ProjectileMotion>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}