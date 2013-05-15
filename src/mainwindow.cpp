#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qDebug() << "MainWindow constructor";

    ui->setupUi(this);

    // Create RosThread
    this->rost = new RosThread();
    connect(this->rost, SIGNAL(message(QString)), this, SLOT(addLine(QString)));
    this->rost->start(); // start begins periodically executing the run() function
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addLine(QString newLine)
{
    qDebug() << "addLine slot called";

    ui->textEdit->append(newLine);
}
