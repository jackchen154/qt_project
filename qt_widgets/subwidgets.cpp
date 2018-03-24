#include "subwidgets.h"

subwidgets::subwidgets(QWidget *parent) : QWidget(parent)
{
    //设置窗口名称
    setWindowTitle("子窗口");
    //设置窗口大小
    resize(400,300);
    //切换按钮
    sub_qiehuan.setParent(this);
    sub_qiehuan.setText("切换到主窗口");
    sub_qiehuan.move(100,0);
    //按下按钮发射一个信号(不带参数)给到主窗口
    connect(&sub_qiehuan,&QPushButton::clicked,this,&subwidgets::send_sigal);

    //按下按钮发射一个信号(参数)给到主窗口
    connect(&sub_qiehuan,&QPushButton::released,this,&subwidgets::send_sigal_daican);
}

void subwidgets::send_sigal()//发送信号的槽函数
{
    emit sub_ch_sigal();//发送信号
}

void subwidgets::send_sigal_daican()//发送一个带参数的信号
{
    emit sub_ch_sigal(520,"我是一个子窗口");
}
