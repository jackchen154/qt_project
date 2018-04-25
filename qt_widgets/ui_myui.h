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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <zidgyikongjian.h>

QT_BEGIN_NAMESPACE

class Ui_myui
{
public:
    QAction *actionopen;
    QAction *actiond;
    QAction *actionfff;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QDial *dial;
    QScrollBar *verticalScrollBar;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *guanbi;
    QLabel *label_html;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QDoubleSpinBox *doubleSpinBox;
    QSpinBox *spinBox;
    QProgressBar *jindutiao;
    QSlider *verticalSlider;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLineEdit *password;
    QComboBox *comboBox;
    QLineEdit *name;
    QLabel *label;
    QLabel *label_tupain;
    zidgyikongjian *widget_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_gifdonghua;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QRadioButton *radioButton_3;
    QWidget *tab_2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *myui)
    {
        if (myui->objectName().isEmpty())
            myui->setObjectName(QStringLiteral("myui"));
        myui->resize(759, 453);
        myui->setMinimumSize(QSize(759, 453));
        myui->setBaseSize(QSize(100, 100));
        actionopen = new QAction(myui);
        actionopen->setObjectName(QStringLiteral("actionopen"));
        actiond = new QAction(myui);
        actiond->setObjectName(QStringLiteral("actiond"));
        actionfff = new QAction(myui);
        actionfff->setObjectName(QStringLiteral("actionfff"));
        centralwidget = new QWidget(myui);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setBaseSize(QSize(100, 100));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        dial = new QDial(frame);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setMinimumSize(QSize(100, 100));

        gridLayout_2->addWidget(dial, 0, 1, 1, 1);

        verticalScrollBar = new QScrollBar(frame);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalScrollBar, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        guanbi = new QPushButton(frame);
        guanbi->setObjectName(QStringLiteral("guanbi"));

        horizontalLayout_6->addWidget(guanbi);

        label_html = new QLabel(frame);
        label_html->setObjectName(QStringLiteral("label_html"));

        horizontalLayout_6->addWidget(label_html);

        horizontalSpacer_7 = new QSpacerItem(119, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(134, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        dateTimeEdit = new QDateTimeEdit(frame);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        horizontalLayout_5->addWidget(dateTimeEdit);

        horizontalSpacer_5 = new QSpacerItem(131, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(134, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        dateEdit = new QDateEdit(frame);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        horizontalLayout_4->addWidget(dateEdit);

        timeEdit = new QTimeEdit(frame);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        horizontalLayout_4->addWidget(timeEdit);

        doubleSpinBox = new QDoubleSpinBox(frame);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        horizontalLayout_4->addWidget(doubleSpinBox);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalScrollBar->raise();
        dial->raise();

        gridLayout_4->addWidget(frame, 0, 0, 1, 2);

        jindutiao = new QProgressBar(centralwidget);
        jindutiao->setObjectName(QStringLiteral("jindutiao"));
        jindutiao->setValue(50);

        gridLayout_4->addWidget(jindutiao, 0, 2, 1, 1);

        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(verticalSlider, 0, 3, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        password = new QLineEdit(widget_2);
        password->setObjectName(QStringLiteral("password"));

        gridLayout->addWidget(password, 1, 1, 1, 2);

        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 2, 1, 1, 1);

        name = new QLineEdit(widget_2);
        name->setObjectName(QStringLiteral("name"));

        gridLayout->addWidget(name, 0, 1, 1, 2);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        label_tupain = new QLabel(widget_2);
        label_tupain->setObjectName(QStringLiteral("label_tupain"));
        label_tupain->setMinimumSize(QSize(100, 95));
        label_tupain->setMaximumSize(QSize(100, 95));
        label_tupain->setPixmap(QPixmap(QString::fromUtf8(":/image/meinv.png")));
        label_tupain->setScaledContents(false);

        gridLayout_3->addWidget(label_tupain, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new zidgyikongjian(centralwidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(0, 109));

        gridLayout_4->addWidget(widget_3, 1, 1, 1, 2);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_6 = new QSpacerItem(190, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        label_gifdonghua = new QLabel(widget);
        label_gifdonghua->setObjectName(QStringLiteral("label_gifdonghua"));
        label_gifdonghua->setMaximumSize(QSize(300, 300));
        label_gifdonghua->setScaledContents(false);

        verticalLayout_4->addWidget(label_gifdonghua);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(84, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
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
        pushButton_2->setGeometry(QRect(4, 6, 175, 65));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
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
        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);


        horizontalLayout_3->addLayout(verticalLayout_3);


        gridLayout_4->addWidget(widget, 2, 0, 1, 4);

        myui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myui);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 759, 25));
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
        label_html->setText(QApplication::translate("myui", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("myui", "<html><head/><body><p>\346\200\247\345\210\253      \357\274\232</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("myui", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232</p></body></html>", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("myui", "\347\241\256\345\256\232", Q_NULLPTR));
        password->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("myui", "\345\245\263", Q_NULLPTR)
         << QApplication::translate("myui", "\347\224\267", Q_NULLPTR)
        );
        name->setText(QString());
        label->setText(QApplication::translate("myui", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232</p></body></html>", Q_NULLPTR));
        label_tupain->setText(QString());
        label_4->setText(QApplication::translate("myui", "<html><head/><body><p>\345\244\207\346\263\250 \357\274\232</p></body></html>", Q_NULLPTR));
        label_gifdonghua->setText(QApplication::translate("myui", "gif", Q_NULLPTR));
        pushButton->setText(QApplication::translate("myui", "\345\210\207\346\215\242", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("myui", "RadioButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("myui", "Tab 1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("myui", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("myui", "Tab 2", Q_NULLPTR));
        menu->setTitle(QApplication::translate("myui", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("myui", "\347\274\226\350\276\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myui: public Ui_myui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYUI_H
