#include "dialog.h"
#include "ui_dialog.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->labelshowmouse->setStyleSheet("background-color:green;color:bule;font:75 15pt Aharoni;");
    ui->labelshowmouse->setMinimumSize(200,200);
    ui->realdata->setStyleSheet("color:bule;font:75 15pt Aharoni;");
    ui->realdata->setMinimumWidth(200);
    ui->mov->move(133,169);

    ui->labelshowmouse->setMouseTracking(true);
    //this->setMouseTracking(true);

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


void Dialog::mouseMoveEvent(QMouseEvent *ev)
{

    int x0,x1,y0,y1;
    x0 = ui->labelshowmouse->geometry().x();
    x1 = ui->labelshowmouse->geometry().x()+ui->labelshowmouse->geometry().width() - ui->mov->geometry().width();
    y0 = ui->labelshowmouse->geometry().y();
    y1 = ui->labelshowmouse->geometry().y()+ui->labelshowmouse->geometry().height() - ui->mov->geometry().height();
    QString str_zhuizong =QString("mov:(X:%1 Y:%2)").arg(ev->x()).arg(ev->y());
    ui->labelshowmouse->setText(str_zhuizong);
    ui->mov->move(ev->x(),ev->y());
    if(ev->y()<= y0 )
    {
       ui->mov->move(ev->x(),y0);
    }
    else if(ev->y() >= y1)
    {
       ui->mov->move(ev->x(),y1);
    }
    if(ev->x()<=x0)
    {
        ui->mov->move(x0,ev->y());
        if(ev->y()<=y0)
        {
           ui->mov->move(x0,y0);
        }
        else if(ev->y()>=y1)
        {
           ui->mov->move(x0,y1);
        }
    }
    else if(ev->x()>=x1)
    {

        ui->mov->move(x1,ev->y());
        if(ev->y()>=y1)
        {
           ui->mov->move(x1,y1);
        }
        if(ev->y()<=y0)
        {
           ui->mov->move(x1,y0);
        }
    }

}

void Dialog::mouseReleaseEvent(QMouseEvent *ev)
{
    int x= ev->x();
    int y=ev->y();
    QString str_zhuizong =QString("fangkai:(X:%1 Y:%2)").arg(x).arg(y);
    ui->labelshowmouse->setText(str_zhuizong);
    ui->mov->move(133,169);
}
