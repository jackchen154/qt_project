#include "mainwindow.h"
#include <QApplication>
#include <QLibrary>
#include <QDebug>
#include "termb.h"
#include "TxPrnMod.h"




int main(int argc, char *argv[])
{




    QApplication a(argc, argv);
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
    //TxOpenPrinter(TX_TYPE_COM,1);
    //int v=1;
    //TxSetupSerial(TX_SER_BAUD9600|TX_SER_DATA_8BITS|TX_SER_PARITY_NONE|TX_SER_STOP_1BITS|TX_SER_FLOW_HARD);
    //*/
    char deviceid[50];
    char  cDeviceType[1000]={0};
    char cDeviceCategory[1000]={0};
    char cDeviceName[1000]={0};
    char cMfr[1000]={0};

    qDebug()<<"初始化端口1："<<InitComm(1);
    qDebug()<<"鉴权结果："<<Authenticate();
    qDebug()<<"读取结束"<<Read_Content_Path("C://",1);
    GetDeviceID(deviceid);
    qDebug()<<"device_ID:"<<deviceid;
    qDebug()<<"SAM_ID:"<<GetSAMID();
    qDebug()<<"get photo result:"<<GetPhoto((char *)"C://xp1.wlt");
   // MfrInfo(cDeviceType,cDeviceCategory,cDeviceName,cMfr);
     qDebug()<<"产品型号:"<<cDeviceType;
     qDebug()<<"产品类别:"<<cDeviceCategory;
     qDebug()<<"产品名称:"<<cDeviceName;
     qDebug()<<"厂商名称:"<<cMfr;
    //qDebug()<<"关闭端口"<<CloseComm();
    MainWindow w;
    w.show();
    return a.exec();
}



