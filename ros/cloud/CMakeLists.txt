################################################################################
# CMake
################################################################################
cmake_minimum_required(VERSION 2.8.3)
project(spacesuit_cloud)

################################################################################
# Packages
################################################################################
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  sensor_msgs
  geometry_msgs
)
find_package(PkgConfig)
# Run catkin Python setup
catkin_python_setup()

################################################################################
# Declare ROS messages, services and actions
################################################################################

################################################################################
# Declare ROS dynamic reconfigure parameters
################################################################################

################################################################################
# Catkin specific configuration
################################################################################
catkin_package(
  CATKIN_DEPENDS rospy roscpp std_msgs geometry_msgs sensor_msgs
)

add_compile_options(-std=c++11)
include_directories(include ${catkin_INCLUDE_DIRS})

# target_link_libraries(${catkin_LIBRARIES})
add_dependencies(${catkin_EXPORTED_TARGETS})
################################################################################
# Build
################################################################################

################################################################################
# Install
################################################################################
catkin_install_python(PROGRAMS bin/spacesuit_data_storage
                      DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

catkin_install_python(PROGRAMS bin/spacesuit_data_collector
                      DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(DIRECTORY launch
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

install(DIRECTORY params
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

install(DIRECTORY scripts
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
        USE_SOURCE_PERMISSIONS)

################################################################################
# Test
################################################################################
