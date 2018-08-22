#include "timerthread.h"
#include <QThread>
timerThread::timerThread(QObject *parent) : QObject(parent)
{

}

void timerThread::mytimer()//线程处理函数每隔1秒发送一个信号
{
    while (!stopflag)
    {
       QThread::sleep(1);
       emit timersignal();
       if(stopflag == 1)//退出循环的标志位
       {
           break;
       }
    }
}

void timerThread::stopthrad(bool isstop)
{
    stopflag = isstop;
}
