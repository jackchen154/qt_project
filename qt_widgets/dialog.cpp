#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->labelshowmouse->setStyleSheet("background-color:green;color:bule;font:75 15pt Aharoni;");
    ui->labelshowmouse->setMinimumSize(200,200);
    ui->labelshowmouse->setMouseTracking(true);
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
    QString str_zhuizong =QString(":(X:%1 Y:%2)").arg(x).arg(y);
    ui->labelshowmouse->setText(str_zhuizong);

}


void Dialog::mouseMoveEvent(QMouseEvent *ev)
{
    int x= ev->x();
    int y=ev->y();
    QString str_zhuizong =QString("mov:(X:%1 Y:%2)").arg(x).arg(y);
    ui->labelshowmouse->setText(str_zhuizong);
}

void Dialog::mouseReleaseEvent(QMouseEvent *ev)
{
    int x= ev->x();
    int y=ev->y();
    QString str_zhuizong =QString("fangkai:(X:%1 Y:%2)").arg(x).arg(y);
    ui->labelshowmouse->setText(str_zhuizong);
}
