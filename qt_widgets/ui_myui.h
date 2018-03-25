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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myui
{
public:
    QAction *actionopen;
    QAction *actiond;
    QAction *actionfff;
    QWidget *centralwidget;
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
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QDial *dial;
    QScrollBar *verticalScrollBar;
    QScrollBar *horizontalScrollBar;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_tupain;
    QLabel *label_gifdonghua;
    QLabel *label_html;
    QProgressBar *jindutiao;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;

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
        guanbi = new QPushButton(centralwidget);
        guanbi->setObjectName(QStringLiteral("guanbi"));
        guanbi->setGeometry(QRect(0, 0, 101, 41));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 120, 41, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 270, 75, 23));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(480, 300, 127, 80));
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
        password->setGeometry(QRect(80, 170, 113, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 170, 71, 21));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(116, 194, 75, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 150, 71, 21));
        name = new QLineEdit(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(80, 150, 113, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 120, 41, 21));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 230, 221, 149));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 210, 41, 21));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(400, 90, 42, 22));
        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(330, 90, 62, 22));
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(200, 90, 118, 22));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(90, 90, 110, 22));
        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(90, 60, 194, 22));
        dial = new QDial(centralwidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(292, 6, 91, 81));
        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(610, 0, 16, 401));
        verticalScrollBar->setOrientation(Qt::Vertical);
        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(-1, 380, 611, 20));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(420, 118, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(580, 131, 22, 119));
        verticalSlider->setOrientation(Qt::Vertical);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-6, 110, 609, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(600, -2, 7, 121));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_tupain = new QLabel(centralwidget);
        label_tupain->setObjectName(QStringLiteral("label_tupain"));
        label_tupain->setGeometry(QRect(474, 2, 123, 117));
        label_tupain->setScaledContents(false);
        label_gifdonghua = new QLabel(centralwidget);
        label_gifdonghua->setObjectName(QStringLiteral("label_gifdonghua"));
        label_gifdonghua->setGeometry(QRect(222, 222, 153, 157));
        label_gifdonghua->setScaledContents(false);
        label_html = new QLabel(centralwidget);
        label_html->setObjectName(QStringLiteral("label_html"));
        label_html->setGeometry(QRect(102, 6, 165, 25));
        jindutiao = new QProgressBar(centralwidget);
        jindutiao->setObjectName(QStringLiteral("jindutiao"));
        jindutiao->setGeometry(QRect(238, 148, 339, 17));
        jindutiao->setValue(50);
        myui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myui);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 626, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        myui->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionopen);
        menu->addAction(actiond);
        menu->addSeparator();
        menu_2->addAction(actionfff);

        retranslateUi(myui);
        QObject::connect(guanbi, SIGNAL(clicked()), myui, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(myui);
    } // setupUi

    void retranslateUi(QMainWindow *myui)
    {
        myui->setWindowTitle(QApplication::translate("myui", "MainWindow", Q_NULLPTR));
        actionopen->setText(QApplication::translate("myui", "\346\211\223\345\274\200", Q_NULLPTR));
        actiond->setText(QApplication::translate("myui", "\344\277\235\345\255\230", Q_NULLPTR));
        actionfff->setText(QApplication::translate("myui", "\345\211\252\345\210\207", Q_NULLPTR));
        guanbi->setText(QApplication::translate("myui", "\345\205\263\351\227\255", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("myui", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("myui", "\345\245\263", Q_NULLPTR)
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
        label_3->setText(QApplication::translate("myui", "<html><head/><body><p>\346\200\247\345\210\253      \357\274\232</p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("myui", "<html><head/><body><p>\345\244\207\346\263\250 \357\274\232</p></body></html>", Q_NULLPTR));
        label_tupain->setText(QApplication::translate("myui", "pic", Q_NULLPTR));
        label_gifdonghua->setText(QApplication::translate("myui", "gif", Q_NULLPTR));
        label_html->setText(QApplication::translate("myui", "TextLabel", Q_NULLPTR));
        menu->setTitle(QApplication::translate("myui", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("myui", "\347\274\226\350\276\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myui: public Ui_myui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYUI_H
