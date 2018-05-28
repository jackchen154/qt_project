#include "serial_window.h"
#include "ui_serial_window.h"
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>
serial_window::serial_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::serial_window)
{
    ui->setupUi(this);
    textcodec = QTextCodec::codecForName("GBK");//转码显示
    statusbar_data = new QLabel(this);
    ui->statusbar->addWidget(statusbar_data);//使用addwidget是从左往右添加状态信息

    QPushButton *clear_count = new QPushButton(this);
    clear_count->setText("清零");
    clear_count->setMaximumSize(30,30);
    ui->statusbar->addPermanentWidget(clear_count);
    connect(clear_count,&QPushButton::clicked,
            [=]()
            {
              rx_count=0;
              tx_count=0;
              RX_count->setNum(tx_count);
              TX_count->setNum(tx_count);
              ui->textBrowser->clear();//清屏
            });

    QLabel *RX_txt = new QLabel(this);
    RX_txt->setText("RX:");
    RX_txt->setMaximumSize(30,30);
    ui->statusbar->addPermanentWidget(RX_txt);

    RX_count = new QLabel(this);
    RX_count->setNum(tx_count);
    RX_count->setMinimumSize(30,20);
    ui->statusbar->addPermanentWidget(RX_count);

    QLabel *TX_txt = new QLabel(this);
    TX_txt->setText("TX:");
    TX_txt->setMaximumSize(30,30);
    ui->statusbar->addPermanentWidget(TX_txt);

    TX_count = new QLabel(this);
    TX_count->setNum(tx_count);
    TX_count->setMinimumSize(30,20);
    ui->statusbar->addPermanentWidget(TX_count);

    //查找可用的串口，并将端口号放到PortBox中
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->PortBox->addItem(serial.portName());
            serial.close();
        }
    }
    ui->BaudBox->setCurrentIndex(4);    //设置波特率下拉菜单默认显示9600
    ui->sendButton->setEnabled(false);  //关闭发送按钮的使能
    ui->pushButton_2->setEnabled(false);
    ui->clear->setEnabled(false);
    ui->clearsend->setEnabled(false);
    ui->auto_send->setEnabled(false);
    ui->send_button1->setEnabled(false);
    ui->send_button2->setEnabled(false);
    ui->send_button3->setEnabled(false);

    auto_send_timer =new QTimer();//自动发送定时器
    auto_send_timer->setInterval(ui->send_interval->value());//读取时间间隔
    connect(auto_send_timer,&QTimer::timeout,//时间溢出去扫描哪一个选项被选中，并将选中的内容发送出去
            [=]()
            {
              if(ui->send_check1->isChecked())
              {
                tx_count += sendHex(ui->send_input1->text());
                TX_count->setNum(tx_count);
              }
              else if(ui->send_check2->isChecked())
              {
                tx_count += sendHex(ui->send_input2->text());
                TX_count->setNum(tx_count);
              }
              else if(ui->send_check3->isChecked())
              {
                tx_count += sendHex(ui->send_input3->text());
                TX_count->setNum(tx_count);
               }
            });
}

serial_window::~serial_window()
{
    delete ui;
}

void serial_window::on_openButton_clicked()
{
    if(ui->openButton->text()==tr("打开串口"))
    {

        serial = new QSerialPort;
        serial->setPortName(ui->PortBox->currentText());  //设置串口名
        serial->setBaudRate(ui->BaudBox->currentText().toInt());   //设置波特率
        switch(ui->BitNumBox->currentText().toInt())  //设置数据位
        {
              case 8: serial->setDataBits(QSerialPort::Data8); break;
              case 7: serial->setDataBits(QSerialPort::Data7); break;
              case 6: serial->setDataBits(QSerialPort::Data6); break;
              case 5: serial->setDataBits(QSerialPort::Data5); break;
              default: break;
        }

        if(ui->ParityBox->currentText()=="无")
            serial->setParity(QSerialPort::NoParity);
        else if(ui->ParityBox->currentText()=="奇校验")
            serial->setParity(QSerialPort::OddParity);
        else if(ui->ParityBox->currentText()=="偶校验")
            serial->setParity(QSerialPort::EvenParity);

        switch(ui->StopBox->currentText().toInt())   //设置停止位
        {
            case 1: serial->setStopBits(QSerialPort::OneStop); break;
            case 2: serial->setStopBits(QSerialPort::TwoStop); break;
            default: break;
        }

        serial->setFlowControl(QSerialPort::NoFlowControl); //设置流控制设置为否
        QSerialPortInfo info(serial->portName());
        //qDebug() << "Name : " << info.portName();
        //qDebug() << "Description : " << info.description();
        //qDebug() << "Manufacturer: " << info.manufacturer();

        statusbar_data->setText(QString ("%1已经打开   设备厂商:%2  设备描述:%3").arg(info.portName()).arg(info.manufacturer()).arg(info.description()));
        //关闭串口设置使能
        ui->PortBox->setEnabled(false);
        ui->BaudBox->setEnabled(false);
        ui->BitNumBox->setEnabled(false);
        ui->ParityBox->setEnabled(false);
        ui->StopBox->setEnabled(false);

        ui->openButton->setText(tr("关闭串口"));
        ui->sendButton->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
        ui->clear->setEnabled(true);
        ui->clearsend->setEnabled(true);
        ui->auto_send->setEnabled(true);
        ui->send_button1->setEnabled(true);
        ui->send_button2->setEnabled(true);
        ui->send_button3->setEnabled(true);
        //ui->recive_window->setEnabled(true);
        ui->send_window->setEnabled(true);

        serial->open(QIODevice::ReadWrite); //打开串口
        //连接信号槽
        QObject::connect(serial, &QSerialPort::readyRead, this, &serial_window::Read_Data);
    }
    else
    {
        //清除窗口数据
        //ui->textBrowser->clear();
        //ui->textEdit->clear();
        //关闭自动发送
        ui->auto_send->setCheckState(Qt::Unchecked);
        auto_send_timer->stop();
        //关闭串口
        serial->clear();
        serial->close();
        serial->deleteLater();
        statusbar_data->clear();
        //恢复设置使能
        ui->PortBox->setEnabled(true);
        ui->BaudBox->setEnabled(true);
        ui->BitNumBox->setEnabled(true);
        ui->ParityBox->setEnabled(true);
        ui->StopBox->setEnabled(true);
        ui->openButton->setText(tr("打开串口"));
        ui->sendButton->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
        ui->clear->setEnabled(false);
        ui->clearsend->setEnabled(false);
        ui->auto_send->setEnabled(false);
        ui->send_button1->setEnabled(false);
        ui->send_button2->setEnabled(false);
        ui->send_button3->setEnabled(false);
        //ui->recive_window->setEnabled(false);
        ui->send_window->setEnabled(false);

    }

}


