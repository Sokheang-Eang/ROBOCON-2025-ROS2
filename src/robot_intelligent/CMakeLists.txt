cmake_minimum_required(VERSION 3.8)
project(robot_intelligent)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(robot_base REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(robot_tracking src/robot_tracking.cpp)
ament_target_dependencies(robot_tracking rclcpp geometry_msgs robot_base)

add_executable(shooting src/projectile_motion.cpp)
ament_target_dependencies(shooting rclcpp robot_base)

install(TARGETS
  robot_tracking
  shooting
  DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()
ament_package()