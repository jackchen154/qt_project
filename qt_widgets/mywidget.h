#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>
#include<QPushButton>
#include <subwidgets.h>
#include <QTextEdit>
class myWidget : public QMainWindow
{
    Q_OBJECT

public:
    myWidget(QWidget *parent = 0);
    QTextEdit *bianjiqu;
    void anxia_b2();
    void anxia_b3();
    //void chuli_sub();//处理信号不带参数的槽函数
    //void chuli_sub_daican(int,QString);//处理信号带参数的槽函数，槽函数的参数格式必须与信号相同
    ~myWidget();

public slots:
    void chuli_sub();//处理信号不带参数的槽函数
    void chuli_sub_daican(int,QString);//处理信号带参数的槽函数，槽函数的参数格式必须与信号相同


private:
    QPushButton b1;
    QPushButton *b2;
    unsigned char b2_state=0;
    QPushButton b3;
    subwidgets subwindow;
};

#endif // MYWIDGET_H
