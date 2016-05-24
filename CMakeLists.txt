cmake_minimum_required(VERSION 2.8.3)
project(node_example)

find_package(catkin REQUIRED COMPONENTS roscpp std_msgs message_generation)

add_message_files(
  FILES
  Chatter.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
  CATKIN_DEPENDS roscpp std_msgs message_runtime
)

include_directories(include ${catkin_INCLUDE_DIRS})

# Set the name to use for the executable.
set(BINNAME1 talker)
set(BINNAME2 listener)

# Set the source files to use with the executable.
set(SRCS1 ${SRCS1} src/talkerNode.cpp)
set(SRCS1 ${SRCS1} src/talker.cpp)
set(SRCS2 ${SRCS2} src/listenerNode.cpp)
set(SRCS2 ${SRCS2} src/listener.cpp)

# Build the executable that will be used to run this node.
add_executable(${BINNAME1} ${SRCS1})
add_dependencies(${BINNAME1} ${BINNAME1}_generate_messages_cpp ${catkin_EXPORTED_TARGETS})
target_link_libraries(${BINNAME1} ${catkin_LIBRARIES})
add_executable(${BINNAME2} ${SRCS2})
add_dependencies(${BINNAME2} ${BINNAME2}_generate_messages_cpp ${catkin_EXPORTED_TARGETS})
target_link_libraries(${BINNAME2} ${catkin_LIBRARIES})
