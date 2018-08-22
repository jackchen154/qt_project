#ifndef TIMERTHREAD_H
#define TIMERTHREAD_H

#include <QObject>

class timerThread : public QObject
{
    Q_OBJECT
public:
    explicit timerThread(QObject *parent = nullptr);
    void mytimer();//线程处理函数
    void stopthrad(bool isstop);//关闭while循环

signals:
     void timersignal();//线程内部处理时所发出的信号
private:
     bool stopflag = 0;//退出循环标志位
public slots:
};

#endif // TIMERTHREAD_H
