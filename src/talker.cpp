#include "talkerNode.h"

int main(int argc, char **argv)
{
  // Set up ROS.
  ros::init(argc, argv, "talker");
  ros::NodeHandle nh;

  // Create a new NodeExample object.
  //NodeExample *node_example = new NodeExample();
  TalkerNode *t = new TalkerNode();

  // Create a publisher and name the topic.
  ros::Publisher pub = nh.advertise<node_example::Chatter>("example", 10);

  // Tell ROS how fast to run this node.
  ros::Rate r(40);
  
  std::string msg = "Hello!";

  // Main loop.
  while (nh.ok())
  {
    // Publish the message.
    t->publisherCallback(&pub, msg);

    ros::spinOnce();
    r.sleep();
  }

  return 0;
} // end main()
