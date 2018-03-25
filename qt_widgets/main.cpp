#include "mywidget.h"
#include "myui.h"
#include <QApplication>
#include <subwidgets.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myWidget mainwindow;
    //mainwindow.show();
    myui ui;
    ui.show();

    return a.exec();
}

