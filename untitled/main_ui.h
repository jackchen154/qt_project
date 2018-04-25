#ifndef MAIN_UI_H
#define MAIN_UI_H

#include <QDialog>

namespace Ui {
class main_ui;
}

class main_ui : public QDialog
{
    Q_OBJECT

public:
    explicit main_ui(QWidget *parent = 0);
    char id_devid[200];
    ~main_ui();

private:
    Ui::main_ui *ui;
    void timerEvent(QTimerEvent *time);
    int timerID;
};

#endif // MAIN_UI_H
