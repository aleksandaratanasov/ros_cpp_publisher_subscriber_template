#ifndef NODE_EXAMPLE_CORE_H
#define NODE_EXAMPLE_CORE_H

// ROS includes.
#include<ros/ros.h>
#include<ros/time.h>

// Custom message includes. Auto-generated from msg/ directory.
#include <node_example/Chatter.h>

class ListenerNode
{
public:
  ListenerNode();
  ~ListenerNode();
  
  void subscriberCallback(const node_example::Chatter::ConstPtr &subMsg);
};

#endif // NODE_EXAMPLE_CORE_H
