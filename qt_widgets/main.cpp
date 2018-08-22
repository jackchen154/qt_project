#include "mywidget.h"
#include "myui.h"
#include "serial_window.h"
#include "dialog.h"
#include "TxPrnMod.h"
#include <QApplication>
#include <subwidgets.h>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*
     * 标准窗口的演示：
     * 1.设置窗口名称(QDockWidget)，窗口大小(resize)
     * 2.菜单栏(QMenuBar,QMenu,QAction)
     * 3.工具栏(QToolBar,QAction,addWidget)
     * 4.状态栏(QStatusBar,QLabel,addWidget,addPermanentWidget>右到左添加)
     * 5.核心控件（QTextEdit，setCentralWidget）,浮动窗口(QDockWidget，addDockWidget)
     * 6.模态对话框(使用QDialog.exec()阻塞)
     * 7.非模态对话框(直接show()，但使用setAttribute(Qt::WA_DeleteOnClose)关闭立即释放资源)
     * 8.带按钮的消息对话框(QMessageBox::about,QMessageBox::question)
     * 9.文件对话框(QFileDialog::getOpenFileName()可设置打开的类型，返回一个路径)
     * 10.信号和槽函数和lambd表达式
     * 11.带参数的和不带参数的槽函数
     * 12.发射一个信号进行主窗口和子窗口的切换
     * 13.Qfile读取一个TXT文件的例子
     * 14.用Qfile写一个.txt文件
     * 15.用QFileInfo显示文件的信息
     * 16.QDataStream数据流读写演示
     * 17.用QTextStream文本流进行读写操作
     * 18.用QBuffer内存文件进行读写
     */
    /*
    myWidget mainwindow;
    mainwindow.show();
    //*/


    /* 演示各种控件的效果
     * 1.行编辑器输入文本时自动补全姓名(QStringList,QCompleter)
     * 2.行编辑器使用密码显示(setEchoMode(QLineEdit::Password))
     * 3.Qlable显示图片(setPixmap)和gif动画(setMovie)，将lable设定为一个网络链接(setOpenExternalLinks(true))
     * 4.控件的样式表(setStyleSheet)
     * 5.进度条的操作(setMinimum,setMaximum,setValue)
     * 6.自定义控件(在UI中使用升级命令)以及使用代码进行布局(QHBoxLayout,QVBoxLayout)
     * 7.使用UI界面进行布局
     * 8.进行QThread多线程的操作
     */
    //*
    myui ui;
    ui.show();
    //*/


    /* 演示各种事件（定时器，键盘，鼠标，关闭，绘图）
     * 鼠标事件(mousePressEvent,mouseReleaseEvent,mouseMoveEvent)
     * 键盘事件(keyPressEvent)
     * 窗口事件(enterEvent,leaveEvent，closeEvent)
     * 定时器事件(timerEvent,startTimer,)
     * 绘图事件(paintEvent)
     * 事件的接收和忽略(e->accept(),e->ignore())
     */

    /*
    Dialog duihuak;
    duihuak.show();
    //*/

    /*串口界面
    serial_window Serial_Window;
    Serial_Window.setWindowTitle("串口助手(by:chenweiming)");
    QIcon ico("./image/mini_adapter.ico");
    Serial_Window.setWindowIcon(ico);
    Serial_Window.show();
    //*/
    return a.exec();
}

