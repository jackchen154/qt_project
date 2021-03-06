#include "mywidget.h"
#include <QDebug>//可以打印调试信息到控制台
#include <QMenuBar>//添加一个菜单栏(空的)
#include <QMenu>//向空白菜单栏添加菜单内容
#include <QToolBar>//添加一个工具栏
#include <QStatusBar>//添加一个状态栏
#include <QTextEdit>//添加一个文本编辑区
#include <QDockWidget>//添加一个浮动窗口
#include <QDialog>//创建模态和非模态对话框
#include <QMessageBox>//创建一个标准对话框(带按钮的)
#include <QFileDialog>//创建一个文件对话框(用于选择文件，返回一个字符串)
#include <QAction>//处理动作信号
#include <QFile>//文件操作
#include <QFileInfo>//显示文件的信息
#include <QDateTime>//用于时间转换
#include <QDataStream>//数据流操作(最终以二进制的格式进行读写)
#include <QTextStream>//文本流操作(只能操作文本，在读写文本时可以指定文字的编码格式)
#include <QBuffer>//内存文件，数据保存在内存中
#include <QFileDialog>
#include <QLabel>
#include <QPushButton>
//定义一个调试输出时显示所在的行
#define cout qDebug()<<"[ File:"<<__FILE__<<' '<<"Line:"<<__LINE__<<']'

