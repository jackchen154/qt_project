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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_ui
{
public:
    QGridLayout *gridLayout_2;
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
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *label_14;
    QLineEdit *shanqu_txt_in;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QComboBox *sanqu_mun;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *xie_shanqu;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *kaishiduqu;
    QTextBrowser *duqu_jieguo;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLabel *idjiguan;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLabel *idyouxiaoqi;

    void setupUi(QDialog *main_ui)
    {
        if (main_ui->objectName().isEmpty())
            main_ui->setObjectName(QStringLiteral("main_ui"));
        main_ui->resize(787, 344);
        gridLayout_2 = new QGridLayout(main_ui);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_2 = new QGroupBox(main_ui);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(47, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        idname = new QLabel(groupBox_2);
        idname->setObjectName(QStringLiteral("idname"));
        idname->setMinimumSize(QSize(113, 0));
        idname->setFont(font1);

        horizontalLayout->addWidget(idname);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        idphoto = new QLabel(groupBox_2);
        idphoto->setObjectName(QStringLiteral("idphoto"));
        idphoto->setMinimumSize(QSize(102, 126));
        idphoto->setMaximumSize(QSize(102, 126));
        idphoto->setFont(font1);

        gridLayout->addWidget(idphoto, 0, 1, 4, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(47, 16777215));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        idsex = new QLabel(groupBox_2);
        idsex->setObjectName(QStringLiteral("idsex"));
        idsex->setMinimumSize(QSize(27, 0));
        idsex->setMaximumSize(QSize(27, 16777215));
        idsex->setFont(font1);

        horizontalLayout_2->addWidget(idsex);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(47, 16777215));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        idmin_zu = new QLabel(groupBox_2);
        idmin_zu->setObjectName(QStringLiteral("idmin_zu"));
        idmin_zu->setMinimumSize(QSize(86, 0));
        idmin_zu->setMaximumSize(QSize(86, 16777215));
        idmin_zu->setFont(font1);

        horizontalLayout_2->addWidget(idmin_zu);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(47, 16777215));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        idyear = new QLabel(groupBox_2);
        idyear->setObjectName(QStringLiteral("idyear"));
        idyear->setMinimumSize(QSize(54, 0));
        idyear->setMaximumSize(QSize(54, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("Yu Gothic"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        idyear->setFont(font2);

        horizontalLayout_3->addWidget(idyear);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(17, 21));
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        idmonth = new QLabel(groupBox_2);
        idmonth->setObjectName(QStringLiteral("idmonth"));
        idmonth->setMinimumSize(QSize(27, 21));
        idmonth->setFont(font2);

        horizontalLayout_3->addWidget(idmonth);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(23, 21));
        label_6->setFont(font1);

        horizontalLayout_3->addWidget(label_6);

        idday = new QLabel(groupBox_2);
        idday->setObjectName(QStringLiteral("idday"));
        idday->setMinimumSize(QSize(27, 21));
        idday->setFont(font2);

        horizontalLayout_3->addWidget(idday);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(23, 21));
        label_7->setFont(font1);

        horizontalLayout_3->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(57, 16777215));
        label_8->setFont(font1);

        horizontalLayout_5->addWidget(label_8);

        idaddress = new QLabel(groupBox_2);
        idaddress->setObjectName(QStringLiteral("idaddress"));
        idaddress->setMinimumSize(QSize(193, 59));
        idaddress->setFont(font1);
        idaddress->setWordWrap(true);

        horizontalLayout_5->addWidget(idaddress);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(147, 21));
        label_9->setMaximumSize(QSize(147, 16777215));
        label_9->setFont(font1);

        horizontalLayout_4->addWidget(label_9);

        ididmun = new QLabel(groupBox_2);
        ididmun->setObjectName(QStringLiteral("ididmun"));
        ididmun->setMinimumSize(QSize(86, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("Aharoni"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        ididmun->setFont(font3);

        horizontalLayout_4->addWidget(ididmun);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 2);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(main_ui);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(323, 325));
        groupBox_3->setMaximumSize(QSize(323, 325));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(11);
        groupBox_3->setFont(font4);
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(71, 19));
        label_14->setMaximumSize(QSize(71, 19));
        label_14->setFont(font4);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_14);

        shanqu_txt_in = new QLineEdit(groupBox_3);
        shanqu_txt_in->setObjectName(QStringLiteral("shanqu_txt_in"));
        shanqu_txt_in->setMinimumSize(QSize(299, 35));
        shanqu_txt_in->setMaximumSize(QSize(299, 35));
        shanqu_txt_in->setTabletTracking(false);
        shanqu_txt_in->setAutoFillBackground(false);
        shanqu_txt_in->setDragEnabled(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, shanqu_txt_in);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(72, 23));
        label_13->setMaximumSize(QSize(72, 23));
        label_13->setBaseSize(QSize(79, 19));
        label_13->setFont(font4);

        horizontalLayout_8->addWidget(label_13);

        sanqu_mun = new QComboBox(groupBox_3);
        sanqu_mun->setObjectName(QStringLiteral("sanqu_mun"));
        sanqu_mun->setMinimumSize(QSize(41, 25));
        sanqu_mun->setMaximumSize(QSize(41, 25));
        sanqu_mun->setBaseSize(QSize(37, 19));

        horizontalLayout_8->addWidget(sanqu_mun);

        horizontalSpacer_2 = new QSpacerItem(76, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        xie_shanqu = new QPushButton(groupBox_3);
        xie_shanqu->setObjectName(QStringLiteral("xie_shanqu"));
        xie_shanqu->setMinimumSize(QSize(81, 27));
        xie_shanqu->setMaximumSize(QSize(81, 27));

        horizontalLayout_8->addWidget(xie_shanqu);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_8);

        line = new QFrame(groupBox_3);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(329, 16));
        line->setMaximumSize(QSize(329, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(3, QFormLayout::LabelRole, line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(89, 19));
        label_12->setMaximumSize(QSize(89, 19));
        label_12->setFont(font4);

        horizontalLayout_9->addWidget(label_12);

        horizontalSpacer_3 = new QSpacerItem(118, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        kaishiduqu = new QPushButton(groupBox_3);
        kaishiduqu->setObjectName(QStringLiteral("kaishiduqu"));
        kaishiduqu->setMinimumSize(QSize(81, 27));
        kaishiduqu->setMaximumSize(QSize(81, 27));

        horizontalLayout_9->addWidget(kaishiduqu);


        verticalLayout->addLayout(horizontalLayout_9);

        duqu_jieguo = new QTextBrowser(groupBox_3);
        duqu_jieguo->setObjectName(QStringLiteral("duqu_jieguo"));
        duqu_jieguo->setMinimumSize(QSize(301, 113));
        duqu_jieguo->setMaximumSize(QSize(301, 113));

        verticalLayout->addWidget(duqu_jieguo);


        formLayout->setLayout(4, QFormLayout::LabelRole, verticalLayout);


        gridLayout_2->addWidget(groupBox_3, 0, 1, 2, 1);

        groupBox = new QGroupBox(main_ui);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(307, 0));
        groupBox->setFont(font4);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 22, 287, 23));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(86, 21));
        label_10->setMaximumSize(QSize(86, 21));
        label_10->setFont(font1);

        horizontalLayout_6->addWidget(label_10);

        idjiguan = new QLabel(layoutWidget);
        idjiguan->setObjectName(QStringLiteral("idjiguan"));
        idjiguan->setMinimumSize(QSize(193, 0));
        idjiguan->setFont(font1);

        horizontalLayout_6->addWidget(idjiguan);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 51, 318, 29));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(67, 16777215));
        label_11->setFont(font1);

        horizontalLayout_7->addWidget(label_11);

        idyouxiaoqi = new QLabel(layoutWidget1);
        idyouxiaoqi->setObjectName(QStringLiteral("idyouxiaoqi"));
        idyouxiaoqi->setMaximumSize(QSize(243, 16777215));
        idyouxiaoqi->setFont(font3);

        horizontalLayout_7->addWidget(idyouxiaoqi);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);


        retranslateUi(main_ui);

        QMetaObject::connectSlotsByName(main_ui);
    } // setupUi

    void retranslateUi(QDialog *main_ui)
    {
        main_ui->setWindowTitle(QApplication::translate("main_ui", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("main_ui", "\346\255\243\351\235\242", Q_NULLPTR));
        label->setText(QApplication::translate("main_ui", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        idname->setText(QString());
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
        groupBox_3->setTitle(QApplication::translate("main_ui", "\351\235\236\346\216\245\350\247\246\350\257\273\345\215\241\345\231\250", Q_NULLPTR));
        label_14->setText(QApplication::translate("main_ui", "\350\276\223\345\205\245\345\206\205\345\256\271\357\274\232", Q_NULLPTR));
        shanqu_txt_in->setText(QString());
        label_13->setText(QApplication::translate("main_ui", "\351\200\211\346\213\251\346\211\207\345\214\272\357\274\232", Q_NULLPTR));
        sanqu_mun->clear();
        sanqu_mun->insertItems(0, QStringList()
         << QApplication::translate("main_ui", "1", Q_NULLPTR)
         << QApplication::translate("main_ui", "2", Q_NULLPTR)
         << QApplication::translate("main_ui", "3", Q_NULLPTR)
         << QApplication::translate("main_ui", "4", Q_NULLPTR)
         << QApplication::translate("main_ui", "5", Q_NULLPTR)
         << QApplication::translate("main_ui", "6", Q_NULLPTR)
         << QApplication::translate("main_ui", "7", Q_NULLPTR)
         << QApplication::translate("main_ui", "8", Q_NULLPTR)
         << QApplication::translate("main_ui", "9", Q_NULLPTR)
         << QApplication::translate("main_ui", "10", Q_NULLPTR)
         << QApplication::translate("main_ui", "11", Q_NULLPTR)
         << QApplication::translate("main_ui", "12", Q_NULLPTR)
         << QApplication::translate("main_ui", "13", Q_NULLPTR)
         << QApplication::translate("main_ui", "14", Q_NULLPTR)
         << QApplication::translate("main_ui", "15", Q_NULLPTR)
        );
        xie_shanqu->setText(QApplication::translate("main_ui", "\345\206\231\345\215\241", Q_NULLPTR));
        label_12->setText(QApplication::translate("main_ui", "\350\257\206\345\210\253\347\273\223\346\236\234\357\274\232", Q_NULLPTR));
        kaishiduqu->setText(QApplication::translate("main_ui", "\345\274\200\345\247\213\350\257\273\345\217\226", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("main_ui", "\350\203\214\351\235\242", Q_NULLPTR));
        label_10->setText(QApplication::translate("main_ui", "\347\255\276\345\217\221\346\234\272\345\205\263\357\274\232", Q_NULLPTR));
        idjiguan->setText(QString());
        label_11->setText(QApplication::translate("main_ui", "\346\234\211\346\225\210\346\234\237\357\274\232", Q_NULLPTR));
        idyouxiaoqi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class main_ui: public Ui_main_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_UI_H
