#include "myui.h"
#include "ui_myui.h"
#include <QDebug>
#include <QCompleter>//用于文本补全
#include <QStringList>//字符串列表
myui::myui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myui)
{
    ui->setupUi(this);
    //行编辑器的设置
    ui->password->setTextMargins(12,0,0,0);//设定行编辑器显示文本的位置(像素单位)
    ui->password->setEchoMode(QLineEdit::Password);//密码显示模式
    //行编辑器的文本补全
    QStringList namelist;
    namelist <<"jack"<<"jackchen"<<"jaja"<<"maike";//创建一个字符串列表
    QCompleter * namecomplet =new QCompleter(namelist,this);//创建补全器，传入字符列表
    namecomplet->setCaseSensitivity(Qt::CaseInsensitive);//补全不区分大小写
    ui->name->setCompleter(namecomplet);
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
