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
<<<<<<< HEAD
    /*/显式加载动态库
    QLibrary mylib("TxPrnMod.dll");
    if(mylib.load())
    {
        typedef BOOL WINAPI(*TxOpenPrinter)(DWORD, DWORD_PTR);
        TxOpenPrinter openprinter = (TxOpenPrinter)mylib.resolve("TxOpenPrinter");
        if(openprinter)
        {
          qDebug()<<"成功";
          openprinter(TX_TYPE_COM,0);
        }
        else
        {
            qDebug()<<"加载函数失败";
        }
    }
    else
    {
        qDebug()<<"加载失败";
    }//*/

    //*/隐式加载动态库要在.pro中加入LIBS += C:/Users/Administrator/Desktop/qt_project/untitled/TxPrnMod.dll
    TxOpenPrinter(TX_TYPE_COM,1);
    TxSetupSerial(TX_SER_BAUD115200|TX_SER_DATA_8BITS|TX_SER_PARITY_NONE|TX_SER_STOP_1BITS|TX_SER_FLOW_HARD);
    //*/

    //myWidget mainwindow;
    //mainwindow.show();
    //myui ui;
    //ui.show();
    //myui2 ui2;
    //ui2.show();
=======
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

    #if 1
>>>>>>> 1765854ceb900a7d5533fea533f7dd1bf4a1f619
    Dialog duihuak;
    duihuak.show();
    #endif
    return a.exec();
}

