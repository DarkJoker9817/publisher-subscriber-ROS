#include "ros/ros.h"
#include "custom_msgs/JointPosition.h"

void measuresCallback(const custom_msgs::JointPosition::ConstPtr& measure) {
    ROS_INFO("Joint: [%s] in position x: [%f], y: [%f], z: [%f]", measure->jointID.data.c_str(),
                measure->x.data, measure->y.data, measure->z.data);
}


int main(int argc, char **argv) {
    
    ros::init(argc, argv, "listener");
    ros::NodeHandle n;

    ros::Subscriber measures_sub = n.subscribe("measures", 100, measuresCallback);

    ros::spin();

    return 0;
}