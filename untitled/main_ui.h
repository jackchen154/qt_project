#ifndef MAIN_UI_H
#define MAIN_UI_H

#include <QDialog>
#include <QString>
#include "mt_32.h"
namespace Ui {
class main_ui;
}

class main_ui : public QDialog
{
    Q_OBJECT

public:
    explicit main_ui(QWidget *parent = 0);
    char id_devid[200];
    int m1duqu_state=0;
    HANDLE ICReader;
    ~main_ui();

private slots:
    void on_xie_shanqu_clicked();

    void on_kaishiduqu_clicked();

private:
    Ui::main_ui *ui;
    void timerEvent(QTimerEvent *time);
    int timerID=0;
    int timer2ID=0;
    void M1card_xieshanqu(int shanqumun,QString str);//M1卡写一个扇区(最多24个汉字或48个字符)
    void M1card_dushanqu(int shanqumun);//读一个扇区的所有数据
};

#endif // MAIN_UI_H
