#ifndef MYUI_H
#define MYUI_H

#include <QMainWindow>
#include "timerthread.h"
namespace Ui {
class myui;
}

class myui : public QMainWindow
{
    Q_OBJECT

public:
    explicit myui(QWidget *parent = 0);
    void dealtimersignal();//�������̵߳�����
    void dealclosethread();//�ر�ʱ�˳��߳�
    int jishuqi = 0;//LCD�ļ�����
    ~myui();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::myui *ui;
    timerThread *myT;
    QThread *thread;
signals:
      void starthreadsingal();//�������̵߳��ź�
};

#endif // MYUI_H