myWidget::myWidget(QWidget *parent): QMainWindow(parent)
{
    /* 坐标系统：
     * 对于父窗口(主窗口)，坐标系统相对于屏幕
     * 原点在屏幕的左上角
     * X：往右递增 Y：往下递增
     *
     * 对于子窗口，其坐标系统相对于父窗口
     * 原点在父窗口空白区域左上角，不包括边框
    */

    //设置窗口名称
    setWindowTitle("父窗口");//等价于this->setWindowTitle("父窗口");
    //设置窗口大小
    resize(500,500);

    //菜单栏部分
    QMenuBar *caidanlan =menuBar();//新建一个菜单栏
    QMenu *cwenjian = caidanlan->addMenu("文件");//添加菜单
    QAction *dakaiac= cwenjian->addAction("打开");//添加菜单项，并返回一个动作
    //使用文件对话框打开一个文件，并读取里面的内容
    connect(dakaiac,&QAction::triggered,
            [=]()
            {
              QString dir = QFileDialog::getOpenFileName(this,"打开","C:/Users/jack/Desktop",
                                                         "TXT(*.txt);;WORLD(.wold)");
              QFileInfo info(dir);//显示文件信息
              QString info_str = QString("文件名：[%1]  "
                                         "文件后缀：[%2]  "
                                         "文件大小：[%3]  "
                                         "创建时间：[%4]  ")
                                         .arg(info.fileName())
                                         .arg(info.suffix())
                                         .arg(info.size())
                                         .arg(info.created().toString("yyyy-MM-dd"));
              statusbar_data->setText(info_str);//在状态栏中打印文件的信息

              if(!dir.isEmpty())//判断是否有该文件
              {
                 QFile txt_file(dir);//文件所在的路径
                 if(txt_file.open(QIODevice::ReadOnly)==true)//打开文件
                 {
                     /*读取文件
                     //一次性读取readall,读取文件默认只识别UTF8的编码，其他为乱码
                     QByteArray array = txt_file.readAll();
                     bianjiqu->setText(array);
                     */

                     //一行一行的读取
                     QByteArray array;
                     while(txt_file.atEnd() == false)//判断有无到达文件末尾
                     {
                         array += txt_file.readLine();//循环读取1行
                     }
                    QString txt=QString::fromLocal8Bit(array);//gb2312转换为utf8
                    bianjiqu->setText(txt);//将读取完毕的数据丢到文本编辑区
                 }
                 txt_file.close();//关闭文件
              }

            }
            );//处理按下新建按钮后的动作

    cwenjian->addSeparator();//添加一条分割线
    QAction *baocun = cwenjian->addAction("保存");//再添加一个菜单项
    connect(baocun,&QAction::triggered,
            [=]()
            {
                 QString path = QFileDialog::getSaveFileName(this,"保存","../","TXT(*.txt)");
                 if(!path.isEmpty())
                 {
                     QFile save_txt;//创建文件对象
                     save_txt.setFileName(path);//关联文件名字
                     if(save_txt.open(QIODevice::WriteOnly))//打开文件只读方式
                     {
                         QString a = wenbenbjq1->toPlainText();//将文本编辑区的内容加到a中
                         save_txt.write(a.toLocal8Bit());//写文件
                     }
                     save_txt.close();//关闭文件
                 }
            });

    //工具栏部分(工具栏是菜单项的快捷方式)
    QToolBar *gongjulan =addToolBar("gongjulan");//新建一个工具栏
    //A：
    gongjulan->addAction(dakaiac);//在工具栏上添加一个快捷方式
    //B：
    anniu = new QPushButton(this);
    anniu->setText("文本流写入");
    gongjulan->addWidget(anniu);//在工具栏添加一个按钮小控件
    connect(anniu,&QPushButton::clicked,this,&myWidget::text_stream_contr);


    //状态栏部分
    QStatusBar *zhuangtailan =statusBar();//添加一个状态栏
    statusbar_data = new QLabel(this);
    statusbar_data->setText("enpty file 空白 123");
    zhuangtailan->addWidget(statusbar_data);//使用addwidget是从左往右添加状态信息
    //B:
    zhuangtailan->addWidget(new QLabel("从左到右添加一个label",this));//以无名对象的方式添加
    //C:
    zhuangtailan->addPermanentWidget(new QLabel("从右向左添加一个label",this));//从右向左添加

    //核心控件部分
    //QTextEdit *bianjiqu = new QTextEdit(this);//创建一个文本编辑区对象
    bianjiqu = new QTextEdit(this);
    setCentralWidget(bianjiqu);//设置中心区域为文本编辑区

    //浮动窗口部分
    QDockWidget *fudongchuagk = new QDockWidget(this);
    addDockWidget(Qt::RightDockWidgetArea,fudongchuagk);
    wenbenbjq1 =new QTextEdit(this);
    fudongchuagk->setWidget(wenbenbjq1);//向浮动窗口添加一个文本编辑区


    //模态和非模态对话框部分
     QMenu *cduihuak = caidanlan->addMenu("模态非模态对话框");
     QAction *motaiduihuak = cduihuak->addAction("模态对话框");//对话框在出现的时候不能操作其他界面
     connect(motaiduihuak,&QAction::triggered,
             [=]()
             {
                QDialog motaiduihuakuang;//创建一个模态对话框,在运行exec()后被释放
                motaiduihuakuang.resize(300,300);

                QLabel *shuoming =new QLabel(&motaiduihuakuang);
                shuoming->move(0,150);
                shuoming->setText("这是一个模态对话框！必须先关掉才能继续操作!!");
                motaiduihuakuang.exec();//运行到此处停住堵塞，等待用户操作
                qDebug()<<"模态对话框";
             }
             );
     QAction *feimotaidhk = cduihuak->addAction("非模态对话框");//非模态对话框
     connect(feimotaidhk,&QAction::triggered,
             [=]()
             {
                /*采用局部变量的方法指定父对象，在整个程序结束后才释放资源
                 * 当多次点击该事件时，由于之前建立的对象没有释放，会不断动态分配空间，将会使得内存越用越少
                 * 所以像这种现象将不指定父对象
                */
                 //QDialog *feimotaiduihuakuang = new QDialog(this);
                 //feimotaiduihuakuang->show();//运行到这里后显示对话框继续运行
                 //qDebug()<<"非模态对话框";

                 QDialog *feimotaiduihuakuang = new QDialog();//不指定父对象
                 feimotaiduihuakuang->setAttribute(Qt::WA_DeleteOnClose);//设置对话框属性为关闭后立即释放资源
                 feimotaiduihuakuang->show();//运行到这里后显示对话框继续运行
                 qDebug()<<"非模态对话框";
             }
             );

        //标准对话框部分
        QMenu *guanyuapp = caidanlan->addMenu("消息对话框");
        //A:创建一个“关于对话框”,只带有一个"ok"按钮
        QAction *guanyuduihuakuang = guanyuapp->addAction("关于对话框");
        connect(guanyuduihuakuang,&QAction::triggered,
                [=]()
                {
                    //(指定父对象，关于对话框的标题，关于对话框的内容)
                    QMessageBox::about(this,"第一个软件","这个软件是我使用qt代码编写的软件! Ver:1.0.0");
                }
                );
        //B:创建一个“问题对话框”,默认有"yes"和"no"两个按钮
        QAction *wentiduihuakuang = guanyuapp->addAction("询问对话框(带按钮)");
        connect(wentiduihuakuang,&QAction::triggered,
                [=]()
                {
                    //(指定父对象，问题对话框的标题，指定的按键[枚举类型，可以使用“|”的方法指定多个按钮])
                    //有返回值，返回哪一个按键(枚举类型)被按下
                   int ret = QMessageBox::question(this,"保存确认：","是否保存文件？",QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel|QMessageBox::Ignore);
                   switch (ret) {
                   case QMessageBox::Yes:
                       qDebug()<<"yes被按下";
                       break;
                   case QMessageBox::No:
                       qDebug()<<"no被按下";
                       break;
                   default:
                       break;
                   }
                }
                );
        //C:创建一个文件对话框
        QAction *wenjduihuakuang = caidanlan->addAction("文件对话框");
        connect(wenjduihuakuang,&QAction::triggered,
                [=]()
                {
                    //(指定父对象，话框的标题,在那个位置打开的路径，
                    //文件格式过滤器："自定格式名(*.jpg *.gif);;edit(*.txt *exl);;all(*.*)")

                    //有返回值，返回所选文件的绝对路径（字符串型）
                   QString dir = QFileDialog::getOpenFileName(
                               this,
                               "打开",
                               "c:/",
                               "文本(*.txt);;souce(*.cpp *.h);;all(*.*)"
                               );
                   qDebug()<<dir;
                });
    //按钮1
    b1.setParent(this);
    b1.setText("关闭父窗口");

    //按钮2
    b2= new QPushButton(this);//通过构造函数传参指定父对象
    b2->setText("数据流写入");

    //按钮3
    b3.setParent(this);
    b3.setText("显示子窗口");

    gongjulan->addWidget(&b1);
    gongjulan->addWidget(b2);
    gongjulan->addWidget(&b3);
    /* 当使用动态分配的方式(new)定义一个对象时，程序结束需要进行内存回收，
     * 否则会内存泄露。要执行delete让对象执行析构函数
     *
     * 在窗口组合不断指定父对象后QT会在内部生成一个对象树，
     * 在程序结束时，内存回收的过程将从树枝到树干逐级释放自动回收，自动执行析构函数
     * 综上所述：
     * 在指定父对象且直接或间接继承于QObject,子对象如果是动态分配空间new的，
     * 不需要手动delete释放，QT有自动回收的机制
    */
    //按钮4
      QPushButton *b4 = new QPushButton(this);
      b4->setText("lambda表达式");
      b4->move(0,100);
      gongjulan->addWidget(b4);


    //信号槽可以理解为硬件的中断机制，有中断产生立即去处理中断事件
    connect(&b1,&QPushButton::clicked,this,&myWidget::close);//处理标准槽函数
    /*
    &b1                  :信号发出者指针类型
    &QPushButton::clicked:处理的信号 &发送者的类名::信号名字
    this                 :信号接收者
    &myWidget::close     :槽函数，也就是信号处理函数 &这个接收者属于哪个类的::槽函数名字
    */
    connect(b2,&QPushButton::released,this,&myWidget::data_stream_contr);//处理自定义槽函数
    /*
    自定义槽，和普通函数的用法相同
    1. QT5支持的槽函数可以是：任意的成员函数，普通全局函数，静态函数
    2.槽函数需要与信号一致(参数，返回值)
    3.由于信号没有返回值，所以槽函数一定没有返回值
    4.同一个信号可以有多个槽函数
    5.信号是给槽函数传参的
    */

    //按下按钮3进行窗口切换
    connect(&b3,&QPushButton::clicked,this,&myWidget::anxia_b3);

    /*连接信号带参数的槽函数(并且信号是重载的)
     * 信号重载会产生二异性(因为是同名不知道用哪一个)，所以使用函数指针去转换：
     * void func(int)
     * {
     * }
     * void (*p)(int)=func;//定义一个函数指针指向func函数
    */
    //当切换到子窗口后切换回父窗口需要使用signal信号进行切换
    //该为含有signal信号的信号槽(不带参数)
    void (subwidgets::* sub_ch_sigal_budaican)()=subwidgets::sub_ch_sigal;
    connect(&subwindow,sub_ch_sigal_budaican,this,&myWidget::chuli_sub);

    ////该为含有signal信号的信号槽(带参数)
    void (subwidgets::* sub_ch_sigal_daican)(int,QString)=subwidgets::sub_ch_sigal;
    connect(&subwindow,sub_ch_sigal_daican,this,&myWidget::chuli_sub_daican);
    //*/

    /*实现的第二种方法(使用宏)
     * 使用槽函数时在类定义中使用slots关键字修饰
     * SIGNAL和SLOT是宏的关键字它会将函数名字转化为字符串，将导致不进行错误检查
     * 所以以下方式虽然比较方便但是会容易出错
     */
    connect(&subwindow,SIGNAL(sub_ch_sigal()),this,SLOT(chuli_sub()));
    connect(&subwindow,SIGNAL(sub_ch_sigal(int,QString)),this,SLOT(chuli_sub_daican(int,QString)));
    //*/

    /*实现的第三种方法(使用lambda表达式)
     * lambd表达式是c++11增加的新特性，是一个匿名函数对象使用[]代替，在QT中应用于信号槽
     * 在项目文件中增加：CONFIG += C++11
     *lambda表达式的格式如下：
     * []() mutable exception -> int
     * {
     *   return n;
     * }
     *方括号的作用就是把外部变量传进来比如：
     * [b4]把b4这个成员传进来
     * [b4,a,b]把b4以及普通a,b变量传进来
     * [=]把作用域中的所有局部变量，类中的所有成以值的方式(如外部a=10)传进来,
     * 但以值传进的方式是只读的，在{}内不可以对a这个变量进行写操作,解决方法如下：
     * [=]() mutable 将上述所有变量以读写的方式传进来
     * [this]将类中成员以值的方式传进来
     * [&]&为引用符号，以引用的方式传进来(所有的局部变量不包括类中成员)，但该种方法
     * 在操作控件的时候由于资源没有得到释放，在访问内存的时候将不能得到正确的结果。
     *
     * ()圆括号的作用就是接收信号传过来的的参数如在操作一个按钮按下时：
     * [=](bool button_status)//将按钮按下的fase参数传进来
     * {
     *   qDebug()<<"the button status is:"<<button_status;
     * }
     */

     int a= 159,b=246;
    connect(b4,&QPushButton::clicked,
            [=](bool button_status) mutable
            {
               a = 789;
               cout<<"aaaaa "<<a<<" "<<b;
               cout<<"the button status is:"<<button_status;
            });


}


