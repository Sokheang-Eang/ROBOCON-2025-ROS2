cmake_minimum_required(VERSION 3.8)
project(robot_localization)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(odometry_robot_i src/odometry_publisher_i.cpp)
add_executable(odometry_robot_ii src/odometry_publisher_ii.cpp)
add_executable(odometry_pub_goal src/odometry_pub_goal.cpp)

ament_target_dependencies(odometry_robot_i rclcpp geometry_msgs nav_msgs tf2 tf2_ros tf2_geometry_msgs)
ament_target_dependencies(odometry_robot_ii rclcpp geometry_msgs nav_msgs tf2 tf2_ros tf2_geometry_msgs)
ament_target_dependencies(odometry_pub_goal rclcpp geometry_msgs nav_msgs tf2 tf2_ros tf2_geometry_msgs)

install(TARGETS
  odometry_robot_i
  odometry_robot_ii
  odometry_pub_goal
  DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()