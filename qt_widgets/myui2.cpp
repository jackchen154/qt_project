#include "myui2.h"
#include "ui_myui2.h"
#include <QDebug>

myui2::myui2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myui2)
{
    ui->setupUi(this);
    //ui->lineEdit->setStyleSheet(1);
    ui->labelshowmouse->setStyleSheet("background-color:green;color:bule;font:75 15pt Aharoni;");
    ui->labelshowmouse->setMinimumSize(200,200);
    ui->labelshowmouse->setMouseTracking(true);
}

myui2::~myui2()
{
    delete ui;
}