void myWidget::chuli_sub_daican(int a, QString str)
{
    //qDebug()的用法与c++的cout的用法相同
    qDebug() << "收到的整数是："<< a <<"\n收到的字符串是："<<str;
    //对QString可以做类型转换：由QString转换为char *
    qDebug() << "收到的整数是："<< a <<"\n收到的字符串是："<<str.toUtf8().data();

}


void myWidget::chuli_sub()//自定义的槽函数子窗口的处理函数
{
    show();
    subwindow.hide();
}

//QDataStream数据流读写演示
void myWidget::data_stream_contr()//自定义的槽函数
{
    if(b2->text()=="数据流写入")
    {

        QFile file("../stream.txt");//创建文件对象
        if(file.open(QIODevice::WriteOnly)==1)//打开文件
        {
           QDataStream stream(&file); //创建一个数据流并指定输入对象(往数据流里面写东西相当于往文件里写)
           //向数据流写入东西使用cout的方法使用<<
           stream << QString("我是数据流格式") << 1580;//按照顺序向数据流分别写入一个字符串和一个整形数据
           file.close();
           statusbar_data->setText("数据流写入成功！");
        }
        else
            statusbar_data->setText("数据流写入失败！");
        b2->setText("数据流读取");
    }
    else//数据流读取部分
    {
        QFile file("../stream.txt");//创建文件对象
        if(file.open(QIODevice::ReadOnly)==1)//打开文件
        {
           QDataStream stream(&file); //创建一个数据流并指定输入对象(往数据流里面读东西相当于往文件里读)

           QString str;
           int value;
           //向数据流读取使用cout的方法使用>>,怎么写的就怎么读出来,顺序不能相反
           stream >> str >> value;
           file.close();
           statusbar_data->setText(QString("数据流读取成功！ Qstring:%1  Int:%2").arg(str).arg(value));
        }
        else
            statusbar_data->setText("数据流写入失败！");
        b2->setText("数据流写入");
    }
}

