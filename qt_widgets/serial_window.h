#ifndef SERIAL_WINDOW_H
#define SERIAL_WINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "QLabel"
namespace Ui {
class serial_window;
}

class serial_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit serial_window(QWidget *parent = 0);
    QLabel *statusbar_data;
    QByteArray QString2Hex(QString str);
    char Converchar2realhex(char ch);
    int sendHex(QString a);
    ~serial_window();

private slots:
    void on_openButton_clicked();

    void on_sendButton_clicked();
    void Read_Data();
    void on_clear_clicked();
    void on_clearsend_clicked();
    void on_checkBox_clicked();
   void on_pushButton_2_clicked();



private:
    Ui::serial_window *ui;
    QSerialPort *serial;
};

#endif // SERIAL_WINDOW_H