void serial_window::on_sendButton_clicked()
{
   QByteArray send_char = ui->textEdit->toPlainText().toLocal8Bit();
   tx_count += send_char.size();//char发送计数
   TX_count->setNum(tx_count);
   serial->write(send_char);

   // serial->write(ui->textEdit->toPlainText().toUtf8());
}

//读取接收到的数据
void serial_window::Read_Data()
{

   QByteArray buf = serial->readAll();
    //rx_count += serial->bytesAvailable(); //返回串口缓冲区字节数

   //接收计数器
    rx_count +=buf.size();
    RX_count->setNum(rx_count);
    if(!buf.isEmpty()&&stop_receive)//如果数据不为空
    {
       // QString str = ui->textBrowser->toPlainText();  //l继续联接之前的数据追加新的数据
        //ui->textBrowser->clear();
        QString strDisplay;
        if(this->ui->Hex_disp->isChecked())  //如果是,就以16进制显示
        {
           QString str = buf.toHex();
            for(int i=0;i<str.length();i+=2)
            {
              //strDisplay += "0x";
              QString st = str.mid(i,2);
              strDisplay += st.toUpper();
              strDisplay += " ";
            }
            if(ui->auto_linefeed->isChecked())

                ui->textBrowser->append(strDisplay);
            else
                ui->textBrowser->insertPlainText(strDisplay);

        }
        else if(this->ui->gbk_disp->isChecked())//gbk显示
        {
           if(ui->auto_linefeed->isChecked())
           ui->textBrowser->append(textcodec->toUnicode(buf));
           else
           ui->textBrowser->insertPlainText(textcodec->toUnicode(buf));
        }
        else if(this->ui->utf8_disp->isChecked())//UTF8显示
        {
            if(ui->auto_linefeed->isChecked())
            ui->textBrowser->append(buf);
            else
            ui->textBrowser->insertPlainText(buf);
        }

    }
    buf.clear();

    /*if(this->ui->HexShow->isChecked())  //如果是,就以16进制显示
   {
        this->ui->textEdit->setText(buf.toHex());
    } */
     //this->ui->ReceiveNumber->display(byteLen);//可显示当前接收到了多少个数据
}

void serial_window::on_clear_clicked()
{
    ui->textBrowser->clear();
}

void serial_window::on_clearsend_clicked()
{
    ui->textEdit->clear();
}





void serial_window::on_checkBox_clicked()
{


}

//hex发送按钮
void serial_window::on_pushButton_2_clicked()
{        
    tx_count += sendHex(ui->textEdit->toPlainText());
    TX_count->setNum(tx_count);//hex发送计数
}

//hex发送函数，返回发送的字节数量
int serial_window::sendHex(QString a)
{
    QByteArray c;
    int i;
    for(i=2;i<a.size();i=i+3)
    {
        if(a.at(i)!=' ')//格式判断
        {
          QMessageBox::warning(this,"格式错误！","16进制数之间请用空格隔开！");
          ui->auto_send->setCheckState(Qt::Unchecked);
          auto_send_timer->stop();
          return -1;
        }
    }

    for(i=0;i<a.size();i=i+3)
    {
        QByteArray b(a.mid(i,2).toLatin1());
        if(b.size()!=2)//16进制合法性判断
        {
           QMessageBox::warning(this,"格式错误！","请正确书写16进制格式！");
           ui->auto_send->setCheckState(Qt::Unchecked);
           auto_send_timer->stop();
           c.clear();
           return -1;
        }

          if(Converchar2realhex(b.at(0))==-1||Converchar2realhex(b.at(1))==-1)//字符合法性判断
          {
             QMessageBox::warning(this,"格式错误！","包含不正确字符,字符范围:( 0~9, a~f )");
             ui->auto_send->setCheckState(Qt::Unchecked);
             auto_send_timer->stop();
             c.clear();
             return -1;
          }
          else
          c +=(Converchar2realhex(b.at(0)))*16 + Converchar2realhex(b.at(1));//hex合成
       }
       serial->write(c);
       return c.size();//返回Hex字节数量
}


