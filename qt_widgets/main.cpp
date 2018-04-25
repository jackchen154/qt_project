#include "mywidget.h"
#include "myui.h"
#include "dialog.h"
#include "TxPrnMod.h"
#include <QApplication>
#include <subwidgets.h>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*

    myWidget mainwindow;
    mainwindow.show();
    //*/


    /* 演示各种控件的效果
     * 1.行编辑器输入文本时自动补全姓名
     * 2.行编辑器使用密码显示
     * 3.Qlable显示图片和gif动画，将lable设定为一个网络链接
     * 4.控件的样式表
     * 5.进度条的操作
     * 5.UI的布局
     */
    myui ui;
    ui.show();
    //*/


    /*/演示各种事件（定时器，键盘，鼠标，关闭，绘图）
    Dialog duihuak;
    duihuak.show();
    //*/
    return a.exec();
}

