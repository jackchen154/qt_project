
#include "main_ui.h"
#include <QApplication>
#include <QLibrary>
#include <QDebug>
#include "termb.h"
#include "TxPrnMod.h"


#include <QFile>



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    main_ui ui;
    ui.show();
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
    //*

    qDebug()<<"初始化身份证端口："<<InitComm(1);
    //qDebug()<<"鉴权结果："<<Authenticate();
    //qDebug()<<"读取结束"<<Read_Content_Path((char *)"C:\\",1);
    //GetDeviceID(deviceid);
    //qDebug()<<"device_ID:"<<deviceid;

/*/
     QFile f("C:\\wz.txt");
     if(!f.open(QIODevice::ReadOnly | QIODevice::Text))
     {
         qDebug() << "Open failed.";
         //return -1;
     }


     QTextStream txtInput(&f);
     txtInput.setCodec("UTF-16");
     QString lineStr;

     lineStr = txtInput.readLine();
     qDebug()  <<"姓名:"<<lineStr.mid(0,4);

     if(lineStr.mid(15,1).toInt()==1)
     {
         qDebug()<<"性别:男";
     }
     else
     {
       qDebug()<<"性别:女";
     }
     switch (lineStr.mid(16,2).toInt()) {
     case 1: qDebug()<<"民族：汉族"; break;
     case 2: qDebug()<<"民族：蒙古"; break;
     default:
         break;
     }
     qDebug()<<"出生日期:" <<lineStr.mid(18,4).toInt()<<"年"<<lineStr.mid(22,2).toInt()<<"月"<<lineStr.mid(24,2).toInt()<<"日";
     qDebug()<<"住址:"<< lineStr.mid(26,35);
     qDebug()<<"身份证号:"<<lineStr.mid(61,18);
     qDebug()<<"签发机关:"<<lineStr.mid(79,15);
     qDebug()<<"有效期起始:"<<lineStr.mid(94,4).toInt()<<"年"<<lineStr.mid(98,2).toInt()<<"月"<<lineStr.mid(100,2).toInt()<<"日";
     qDebug()<<"有效期截止:"<<lineStr.mid(102,4).toInt()<<"年"<<lineStr.mid(106,2).toInt()<<"月"<<lineStr.mid(108,2).toInt()<<"日";
     f.close();*/



    return a.exec();
}



