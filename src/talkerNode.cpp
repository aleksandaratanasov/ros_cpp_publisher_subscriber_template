#include "node_example/talkerNode.h"

TalkerNode::TalkerNode()
{
}

TalkerNode::~TalkerNode()
{
}

void TalkerNode::publisherCallback(ros::Publisher *pub, std::string msg)
{
  node_example::Chatter cMsg;
  cMsg.message = msg;
  ROS_INFO("sent %s", cMsg.message.c_str());
  
  pub->publish(cMsg);
}