## Details

This is an example package for demonstrating how to use the Qt Framework with the [Robot Operating System (ROS)](http://www.ros.org/).
The implemented applicaion is the equivalent "listener" from the ROS Tutorial [Writing a Simple Publisher and Subscriber (C++)](http://www.ros.org/wiki/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29) written in Qt.

## Installation

Assuming you are working with catkin and have a workspace set up in your user directory `~/catkin_ws`, you can just checkout the git repository with:

	cd ~/catkin_ws/src
	git clone -b catkin https://github.com/dersimn/beginner_qt.git

After that you should be able to build the package:

	cd ~/catkin_ws
	catkin_make

And execute the application with:

	rosrun beginner_qt my_qlistener
