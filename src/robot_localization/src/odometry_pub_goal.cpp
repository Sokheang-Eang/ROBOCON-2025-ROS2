#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "geometry_msgs/msg/pose2_d.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"

class OdometryPublisher : public rclcpp::Node
{
public:
    OdometryPublisher() : Node("odom_robot_ii")
    {
        RCLCPP_INFO(this->get_logger(), "Node Started");
        // Initialize last_time_ to current ROS2 time
        last_time_ = this->now();
        //
        odom_pub_ = this->create_publisher<nav_msgs::msg::Odometry>("goal/pos", 10);
        // Transform broadcaster
        tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
        // Timer for periodic publishing
        timer_ = this->create_wall_timer(std::chrono::milliseconds(20), std::bind(&OdometryPublisher::publish, this));
        // Initialize variables
        last_x = 0.00, last_y = 0.00, last_theta = 0.00;
    }

private:
    void publish()
    {
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


        // Publish the transform
        geometry_msgs::msg::TransformStamped odom_trans;
        odom_trans.header.stamp = current_time;
        odom_trans.header.frame_id = "odom";
        odom_trans.child_frame_id = "goal";
        odom_trans.transform.translation.x = current_x;
        odom_trans.transform.translation.y = current_y;
        odom_trans.transform.translation.z = 0.0;
        tf2::Quaternion quat;
        quat.setRPY(0, 0, current_theta);
        odom_trans.transform.rotation.x = quat.x();
        odom_trans.transform.rotation.y = quat.y();
        odom_trans.transform.rotation.z = quat.z();
        odom_trans.transform.rotation.w = quat.w();
        tf_broadcaster_->sendTransform(odom_trans);

        // Publish the odometry message
        nav_msgs::msg::Odometry odom;
        odom.header.stamp = current_time;
        odom.header.frame_id = "odom";
        odom.child_frame_id = "goal";
        odom.pose.pose.position.x = current_x;
        odom.pose.pose.position.y = current_y;
        odom.pose.pose.position.z = 0.0;
        odom.pose.pose.orientation = odom_trans.transform.rotation;
        odom.twist.twist.linear.x = vx_;
        odom.twist.twist.linear.y = vy_;
        odom.twist.twist.angular.z = vtheta_;
        odom_pub_->publish(odom);
        // Update
        last_time_ = current_time;
        last_x = current_x;
        last_y = current_y;
        last_theta = current_theta;
    }

    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Time last_time_;

    // Globle Variable
    double current_x = 10.90, current_y = -3.73, current_theta;
    double last_x, last_y, last_theta;
    double vx_, vy_, vtheta_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<OdometryPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}