#include "dialog.h"
#include "ui_dialog.h"
#include <qmessagebox.h>
#include <QPainter>
//using namespace std::chrono;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    timerID = this->startTimer(1000,Qt::PreciseTimer);//打开定时器

    ui->setupUi(this);
    ui->labelshowmouse->setStyleSheet("background-color:green;color:bule;font:75 15pt Aharoni;");
    ui->labelshowmouse->setMinimumSize(200,200);
    ui->realdata->setStyleSheet("color:bule;font:75 15pt Aharoni;");
    ui->realdata->setMinimumWidth(200);


    //ui->labelshowmouse->setMouseTracking(true);
    //this->setMouseTracking(true);
    //边界初始化
    this->x0 = ui->labelshowmouse->geometry().x();
    this->x1 = ui->labelshowmouse->geometry().x()+ui->labelshowmouse->geometry().width() - ui->mov->geometry().width();
    this->y0 = ui->labelshowmouse->geometry().y();
    this->y1 = ui->labelshowmouse->geometry().y()+ui->labelshowmouse->geometry().height() - ui->mov->geometry().height();

    this->x00 = ui->labelshowmouse->geometry().x()+ui->labelshowmouse->geometry().width()/2 ;
    this->y00 = ui->labelshowmouse->geometry().y()+ui->labelshowmouse->geometry().height()/2 ;
    ui->mov->move(x00-(ui->mov->geometry().width())/2,y00-(ui->mov->geometry().height())/2);//原点设置
    ui->realdata2->setText(QString("yuan:(X:%1 Y:%2)").arg(x00).arg(y00));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button()== Qt::LeftButton)
     {

        qDebug()<<"左键被按下";
        //该左键信号被接收处理后，将消失，不会继续向下传递，主程序的connect会接收不到这个click信号
    }
    if(ev->button()==Qt::RightButton)
    {
        qDebug()<<"右键被按下";
    }
    if(ev->button()==Qt::MiddleButton)
     {
        qDebug()<<"中键被按下";
    }
    int x= ev->x();
    int y=ev->y();
    QString str_zhuizong =QString("anxia:(X:%1 Y:%2)").arg(x).arg(y);
    ui->labelshowmouse->setText(str_zhuizong);

}


//边界控制
void Dialog::mouseMoveEvent(QMouseEvent *ev)
{

    ui->labelshowmouse->setText(QString("mov:(X:%1 Y:%2)").arg(ev->x()).arg(ev->y()));
    ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(ev->x() - x00).arg(ev->y() - y00));//绝对坐标
    ui->mov->move(ev->x()-(ui->mov->geometry().width())/2,ev->y()-(ui->mov->geometry().height())/2);//跟随光标移动
//(x00-(ui->mov->geometry().width())/2,y00-(ui->mov->geometry().height())/2)
    if(ev->y()<= y0 )//超出上边界
    {
       ui->mov->move(ev->x(),y0);
       ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(ev->x() - x00).arg(y0-y00));
    }
    else if(ev->y() >= y1)//超出下边界
    {
       ui->mov->move(ev->x(),y1);
       ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(ev->x() - x00).arg(y1-y00));
    }
    if(ev->x()<=x0)//超出左边界
    {
        ui->mov->move(x0,ev->y());
        ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(x0 - x00).arg(ev->y()-y00));
        if(ev->y()<=y0)
        {
           ui->mov->move(x0,y0);
           ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(x0 - x00).arg(y0-y00));
        }
        else if(ev->y()>=y1)
        {
           ui->mov->move(x0,y1);
           ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(x0 - x00).arg(y1-y00));
        }
    }
    else if(ev->x()>=x1)//超出右边界
    {

        ui->mov->move(x1,ev->y());
        ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(x1 - x00).arg(ev->y()-y00));
        if(ev->y()>=y1)
        {
           ui->mov->move(x1,y1);
           ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(x1 - x00).arg(y1-y00));
        }
        if(ev->y()<=y0)
        {
           ui->mov->move(x1,y0);
           ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(x1 - x00).arg(y0-y00));
        }
    }

}

void Dialog::mouseReleaseEvent(QMouseEvent *ev)
{
    int x= ev->x();
    int y=ev->y();
    QString str_zhuizong =QString("fangkai:(X:%1 Y:%2)").arg(x).arg(y);
    ui->labelshowmouse->setText(str_zhuizong);
    ui->mov->move(x00-(ui->mov->geometry().width())/2,y00-(ui->mov->geometry().height())/2);
    ui->realdata2->setText(QString("real:(X:%1 Y:%2)").arg(ev->x() - x00).arg(ev->y()-y00));
}

void Dialog::enterEvent(QEvent *event)
{
    ui->realdata->setText("进入窗口");
}

void Dialog::leaveEvent(QEvent *event)
{
    ui->realdata->setText("离开窗口");
}


//键盘处理事件
void Dialog::keyPressEvent(QKeyEvent *keyboard)
{
    qDebug()<<keyboard->text();//显示按下的按键

    if(keyboard->key() == Qt::Key_A)
    {
        qDebug()<<"A被按下";
    }

    if(keyboard->matches(QKeySequence::Cut))//判断按下的是否为标准的组合操作
    {
        qDebug()<<"CTRL+V被按下";
    }

}
//定时器处理事件
//timerID = this->startTimer(1000,Qt::PreciseTimer);//打开定时器
void Dialog::timerEvent(QTimerEvent *event)
{

    timerbuf++;
    if(timerbuf==20)
    {
        timerbuf=0;
        if(event->timerId()==timerID)//判断ID号确认是哪一个定时器
        {
          this->killTimer(timerID);//关闭定时器
        }
    }
    ui->realdata->setText(QString("定时器：%1").arg(timerbuf));
}

//*处理关闭窗口事件（演示事件的接收和忽略）
void Dialog::closeEvent(QCloseEvent *e)
{

    int re = QMessageBox::question(this,"关闭确认","是否关闭窗口？",QMessageBox::Yes|QMessageBox::No);
    switch (re) {
    case QMessageBox::Yes://关闭窗口
        e->accept();//接收当前事件，事件不会再往下传递
        break;
    case QMessageBox::No://不关闭窗口
        e->ignore();//忽略当前事件，事件继续向父组件传递
        break;
    default:
        break;
    }

}
//*/
//绘图事件
void Dialog::paintEvent(QPaintEvent *)
{
    //QPainter p(this);
    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备
    p.drawPixmap(0,0,width(),height(),QPixmap("./s1.png"));//画背景图

    p.end();
}
