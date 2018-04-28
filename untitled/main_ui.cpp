#include "main_ui.h"
#include "ui_main_ui.h"
#include "termb.h"
#include <QDebug>
#include <QFile>


main_ui::main_ui(QWidget *parent) :
    QDialog(parent),
ui(new Ui::main_ui)
{
    ui->setupUi(this);
    timerID = startTimer(500);
    //timer2ID = startTimer(500);
    //qDebug()<<"初始化身份证端口："<<InitCommExt();
    ICReader =open_device(0,0);
    if(ICReader == INVALID_HANDLE_VALUE)
    qDebug()<<"IC读卡器打开失败";
    else
        qDebug()<<"IC读卡器打开成功";

}

main_ui::~main_ui()
{
    delete ui;
}

void main_ui::timerEvent(QTimerEvent *timer)
{

    unsigned char UID[4]={0};
    unsigned char Bkey[]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0};
    char data[16];
    unsigned char readdata[16];
    QString qdata("我的名字叫陈威");
    QByteArray qarrydata=qdata.toLocal8Bit();
    strcpy(data,qarrydata.data());
    if(timer->timerId()==timerID)
    {
        //qDebug()<<"timer";
        //if(rf_reset(ICReader)==0)
         //{
            if(rf_card(ICReader,0,UID)==0)
            {
                dev_beep(ICReader,2,0,1);
                qDebug("The UID is:%X%X%X%X",UID[0],UID[1],UID[2],UID[3]);
                if(rf_authentication_key(ICReader,1,8,Bkey)==0)
                {

                    qDebug()<<"认证成功";

                    //rf_write(ICReader,8,(unsigned char*)data);
                    rf_read(ICReader,8,readdata);
                    qDebug()<<"读取值"<<QString((char*)readdata).toStdU16String();
                    qDebug()<<"写入成功";
                }

            }
        // }
    }

    /*if(timer->timerId()==timer2ID)
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


            QTextStream txtInput(&f);
            txtInput.setCodec("UTF-16");
            QString lineStr;

            lineStr = txtInput.readLine();
            ui->idname->setText(lineStr.mid(0,4));
            qDebug()  <<"姓名:"<<lineStr.mid(0,4);

            if(lineStr.mid(15,1).toInt()==1)
            {
                ui->idsex->setText("男");
                qDebug()<<"性别:男";
            }
            else
            {
                ui->idsex->setText("女");
                qDebug()<<"性别:女";
            }
            switch (lineStr.mid(16,2).toInt()) {
            case 1:
                ui->idmin_zu->setText("汉族");
                qDebug()<<"民族：汉族";
                break;
            case 2:
                ui->idmin_zu->setText("蒙古");
                qDebug()<<"民族：蒙古";
                break;
            default:
                break;
            }
            ui->idyear->setText(lineStr.mid(18,4));
            ui->idmonth->setText(lineStr.mid(22,2));
            ui->idday->setText(lineStr.mid(24,2));
            ui->idaddress->setText(lineStr.mid(26,35));
            ui->ididmun->setText(lineStr.mid(61,18));
            ui->idjiguan->setText(lineStr.mid(79,15));
            ui->idyouxiaoqi->setText(QString("%1-%2-%3 %4-%5-%6").arg(lineStr.mid(94,4).toInt())
                                     .arg(lineStr.mid(98,2).toInt()).arg(lineStr.mid(100,2).toInt())
                                     .arg(lineStr.mid(102,4).toInt())
                                     .arg(lineStr.mid(106,2).toInt()).arg(lineStr.mid(108,2).toInt())
                                     );
            qDebug()<<"出生日期:" <<lineStr.mid(18,4).toInt()<<"年"<<lineStr.mid(22,2).toInt()<<"月"<<lineStr.mid(24,2).toInt()<<"日";
            qDebug()<<"住址:"<< lineStr.mid(26,35);
            qDebug()<<"身份证号:"<<lineStr.mid(61,18);
            qDebug()<<"签发机关:"<<lineStr.mid(79,15);
            qDebug()<<"有效期起始:"<<lineStr.mid(94,4).toInt()<<"年"<<lineStr.mid(98,2).toInt()<<"月"<<lineStr.mid(100,2).toInt()<<"日";
            qDebug()<<"有效期截止:"<<lineStr.mid(102,4).toInt()<<"年"<<lineStr.mid(106,2).toInt()<<"月"<<lineStr.mid(108,2).toInt()<<"日";
            f.close();
            ui->idphoto->setPixmap(QPixmap("C://zp.bmp"));
            ui->idphoto->setScaledContents(true);
            //删除数据
            QFile zhiwen("C:\\fp.dat");
            QFile wlttupian("C:\\xp.wlt");
            QFile bmptupian("C:\\zp.bmp");
            QFile wenzi("C:\\wz.txt");
            if (zhiwen.exists()) zhiwen.remove();
            if (wlttupian.exists()) wlttupian.remove();
            if (bmptupian.exists()) bmptupian.remove();
            if (wenzi.exists()) wenzi.remove();


        }
        //this->killTimer(timerID);

    }

    qDebug()<<"鉴权失败";
    }*/
}

