#ifndef MYUI_H
#define MYUI_H

#include <QMainWindow>

namespace Ui {
class myui;
}

class myui : public QMainWindow
{
    Q_OBJECT

public:
    explicit myui(QWidget *parent = 0);
    ~myui();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::myui *ui;
};

#endif // MYUI_H
