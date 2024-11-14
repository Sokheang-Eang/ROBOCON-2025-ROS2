# ROBOCON Firmware
- Only for Technical
> [!TIP]
> run micro-ros
```
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyACM0
```
> [!TIP]
> run odometry_robot_i
```
ros2 run robot_localization odometry_robot_i
```
> [!TIP]
> run odometry_robot_ii
```
ros2 run robot_localization odometry_robot_ii
```
> [!TIP]
> run tracking model
```
ros2 run robot_intelligent robot_tracking
```
> [!TIP]
> run tracking model
```
ros2 run robot_intelligent shooting
```
> [!TIP]
> Call All Node
```
ros2 launch robot_command call_node_v1.launch.py 
```