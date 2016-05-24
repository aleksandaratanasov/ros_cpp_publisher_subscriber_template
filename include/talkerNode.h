#ifndef NODE_EXAMPLE_CORE_H
#define NODE_EXAMPLE_CORE_H

// ROS includes.
#include<ros/ros.h>
#include<ros/time.h>
#include<string>

// Custom message includes. Auto-generated from msg/ directory.
#include <node_example/Chatter.h>

class TalkerNode
{
public:
  TalkerNode();
  ~TalkerNode();
  
  void publisherCallback(ros::Publisher *pub, std::string msg);
};

#endif // NODE_EXAMPLE_CORE_H
