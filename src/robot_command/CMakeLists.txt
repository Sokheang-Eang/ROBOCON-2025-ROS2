cmake_minimum_required(VERSION 3.8)
project(robot_command)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)

add_executable(ps2_controller src/read_controller.cpp)

ament_target_dependencies(ps2_controller rclcpp sensor_msgs)

install(DIRECTORY
  launch DESTINATION
  share/${PROJECT_NAME})

install(TARGETS 
  ps2_controller 
  DESTINATION 
  lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
