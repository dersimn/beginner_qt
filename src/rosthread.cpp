#include "rosthread.h"

#include <QDebug>

void RosThread::chatterCallback(const std_msgs::String::ConstPtr& msg)
{
    qDebug() << "RosThread chatterCallback got: " << msg->data.c_str();

    QString qstring( msg->data.c_str() ); // create QString from C-String

    // send Signal
    emit message( qstring );
}

void RosThread::run()
{
    qDebug() << "RosThread run called";

    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("chatter", 1000, &RosThread::chatterCallback, this);

	ros::spin();
}
