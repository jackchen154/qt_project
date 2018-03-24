#ifndef SUBWIDGETS_H
#define SUBWIDGETS_H

#include <QWidget>
#include<QPushButton>
class subwidgets : public QWidget
{
    Q_OBJECT
public:
    explicit subwidgets(QWidget *parent = nullptr);
    void send_sigal();
    void send_sigal_daican();

signals:
/*
 * signals这个关键字是QT特有的，信号槽也是QT特有并非标准的c++
 * 信号必须要有signals这个关键字来声明
 * 信号没有返回值，但是可以有参数
 * 信号只需声明不需要定义:void mysigal();
 * 使用方法：emit mysignal();既可以发射一个信号
 * 信号可以重载(函数名相同，参数不同)
 */
    void sub_ch_sigal();//不带参数的信号
    void sub_ch_sigal(int,QString);//带参数的信号

private:
    QPushButton sub_qiehuan;

public slots:
};

#endif // SUBWIDGETS_H
