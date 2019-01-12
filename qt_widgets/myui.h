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
    void dealtimersignal();//处理子线程的内容
    void dealclosethread();//关闭时退出线程
    int jishuqi = 0;//LCD的计数器
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
      void starthreadsingal();//启动子线程的信号
};

#endif // MYUI_H
