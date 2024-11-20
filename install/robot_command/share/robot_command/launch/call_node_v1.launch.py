from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    
    odom_i = Node(
        package = 'robot_localization',
        executable = 'odometry_robot_i',
        output = 'screen' 
    )
    odom_ii = Node(
        package = 'robot_localization',
        executable = 'odometry_robot_ii',
        output = 'screen' 
    )
    goal = Node(
        package = 'robot_localization',
        executable = 'odometry_pub_goal',
        output = 'screen' 
    )
    robot_tracking = Node(
        package = 'robot_intelligent',
        executable = 'robot_tracking',
        output = 'screen'
    )
    shooting_ball = Node(
        package = 'robot_intelligent',
        executable = 'shooting',
        output = 'screen'
    )
    micro_ros = Node(
        package = 'micro_ros_agent',
        executable = 'micro_ros_agent',
        name = 'micro_ros_agent',
        output = 'screen',
        parameters=[{'serial_port': '/dev/ttyACM0','baudrate': 115200}],
        arguments=['serial','--dev', '/dev/ttyACM0']
    )
    ld = LaunchDescription()
    ld.add_action(odom_i)
    ld.add_action(odom_ii)
    ld.add_action(robot_tracking)
    ld.add_action(shooting_ball)
    ld.add_action(goal)
    ld.add_action(micro_ros)
    
    return ld