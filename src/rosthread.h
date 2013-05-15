#ifndef ROSTHREAD_H
#define ROSTHREAD_H

#include <QString>
#include <QThread>

#include "ros/ros.h"
#include "std_msgs/String.h"

class RosThread : public QThread
{
    Q_OBJECT

signals:
    void message(QString msg);

public:
    void run();

private:
    void chatterCallback(const std_msgs::String::ConstPtr& msg);
};

#endif
