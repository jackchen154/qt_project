#include "timerthread.h"
#include <QThread>
timerThread::timerThread(QObject *parent) : QObject(parent)
{

}

void timerThread::mytimer()//�̴߳�����ÿ��1�뷢��һ���ź�
{
    while (!stopflag)
    {
       QThread::sleep(1);
       emit timersignal();
       if(stopflag == 1)//�˳�ѭ���ı�־λ
       {
           break;
       }
    }
}

void timerThread::stopthrad(bool isstop)
{
    stopflag = isstop;
}
