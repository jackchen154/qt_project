#include "mainwindow.h"
#include "termb.h"
#include <QDebug>
#include <QFile>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
  timerID = startTimer(500,Qt::PreciseTimer);
  //this->killTimer(timerID);
}

MainWindow::~MainWindow()
{

}

void MainWindow::timerEvent(QTimerEvent *time)
{
    if(Authenticate())
    {
        qDebug()<<"鉴权成功";
        if(Read_Content_Path((char *)"C:\\",1)!=0)
        {
            QFile f("C:\\wz.txt");
            if(!f.open(QIODevice::ReadOnly | QIODevice::Text))
            {
                qDebug() << "Open failed.";
                //return -1;
            }

            //*
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
            f.close();
            //  qDebug()<<"读取完毕";
        }
        //this->killTimer(timerID);
    }
    //qDebug()<<"鉴权失败";
}
