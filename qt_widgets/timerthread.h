#ifndef TIMERTHREAD_H
#define TIMERTHREAD_H

#include <QObject>

class timerThread : public QObject
{
    Q_OBJECT
public:
    explicit timerThread(QObject *parent = nullptr);
    void mytimer();//�̴߳�����
    void stopthrad(bool isstop);//�ر�whileѭ��

signals:
     void timersignal();//�߳��ڲ�����ʱ���������ź�
private:
     bool stopflag = 0;//�˳�ѭ����־λ
public slots:
};

#endif // TIMERTHREAD_H
