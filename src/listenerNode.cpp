#include "listenerNode.h"

ListenerNode::ListenerNode()
{
}

ListenerNode::~ListenerNode()
{
}

void ListenerNode::subscriberCallback(const node_example::Chatter::ConstPtr &subMsg)
{
  ROS_INFO("received %s", subMsg->message.c_str());
}
