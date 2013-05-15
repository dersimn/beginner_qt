## Details

This is an example package for demonstrating how to use the Qt Framework with the Robot Operating System.
The implemented applicaion is the equivalent "listener" from the ROS Tutorial [Writing a Simple Publisher and Subscriber (C++)](http://www.ros.org/wiki/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29) written in Qt.

## Installation

Assuming you are working with rosws and have a workspace overlay setup in your user directory <code>~/fuerte_workspace</code>, you can just checkout the git repository with:<br>
<pre><code>git clone https://github.com/seim/beginner_qt.git</code></pre>
Now you introduce the new directory to your ROS framework by executing:<br>
<pre><code>rosws set ~/fuerte_workspace/beginner_qt</code></pre>
After that you should be able to build the package (of course you need to install the Qt toolchain if you haven't yet):<br>
<pre><code>rosmake beginner_qt</code></pre>
And execute the application with:<br>
<pre><code>rosrun beginner_qt listener</code></pre>

## Credits
Christian Dornhege from this [post](http://answers.ros.org/question/12790/ros-qt-creator-gui/?answer=18878#post-id-18878)
