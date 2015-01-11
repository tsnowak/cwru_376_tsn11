cmake_minimum_required(VERSION 2.8.3)
project(example_package)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  
)


catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES example_package
#  CATKIN_DEPENDS roscpp std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

include_directories(
  ${catkin_INCLUDE_DIRS}
)

## Declare a cpp executable
add_executable(example_publisher src/example_publisher.cpp)


## Specify libraries to link a library or executable target against
target_link_libraries(example_publisher
   ${catkin_LIBRARIES}
)

