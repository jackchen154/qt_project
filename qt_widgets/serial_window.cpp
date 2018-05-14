#include "serial_window.h"
#include "ui_serial_window.h"
#include <QDebug>
#include <QMessageBox>
serial_window::serial_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::serial_window)
{
    ui->setupUi(this);
    statusbar_data = new QLabel(this);
    ui->statusbar->addWidget(statusbar_data);//使用addwidget是从左往右添加状态信息
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

        serial->open(QIODevice::ReadWrite); //打开串口
        //连接信号槽
        QObject::connect(serial, &QSerialPort::readyRead, this, &serial_window::Read_Data);
    }
    else
    {
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

    }

}


void serial_window::on_sendButton_clicked()
{
    serial->write(ui->textEdit->toPlainText().toLocal8Bit());
   // serial->write(ui->textEdit->toPlainText().toUtf8());
}

//读取接收到的数据
void serial_window::Read_Data()
{
    QByteArray buf;
    QString strDisplay;
    buf = serial->readAll();
    //int byteLen = serial->bytesAvailable()； //返回串口缓冲区字节数

    if(!buf.isEmpty())//如果数据不为空
    {
       // QString str = ui->textBrowser->toPlainText();  //l继续联接之前的数据追加新的数据
        //ui->textBrowser->clear();
        QString str;
        if(this->ui->checkBox->isChecked())  //如果是,就以16进制显示
        {
            str=buf.toHex().data();
            for(int i=0;i<str.length();i+=2)
            {
              //strDisplay += "0x";
              QString st = str.mid(i,2);
              strDisplay += st.toUpper();
              strDisplay += " ";
            }
            ui->textBrowser->insertPlainText(strDisplay);

        }
        else
        {
           ui->textBrowser->insertPlainText(QString::fromLocal8Bit(buf));
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

//hex发送
void serial_window::on_pushButton_2_clicked()
{    
  sendHex(ui->textEdit->toPlainText());
}

int serial_window::sendHex(QString a)
{
    QByteArray c;
    int i;
    for(i=2;i<a.size();i=i+3)
    {
        if(a.at(i)!=' ')//格式判断
        {
          QMessageBox::warning(this,"格式错误！","16进制数之间请用空格隔开！");
          return -1;
        }
    }

    for(i=0;i<a.size();i=i+3)
    {
        QByteArray b(a.mid(i,2).toLatin1());
        if(b.size()!=2)//16进制合法性判断
        {
           QMessageBox::warning(this,"格式错误！","请正确书写16进制格式！");
           c.clear();
           return -1;
        }

          if(Converchar2realhex(b.at(0))==-1||Converchar2realhex(b.at(1))==-1)
          {
             QMessageBox::warning(this,"格式错误！","包含不正确字符,字符范围:0~9,a~f)");
             c.clear();
             return -1;
          }
          else
          c +=(Converchar2realhex(b.at(0)))*16 + Converchar2realhex(b.at(1));
       }
       serial->write(c);
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


