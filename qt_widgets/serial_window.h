#ifndef SERIAL_WINDOW_H
#define SERIAL_WINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTextCodec>
#include <QTextCursor>
#include <QLabel>
#include <QTimer>
namespace Ui {
class serial_window;
}

class serial_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit serial_window(QWidget *parent = 0);
    QLabel *statusbar_data;
    QTimer *auto_send_timer;
    QTextCodec *textcodec;
    QLabel *RX_count;
    QLabel *TX_count;
    QTextCursor texteditcursor;
    int rx_count=0,tx_count=0;
    bool stop_receive=1;
    QByteArray QString2Hex(QString str);
    char Converchar2realhex(char ch);
    int sendHex(QString a);
    unsigned short get_crc(uchar *ptr,uchar len);
    int sendHex_with_crc(QString a);
    ~serial_window();

private slots:
    void on_openButton_clicked();

    void on_sendButton_clicked();//send char
    void Read_Data();
    void on_clear_clicked();
    void on_clearsend_clicked();
    void on_checkBox_clicked();
   void on_pushButton_2_clicked();//send HEX



   void on_send_button1_clicked();

   void on_send_button2_clicked();

   void on_send_button3_clicked();

   void on_auto_send_clicked();

   void on_send_interval_valueChanged(int arg1);
   void on_stop_receive_clicked();

private:
    Ui::serial_window *ui;
    QSerialPort *serial;
    //void timerEvent(QTimerEvent *event);
    //int timerID;
};

#endif // SERIAL_WINDOW_H
