#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>
#include<QPushButton>
#include <subwidgets.h>
#include <QTextEdit>
#include <QLabel>
class myWidget : public QMainWindow
{
    Q_OBJECT

public:
    myWidget(QWidget *parent = 0);
    QTextEdit *bianjiqu;
    void data_stream_contr();
    void anxia_b3();
    void text_stream_contr();
    QTextEdit *wenbenbjq1;//文件保存时使用
    QLabel *statusbar_data;//显示文件信息时使用
    //void chuli_sub();//处理信号不带参数的槽函数
    //void chuli_sub_daican(int,QString);//处理信号带参数的槽函数，槽函数的参数格式必须与信号相同
    ~myWidget();

public slots:
    void chuli_sub();//处理信号不带参数的槽函数
    void chuli_sub_daican(int,QString);//处理信号带参数的槽函数，槽函数的参数格式必须与信号相同


private:
    QPushButton b1;
    QPushButton *b2;
    QPushButton b3;
    QPushButton *anniu;
    subwidgets subwindow;
};

#endif // MYWIDGET_H