//文本流读写
void myWidget::text_stream_contr()
{
    if(anniu->text()=="文本流写入")
    {

        QFile file("../text_stream.txt");//创建文件对象
        if(file.open(QIODevice::WriteOnly)==1)//打开文件
        {
           QTextStream stream(&file); //创建一个文本流并指定输入对象(往数据流里面写东西相当于往文件里写)
           //指定文本流的编码格式
           stream.setCodec("UTF-8");
           //向文本流写入东西使用cout的方法使用<<
           stream << QString("我是文本流格式") << 1580;//按照顺序向数据流分别写入一个字符串和一个整形数据
           file.close();
           statusbar_data->setText("文本流写入成功！");
        }
        else
            statusbar_data->setText("文本流写入失败！");
        anniu->setText("文本流读取");
    }
    else//数据流读取部分
    {
        QFile file("../text_stream.txt");//创建文件对象
        if(file.open(QIODevice::ReadOnly)==1)//打开文件
        {
           QTextStream stream(&file); //创建一个数据流并指定输入对象(往数据流里面读东西相当于往文件里读)
           stream.setCodec("UTF-8");
           //文本流的读取不能像数据流那样可以区分字符串和整型数据，读出来的全部是字符
           QString buf = stream.readAll();
           statusbar_data->setText(buf);
        }
        else
            statusbar_data->setText("文本流读取失败！");
        b2->setText("文本流写入");
    }
}

void myWidget::anxia_b3()//按下按钮3的处理槽函数
{
    this->hide();
    subwindow.show();
}
myWidget::~myWidget()
{

}
