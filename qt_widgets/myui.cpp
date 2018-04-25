#include "myui.h"
#include "ui_myui.h"
#include "zidgyikongjian.h"
#include <QDebug>
#include <QCompleter>//用于文本补全
#include <QStringList>//字符串列表
#include <QMovie>//用于播放gif动画
myui::myui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myui)
{

    ui->setupUi(this);
    //行编辑器的设置
    ui->password->setTextMargins(12,0,0,0);//设定行编辑器显示文本的位置(像素单位)
    ui->password->setEchoMode(QLineEdit::Password);//密码显示模式
    ui->password->setText("182499467");
    //行编辑器的文本补全
    QStringList namelist;
    namelist <<"jack"<<"jackchen"<<"jaja"<<"maike";//创建一个字符串列表
    QCompleter * namecomplet =new QCompleter(namelist,this);//创建补全器，传入字符列表
    namecomplet->setCaseSensitivity(Qt::CaseInsensitive);//补全不区分大小写
    ui->name->setCompleter(namecomplet);//将补全器应用到姓名输入栏
    ui->name->setText("ja");

    //Qlabel操作
    //A：
    ui->label_tupain->setPixmap(QPixmap("://image/meinv.png"));//给label放上一张图片
    ui->label_tupain->setScaledContents(true);//图片自适应
    //B：
    QMovie *gifdong = new QMovie("://image/huochairen.gif");//添加一个动画
    ui->label_gifdonghua->setMovie(gifdong);//将动画应用到标签
    ui->label_gifdonghua->setScaledContents(true);//自适应窗口
    gifdong->start();//启动动画
    //C：
    ui->label_html->setText("<h1><a href=\""
                            "https://www.baidu.com\">"
                            "百度一下</a></h1>");//打开一个url,设置thml格式的link
    ui->label_html->setOpenExternalLinks(true);//点击后打开link

    //进度条设置部分
    ui->jindutiao->setMinimum(0);//设定最大值
    ui->jindutiao->setMaximum(100);//设定最小值
    //ui->jindutiao->setValue(13);//设定当前值

    //样式表
    ui->textEdit->setText("请输入文字：");
    ui->textEdit->setStyleSheet("background-color:green;color:bule;font:75 15pt Aharoni;");
}

myui::~myui()
{
    delete ui;
}



void myui::on_pushButton_clicked()
{
    static int i=0;
    ui->tabWidget->setCurrentIndex(i++ %2);//切换页面
}

//行编辑器操作部分
void myui::on_pushButton_3_clicked()
{
   QString str = ui->password->text();//获取行编辑器的输入值
   qDebug()<<str;
}