char serial_window::Converchar2realhex(char ch)
{
    if((ch >= '0') && (ch <= '9'))
                return ch-0x30;
            else if((ch >= 'A') && (ch <= 'F'))
                return ch-'A'+10;
            else if((ch >= 'a') && (ch <= 'f'))
                return ch-'a'+10;
            else return (-1);
}

//hex发送函数，返回发送的字节数量
int serial_window::sendHex_with_crc(QString a)
{
    QByteArray c;
    int i;
    for(i=2;i<a.size();i=i+3)
    {
        if(a.at(i)!=' ')//格式判断
        {
          QMessageBox::warning(this,"格式错误！","16进制数之间请用空格隔开！");
          ui->auto_send->setCheckState(Qt::Unchecked);
          auto_send_timer->stop();
          return -1;
        }
    }

    for(i=0;i<a.size();i=i+3)
    {
        QByteArray b(a.mid(i,2).toLatin1());
        if(b.size()!=2)//16进制合法性判断
        {
           QMessageBox::warning(this,"格式错误！","请正确书写16进制格式！");
           ui->auto_send->setCheckState(Qt::Unchecked);
           auto_send_timer->stop();
           c.clear();
           return -1;
        }

          if(Converchar2realhex(b.at(0))==-1||Converchar2realhex(b.at(1))==-1)//字符合法性判断
          {
             QMessageBox::warning(this,"格式错误！","包含不正确字符,字符范围:( 0~9, a~f )");
             ui->auto_send->setCheckState(Qt::Unchecked);
             auto_send_timer->stop();
             c.clear();
             return -1;
          }
          else
          c +=(Converchar2realhex(b.at(0)))*16 + Converchar2realhex(b.at(1));//hex合成
       }
       //加入crc校验
       unsigned int crc;
       char *buf = c.data();//QByteArray转char*
       crc = get_crc((unsigned char*) buf+3,c.size()-3);//获取CRC值
       c.append(crc&0xff);
       c.append((crc>>8)&0xff);
       //c[c.size()]=crc&0xff;
       //c[c.size()+1]=(crc>>8)&0xff;
       serial->write(c);
       return c.size();//返回Hex字节数量
}

unsigned short serial_window::get_crc(uchar *ptr,uchar len)
{
  uchar i;
  unsigned short crc = 0xFFFF;
  if(len==0) len=1;
  while(len--)
  {
    crc ^= *ptr;
    for(i=0;i<8;i++)
    {
      if(crc&1)
      {
        crc>>=1;
        crc ^= 0XA001;
      }
      else crc >>= 1;
    }
    ptr++;
  }
  return(crc);
}
//功能发送按钮1
void serial_window::on_send_button1_clicked()
{
    tx_count += sendHex_with_crc(ui->send_input1->text());
    TX_count->setNum(tx_count);
}

//功能发送按钮2
void serial_window::on_send_button2_clicked()
{
    tx_count += sendHex(ui->send_input2->text());
    TX_count->setNum(tx_count);
}

//功能发送按钮3
void serial_window::on_send_button3_clicked()
{
    tx_count += sendHex(ui->send_input3->text());
    TX_count->setNum(tx_count);
}

//自动发送按钮
void serial_window::on_auto_send_clicked()
{
    if(ui->auto_send->isChecked())
        auto_send_timer->start();
    else
        auto_send_timer->stop();
}

//发送时间设置
void serial_window::on_send_interval_valueChanged(int arg1)
{
    auto_send_timer->setInterval(arg1);
}

/*//////////////////////////////////////////////////////////////////////
  切换时关闭自动发送
void serial_window::on_send_check1_released()
{
    ui->auto_send->setCheckState(Qt::Unchecked);
    auto_send_timer->stop();
}

void serial_window::on_send_check2_released()
{
    ui->auto_send->setCheckState(Qt::Unchecked);
    auto_send_timer->stop();
}

void serial_window::on_send_check3_released()
{
    ui->auto_send->setCheckState(Qt::Unchecked);
    auto_send_timer->stop();
}
//////////////////////////////////////////////////////////////////////*/

//停止接收
void serial_window::on_stop_receive_clicked()
{
    if(ui->stop_receive->text()=="停止接收")
    {
        stop_receive=false;
        ui->stop_receive->setText("开始接收");
    }
    else
    {
        stop_receive=true;
        ui->stop_receive->setText("停止接收");
    }
}
