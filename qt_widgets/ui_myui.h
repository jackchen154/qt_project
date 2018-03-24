/********************************************************************************
** Form generated from reading UI file 'myui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYUI_H
#define UI_MYUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myui
{
public:
    QAction *actionopen;
    QAction *actiond;
    QAction *actionfff;
    QWidget *centralwidget;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCommandLinkButton *commandLinkButton;
    QCheckBox *checkBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *guanbi;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QRadioButton *radioButton_3;
    QWidget *tab_2;
    QPushButton *pushButton_2;
    QLineEdit *password;
    QLabel *label;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLineEdit *name;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *myui)
    {
        if (myui->objectName().isEmpty())
            myui->setObjectName(QStringLiteral("myui"));
        myui->resize(626, 424);
        actionopen = new QAction(myui);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actiond = new QAction(myui);
        actiond->setObjectName(QStringLiteral("actiond"));
        actionfff = new QAction(myui);
        actionfff->setObjectName(QStringLiteral("actionfff"));
        centralwidget = new QWidget(myui);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(440, 80, 71, 16));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(363, 80, 71, 16));
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(390, 0, 231, 41));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(280, 80, 61, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 50, 186, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        guanbi = new QPushButton(centralwidget);
        guanbi->setObjectName(QStringLiteral("guanbi"));
        guanbi->setGeometry(QRect(0, 20, 101, 41));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 80, 141, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 140, 75, 23));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(340, 170, 127, 80));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        radioButton_3 = new QRadioButton(tab);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 20, 89, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 20, 75, 23));
        tabWidget->addTab(tab_2, QString());
        password = new QLineEdit(centralwidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(80, 180, 113, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 180, 71, 21));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 230, 75, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 150, 71, 21));
        name = new QLineEdit(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(80, 150, 113, 20));
        myui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myui);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 626, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        myui->setMenuBar(menubar);
        statusbar = new QStatusBar(myui);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        myui->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionopen);
        menu->addAction(actiond);
        menu->addSeparator();
        menu_2->addAction(actionfff);

        retranslateUi(myui);
        QObject::connect(guanbi, SIGNAL(clicked()), myui, SLOT(close()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(myui);
    } // setupUi

    void retranslateUi(QMainWindow *myui)
    {
        myui->setWindowTitle(QApplication::translate("myui", "MainWindow", Q_NULLPTR));
        actionopen->setText(QApplication::translate("myui", "\346\211\223\345\274\200", Q_NULLPTR));
        actiond->setText(QApplication::translate("myui", "\344\277\235\345\255\230", Q_NULLPTR));
        actionfff->setText(QApplication::translate("myui", "\345\211\252\345\210\207", Q_NULLPTR));
        checkBox->setText(QApplication::translate("myui", "CheckBox", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("myui", "CheckBox", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("myui", "CommandLinkButton", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("myui", "CheckBox", Q_NULLPTR));
        radioButton->setText(QApplication::translate("myui", "RadioButton", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("myui", "RadioButton", Q_NULLPTR));
        guanbi->setText(QApplication::translate("myui", "\345\205\263\351\227\255", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("myui", "\345\247\223\345\220\215", Q_NULLPTR)
         << QApplication::translate("myui", "\346\200\247\345\210\253", Q_NULLPTR)
         << QApplication::translate("myui", "\345\271\264\351\276\204", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("myui", "\345\210\207\346\215\242", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("myui", "RadioButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("myui", "Tab 1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("myui", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("myui", "Tab 2", Q_NULLPTR));
        password->setText(QString());
        label->setText(QApplication::translate("myui", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232</p></body></html>", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("myui", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("myui", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232</p></body></html>", Q_NULLPTR));
        name->setText(QString());
        menu->setTitle(QApplication::translate("myui", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("myui", "\347\274\226\350\276\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myui: public Ui_myui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYUI_H
