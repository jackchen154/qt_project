#ifndef MYUI2_H
#define MYUI2_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QLabel>
namespace Ui {
class myui2;
}

class myui2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit myui2(QWidget *parent = 0);
    ~myui2();

private:
    Ui::myui2 *ui;


};

#endif // MYUI2_H
