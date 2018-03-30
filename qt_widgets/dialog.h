#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QMouseEvent>
#include<QDebug>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    int movdata=0;

    ~Dialog();

private:
    Ui::Dialog *ui;
    int x0,x1,y0,y1;//边界
    int x00,y00;//原点
    //鼠标事件
    void mousePressEvent(QMouseEvent *ev);//鼠标按下事件
    void mouseReleaseEvent(QMouseEvent *ev);//鼠标放开事件
    void mouseMoveEvent(QMouseEvent *ev);//鼠标移动事件
    //窗口事件
    void enterEvent(QEvent *event);//进入窗口事件
    void leaveEvent(QEvent *event);//离开窗口事件
    //键盘事件
    void keyPressEvent(QKeyEvent *);
    //定时器事件
    void timerEvent(QTimerEvent *event);
    int timerID;//定时器标识符
    int timerbuf=0;//定时器缓存
};

#endif // DIALOG_H
