#include "ros/ros.h"
#include "custom_msgs/JointPosition.h"

#include <sstream>

int main(int argc, char **argv) {

    ros::init(argc, argv, "talker_node");
    ros::NodeHandle n;

    ros::Publisher measures_pub = n.advertise<custom_msgs::JointPosition>("measures", 100);

    ros::Rate loop_rate(10);

    while (ros::ok()) {

        custom_msgs::JointPosition measure;

        measure.jointID.data = "Joint1";
        measure.x.data = 0.0;
        measure.y.data = 0.0;
        measure.z.data = 0.0;
        
        measures_pub.publish(measure);
        loop_rate.sleep();
    }

    return 0;
}