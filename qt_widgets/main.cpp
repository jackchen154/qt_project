#include "mywidget.h"
#include "myui.h"
#include "myui2.h"
#include "dialog.h"
#include <QApplication>
#include <subwidgets.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //myWidget mainwindow;
    //mainwindow.show();
    //myui ui;
    //ui.show();
    myui2 ui2;
    ui2.show();
    Dialog duihuak;
    duihuak.show();
    return a.exec();
}

