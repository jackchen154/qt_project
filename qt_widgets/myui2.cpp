#include "myui2.h"
#include "ui_myui2.h"

myui2::myui2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myui2)
{
    ui->setupUi(this);
}

myui2::~myui2()
{
    delete ui;
}
