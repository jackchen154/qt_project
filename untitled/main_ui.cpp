#include "main_ui.h"
#include "ui_main_ui.h"
#include "termb.h"
#include <QDebug>
#include <QFile>
#include <QMessageBox>


main_ui::main_ui(QWidget *parent) :
    QDialog(parent),
ui(new Ui::main_ui)
{
    ui->setupUi(this);


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

    if(timer->timerId()==timerID)
    {
        //qDebug()<<"timer";

            if(rf_card(ICReader,0,UID)==0)
            {
                dev_beep(ICReader,2,0,1);
                qDebug("The UID is:%X%X%X%X",UID[0],UID[1],UID[2],UID[3]);
                if(rf_authentication_key(ICReader,1,(ui->sanqu_mun->currentText().toInt())*4,Bkey)==0)
                {
                    qDebug()<<"认证成功";
                    M1card_dushanqu(ui->sanqu_mun->currentText().toInt());
                }
             }
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

void main_ui::M1card_xieshanqu(int shanqumun,QString str)
{
    char data[48];
    char buf[16];    
    unsigned char i=0,j=0,mun=shanqumun*4;
    QByteArray qarrydata=str.toLocal8Bit();
    qDebug()<<qarrydata.size();
    if(qarrydata.size()>48||shanqumun>16)
     {
       int ret= QMessageBox::critical(this,"警告!","扇区号错误或字符数已经超过扇区存储范围(最大24个汉字或48个字符),请重新输入！");
       if(ret==QMessageBox::Yes)
        main_ui::close();
    }
    else
    {

     strcpy(data,qarrydata.data());
     memset(buf,0,16);//清空扇区
     for(i=0;i<3;i++)
     {
       rf_write(ICReader,mun+i,(unsigned char*)buf);
     }

     for(i=0;i<=48;i++)
     {
         if(j==16)
         {
             rf_write(ICReader,mun++,(unsigned char*)buf);
             j=0;
             memset(buf,0,16);
             qDebug()<<"写入成功";
         }
         if(data[i]==0)
         {
            rf_write(ICReader,mun++,(unsigned char*)buf);
            break;
         }
         else
         {
           buf[j]=data[i];
         }
         j++;
     }

    }
}
void main_ui::M1card_dushanqu(int shanqumun)
{
    unsigned char readdata[16];
    unsigned char buf[48];
    int mun=shanqumun*4;
    int i,j,k=0;
    for(i=0;i<3;i++)//循环读取3个扇区数据
    {
       rf_read(ICReader,mun++,readdata);//读取1个扇区
       for(j=0;j<16;j++)//将3个扇区的48个字符保存到buf[]中
       {
           buf[k]=readdata[j];
           k++;
       }
    }
    ui->duqu_jieguo->setText(QString::fromLocal8Bit((char *)buf));

}

void main_ui::on_xie_shanqu_clicked()
{
    unsigned char UID[4]={0};
    unsigned char Bkey[]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0};
    if(rf_card(ICReader,0,UID)==0)
    {
        dev_beep(ICReader,2,0,1);
        qDebug("The UID is:%X%X%X%X",UID[0],UID[1],UID[2],UID[3]);
        if(rf_authentication_key(ICReader,1,(ui->sanqu_mun->currentText().toInt())*4,Bkey)==0)
        {
            qDebug()<<"认证成功";
            QString str(ui->shanqu_txt_in->text());
            M1card_xieshanqu(ui->sanqu_mun->currentText().toInt(),str);
            ui->shanqu_txt_in->setText("");
        }
    }

}

void main_ui::on_kaishiduqu_clicked()
{

  if(m1duqu_state==1)
  {
      ui->kaishiduqu->setText("开始读取");
      killTimer(timerID);
      m1duqu_state=0;
  }
  else
  {
     ui->kaishiduqu->setText("停止读取");
     timerID = startTimer(500);
     m1duqu_state=1;
  }

}
