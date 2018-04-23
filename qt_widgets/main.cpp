#include "mywidget.h"
#include "myui.h"
#include "myui2.h"
#include "dialog.h"
#include "TxPrnMod.h"
#include <QApplication>
#include <subwidgets.h>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    #if 0
    myWidget mainwindow;
    mainwindow.show();
    #endif

    #if 0
    myui ui;
    ui.show();
    #endif

    #if 0
    myui2 ui2;
    ui2.show();
    #endif

    #if 0
    Dialog duihuak;
    duihuak.show();
    #endif
    return a.exec();
}

