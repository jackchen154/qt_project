#include "zidgyikongjian.h"
#include <QSlider>//滑块控件
#include <QSpinBox>//微调器控件
#include <QHBoxLayout>//水平布局器
#include <QVBoxLayout>//垂直布局器
#include <QGridLayout>//网格布局器
#include <QLabel>
#include <QDebug>


zidgyikongjian::zidgyikongjian(QWidget *parent) : QWidget(parent)
{
  QSpinBox *spinbox = new QSpinBox(this);
  QSlider *slider = new QSlider(Qt::Horizontal,this);

  QLabel *label =new QLabel(this);
  //label->setFixedWidth(200);
  label->setText("这是一个自定义控件类：");
 //水平布局器
  QHBoxLayout *shuiping = new QHBoxLayout();//创建一个水平布局(因为要在UI中引用所以不指定父对象)
  shuiping->addWidget(spinbox);
  shuiping->addWidget(slider);//将部件加入布局器
  //setLayout(shuiping);//使能水平布局器
  //垂直布局器
  QVBoxLayout *chuizhi =new QVBoxLayout();
  chuizhi->addWidget(label);
  chuizhi->addLayout(shuiping);
  setLayout(chuizhi);//整体做垂直布局

   //数据变动时相互影响
   connect(spinbox,static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),slider, &QSlider::setValue);
   connect(slider, &QSlider::valueChanged,
           [=](){
                    spinbox->setValue(slider->value());
                   qDebug()<<spinbox->value();
                });
}


