/********************************************************************************
** Form generated from reading UI file 'main_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_UI_H
#define UI_MAIN_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_ui
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLabel *idjiguan;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLabel *idyouxiaoqi;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *idname;
    QLabel *idphoto;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *idsex;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *idmin_zu;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *idyear;
    QLabel *label_5;
    QLabel *idmonth;
    QLabel *label_6;
    QLabel *idday;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLabel *idaddress;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLabel *ididmun;

    void setupUi(QDialog *main_ui)
    {
        if (main_ui->objectName().isEmpty())
            main_ui->setObjectName(QStringLiteral("main_ui"));
        main_ui->resize(438, 344);
        groupBox = new QGroupBox(main_ui);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(14, 244, 405, 84));
        groupBox->setMinimumSize(QSize(307, 0));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 22, 287, 23));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(86, 21));
        label_10->setMaximumSize(QSize(86, 21));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);

        horizontalLayout_6->addWidget(label_10);

        idjiguan = new QLabel(widget);
        idjiguan->setObjectName(QStringLiteral("idjiguan"));
        idjiguan->setMinimumSize(QSize(193, 0));
        idjiguan->setFont(font);

        horizontalLayout_6->addWidget(idjiguan);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 51, 318, 23));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(67, 16777215));
        label_11->setFont(font);

        horizontalLayout_7->addWidget(label_11);

        idyouxiaoqi = new QLabel(widget1);
        idyouxiaoqi->setObjectName(QStringLiteral("idyouxiaoqi"));
        idyouxiaoqi->setMaximumSize(QSize(243, 16777215));
        idyouxiaoqi->setFont(font);

        horizontalLayout_7->addWidget(idyouxiaoqi);

        groupBox_2 = new QGroupBox(main_ui);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(14, 8, 391, 217));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(47, 16777215));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        idname = new QLabel(groupBox_2);
        idname->setObjectName(QStringLiteral("idname"));
        idname->setMinimumSize(QSize(113, 0));
        idname->setFont(font);

        horizontalLayout->addWidget(idname);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        idphoto = new QLabel(groupBox_2);
        idphoto->setObjectName(QStringLiteral("idphoto"));
        idphoto->setMinimumSize(QSize(102, 126));
        idphoto->setMaximumSize(QSize(102, 126));
        idphoto->setFont(font);

        gridLayout->addWidget(idphoto, 0, 1, 4, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(47, 16777215));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        idsex = new QLabel(groupBox_2);
        idsex->setObjectName(QStringLiteral("idsex"));
        idsex->setMinimumSize(QSize(27, 0));
        idsex->setMaximumSize(QSize(27, 16777215));
        idsex->setFont(font);

        horizontalLayout_2->addWidget(idsex);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(47, 16777215));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        idmin_zu = new QLabel(groupBox_2);
        idmin_zu->setObjectName(QStringLiteral("idmin_zu"));
        idmin_zu->setMinimumSize(QSize(86, 0));
        idmin_zu->setMaximumSize(QSize(86, 16777215));
        idmin_zu->setFont(font);

        horizontalLayout_2->addWidget(idmin_zu);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(47, 16777215));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        idyear = new QLabel(groupBox_2);
        idyear->setObjectName(QStringLiteral("idyear"));
        idyear->setMinimumSize(QSize(54, 0));
        idyear->setMaximumSize(QSize(54, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Yu Gothic"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        idyear->setFont(font1);

        horizontalLayout_3->addWidget(idyear);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(17, 21));
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);

        idmonth = new QLabel(groupBox_2);
        idmonth->setObjectName(QStringLiteral("idmonth"));
        idmonth->setMinimumSize(QSize(27, 21));
        idmonth->setFont(font1);

        horizontalLayout_3->addWidget(idmonth);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(23, 21));
        label_6->setFont(font);

        horizontalLayout_3->addWidget(label_6);

        idday = new QLabel(groupBox_2);
        idday->setObjectName(QStringLiteral("idday"));
        idday->setMinimumSize(QSize(27, 21));
        idday->setFont(font1);

        horizontalLayout_3->addWidget(idday);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(23, 21));
        label_7->setFont(font);

        horizontalLayout_3->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(57, 16777215));
        label_8->setFont(font);

        horizontalLayout_5->addWidget(label_8);

        idaddress = new QLabel(groupBox_2);
        idaddress->setObjectName(QStringLiteral("idaddress"));
        idaddress->setMinimumSize(QSize(193, 59));
        idaddress->setFont(font);
        idaddress->setWordWrap(true);

        horizontalLayout_5->addWidget(idaddress);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(147, 0));
        label_9->setMaximumSize(QSize(195, 16777215));
        label_9->setFont(font);

        horizontalLayout_4->addWidget(label_9);

        ididmun = new QLabel(groupBox_2);
        ididmun->setObjectName(QStringLiteral("ididmun"));
        ididmun->setMinimumSize(QSize(203, 25));
        ididmun->setMaximumSize(QSize(203, 0));
        ididmun->setFont(font1);

        horizontalLayout_4->addWidget(ididmun);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 2);


        retranslateUi(main_ui);

        QMetaObject::connectSlotsByName(main_ui);
    } // setupUi

    void retranslateUi(QDialog *main_ui)
    {
        main_ui->setWindowTitle(QApplication::translate("main_ui", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("main_ui", "\350\203\214\351\235\242", Q_NULLPTR));
        label_10->setText(QApplication::translate("main_ui", "\347\255\276\345\217\221\346\234\272\345\205\263\357\274\232", Q_NULLPTR));
        idjiguan->setText(QString());
        label_11->setText(QApplication::translate("main_ui", "\346\234\211\346\225\210\346\234\237\357\274\232", Q_NULLPTR));
        idyouxiaoqi->setText(QString());
        groupBox_2->setTitle(QApplication::translate("main_ui", "\346\255\243\351\235\242", Q_NULLPTR));
        label->setText(QApplication::translate("main_ui", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        idname->setText(QApplication::translate("main_ui", "\351\231\210\345\250\201\345\220\215", Q_NULLPTR));
        idphoto->setText(QString());
        label_2->setText(QApplication::translate("main_ui", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        idsex->setText(QString());
        label_3->setText(QApplication::translate("main_ui", "\346\260\221\346\227\217\357\274\232", Q_NULLPTR));
        idmin_zu->setText(QString());
        label_4->setText(QApplication::translate("main_ui", "\345\207\272\347\224\237\357\274\232", Q_NULLPTR));
        idyear->setText(QString());
        label_5->setText(QApplication::translate("main_ui", "\345\271\264", Q_NULLPTR));
        idmonth->setText(QString());
        label_6->setText(QApplication::translate("main_ui", "\346\234\210", Q_NULLPTR));
        idday->setText(QString());
        label_7->setText(QApplication::translate("main_ui", "\346\227\245", Q_NULLPTR));
        label_8->setText(QApplication::translate("main_ui", "\344\275\217\345\235\200\357\274\232", Q_NULLPTR));
        idaddress->setText(QString());
        label_9->setText(QApplication::translate("main_ui", "\345\205\254\346\260\221\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201\357\274\232", Q_NULLPTR));
        ididmun->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class main_ui: public Ui_main_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_UI_H