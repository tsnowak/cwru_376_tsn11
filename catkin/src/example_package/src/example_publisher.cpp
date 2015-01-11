/*
* Example publisher
* Luc Bettaieb
* bettaieb@case.edu
*/

#include <ros/ros.h>
#include <std_msgs/Float32.h>

ros::Publisher pub_;

int main(int argc, char** argv){
	ros::init(argc, argv, "example_publisher");
	ros::NodeHandle nh;

	pub_ = nh.advertise<std_msgs::Float32>("/example_topic", 1);
	std_msgs::Float32 number;

	number.data = 0.0;
	
	while(ros::ok()){
		pub_.publish(number);

		ros::Duration(0.5).sleep();

		number.data = number.data + 1.0;
	}

}