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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myui2
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *myui2)
    {
        if (myui2->objectName().isEmpty())
            myui2->setObjectName(QStringLiteral("myui2"));
        myui2->resize(300, 250);
        myui2->setMinimumSize(QSize(300, 250));
        myui2->setMaximumSize(QSize(500, 16777215));
        myui2->setBaseSize(QSize(999, 456));
        centralwidget = new QWidget(myui2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setMinimumSize(QSize(300, 50));
        centralwidget->setMaximumSize(QSize(500, 200));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(100, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/meinv.png")));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        myui2->setCentralWidget(centralwidget);
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
        label->setText(QString());
        label_2->setText(QApplication::translate("myui2", "\346\213\211\346\213\211", Q_NULLPTR));
        label_3->setText(QApplication::translate("myui2", "\346\213\211\346\213\211", Q_NULLPTR));
        pushButton->setText(QApplication::translate("myui2", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("myui2", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("myui2", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myui2: public Ui_myui2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYUI2_H
