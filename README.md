# publisher-subscriber-ROS
A publisher that simulates a set of sensors for encoder readings (position of 6 joints) and a subscriber that simulates a set of controllers that prints such readings to stdout.

## How to run
1. Copy packages to your workspace then build them:
```bash
catkin build
```
2. Launch roscore:
```bash
roscore
```
3. Open a new shell window and source:
```bash
source devel/setup.bash
```
4. Launch following command to start the publisher node
```bash
rosrun sensor_readings talker_node
```
5. Open a new shell window and source:
```bash
source devel/setup.bash
```
6. Launch following command to start the subscriber node
```bash
rosrun sensor_readings listener_node
```


