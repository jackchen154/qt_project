/********************************************************************************
** Form generated from reading UI file 'myui2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYUI2_H
#define UI_MYUI2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "zidgyikongjian.h"

QT_BEGIN_NAMESPACE

class Ui_myui2
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelshowmouse;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    zidgyikongjian *widget;
    QMenuBar *menubar;

    void setupUi(QMainWindow *myui2)
    {
        if (myui2->objectName().isEmpty())
            myui2->setObjectName(QStringLiteral("myui2"));
        myui2->resize(300, 433);
        myui2->setMinimumSize(QSize(300, 250));
        myui2->setMaximumSize(QSize(500, 16777215));
        myui2->setBaseSize(QSize(999, 456));
        centralwidget = new QWidget(myui2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelshowmouse = new QLabel(centralwidget);
        labelshowmouse->setObjectName(QStringLiteral("labelshowmouse"));

        verticalLayout->addWidget(labelshowmouse);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        pushButton_4->setFont(font);
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  border: 2px solid gray;\n"
"  border-radius:10px;\n"
"  min-width: 80px;\n"
"  background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"	font: 75 20pt \"Aharoni\";\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"QPushButton:default\n"
"{\n"
"border-color: navy;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"border-color: navy;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(pushButton_4);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        widget = new zidgyikongjian(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        myui2->setCentralWidget(centralwidget);
        lineEdit->raise();
        label_3->raise();
        label_2->raise();
        pushButton_4->raise();
        labelshowmouse->raise();
        widget->raise();
        lineEdit_2->raise();
        menubar = new QMenuBar(myui2);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 25));
        myui2->setMenuBar(menubar);

        retranslateUi(myui2);

        QMetaObject::connectSlotsByName(myui2);
    } // setupUi

    void retranslateUi(QMainWindow *myui2)
    {
        myui2->setWindowTitle(QApplication::translate("myui2", "MainWindow", Q_NULLPTR));
        labelshowmouse->setText(QApplication::translate("myui2", "TextLabel", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("myui2", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("myui2", "\346\213\211\346\213\211", Q_NULLPTR));
        label_3->setText(QApplication::translate("myui2", "\346\213\211\346\213\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myui2: public Ui_myui2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYUI2_H
