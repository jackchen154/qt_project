#include "mainwindow.h"
#include "termb.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
  timerID = startTimer(500,Qt::PreciseTimer);
}

MainWindow::~MainWindow()
{

}

void MainWindow::timerEvent(QTimerEvent *time)
{
    if(Authenticate())
    {
        this->killTimer(timerID);
    }
    qDebug()<<"1112";
}
