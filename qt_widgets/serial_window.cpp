#include "serial_window.h"
#include "ui_serial_window.h"
#include <QDebug>
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
        //qDebug() << "Name : " << info.portName();
       // qDebug() << "Description : " << info.description();
       // qDebug() << "Manufacturer: " << info.manufacturer();
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->PortBox->addItem(serial.portName());
            serial.close();

        }
    }


    ui->BaudBox->setCurrentIndex(3);    //设置波特率下拉菜单默认显示第三项
    ui->sendButton->setEnabled(false);  //关闭发送按钮的使能

    qDebug() << tr("界面设定成功！");

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

        serial->open(QIODevice::ReadWrite); //打开串口

        serial->setBaudRate(ui->BaudBox->currentText().toInt());   //设置波特率

        switch(ui->BitNumBox->currentIndex())  //设置数据位
        {
              case 8: serial->setDataBits(QSerialPort::Data8); break;
              default: break;
        }

        switch(ui->ParityBox->currentIndex())  //设置奇偶校验
        {
           case 0: serial->setParity(QSerialPort::NoParity); break;
           default: break;
        }

        switch(ui->StopBox->currentIndex())   //设置停止位
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

        statusbar_data->setText(QString ("%1已经打开 设备厂商：%2 设备描述：%3").arg(info.portName()).arg(info.manufacturer()).arg(info.description()));

        //B:
       // zhuangtailan->addWidget(new QLabel("从左到右添加一个label",this));//以无名对象的方式添加
        //C:
        //zhuangtailan->addPermanentWidget(new QLabel("从右向左添加一个label",this));//从右向左添加
        //关闭串口设置使能
        ui->PortBox->setEnabled(false);
        ui->BaudBox->setEnabled(false);
        ui->BitNumBox->setEnabled(false);
        ui->ParityBox->setEnabled(false);
        ui->StopBox->setEnabled(false);

        ui->openButton->setText(tr("关闭串口"));
        ui->sendButton->setEnabled(true);
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
    }

}


void serial_window::on_sendButton_clicked()
{
    serial->write(ui->textEdit->toPlainText().toLatin1());
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
              strDisplay += "0x";
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
