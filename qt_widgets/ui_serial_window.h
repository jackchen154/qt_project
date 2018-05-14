/********************************************************************************
** Form generated from reading UI file 'serial_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_WINDOW_H
#define UI_SERIAL_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serial_window
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QPushButton *clear;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_2;
    QLabel *label;
    QComboBox *PortBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *BaudBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *BitNumBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *ParityBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *StopBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *send_button1;
    QLineEdit *send_input1;
    QRadioButton *send_check1;
    QPushButton *send_button2;
    QLineEdit *send_input2;
    QRadioButton *send_check2;
    QPushButton *send_button3;
    QLineEdit *send_input3;
    QRadioButton *send_check3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QCheckBox *auto_send;
    QSpinBox *send_interval;
    QLabel *label_6;
    QPushButton *openButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QPushButton *clearsend;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *serial_window)
    {
        if (serial_window->objectName().isEmpty())
            serial_window->setObjectName(QStringLiteral("serial_window"));
        serial_window->resize(800, 547);
        serial_window->setMinimumSize(QSize(800, 547));
        centralwidget = new QWidget(serial_window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(false);
        groupBox->setMinimumSize(QSize(451, 285));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        groupBox->setFont(font);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMinimumSize(QSize(391, 221));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 4);

        clear = new QPushButton(groupBox);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setMaximumSize(QSize(75, 23));

        gridLayout->addWidget(clear, 1, 0, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setMaximumSize(QSize(77, 19));

        gridLayout->addWidget(checkBox, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setMaximumSize(QSize(47, 16));

        horizontalLayout_6->addWidget(radioButton_3);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setMaximumSize(QSize(53, 16));

        horizontalLayout_6->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setMaximumSize(QSize(79, 16));

        horizontalLayout_6->addWidget(radioButton_2);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setMaximumSize(QSize(45, 16));
        radioButton_4->setChecked(true);

        horizontalLayout_6->addWidget(radioButton_4);


        gridLayout->addLayout(horizontalLayout_6, 1, 3, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMinimumSize(QSize(261, 505));
        groupBox_3->setMaximumSize(QSize(261, 16777215));
        groupBox_3->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, -1, -1, -1);
        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(60, 21));

        _2->addWidget(label);

        PortBox = new QComboBox(groupBox_3);
        PortBox->setObjectName(QStringLiteral("PortBox"));

        _2->addWidget(PortBox);


        verticalLayout->addLayout(_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(60, 21));

        horizontalLayout_2->addWidget(label_2);

        BaudBox = new QComboBox(groupBox_3);
        BaudBox->setObjectName(QStringLiteral("BaudBox"));

        horizontalLayout_2->addWidget(BaudBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 21));

        horizontalLayout_3->addWidget(label_3);

        BitNumBox = new QComboBox(groupBox_3);
        BitNumBox->setObjectName(QStringLiteral("BitNumBox"));

        horizontalLayout_3->addWidget(BitNumBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(60, 21));

        horizontalLayout_4->addWidget(label_4);

        ParityBox = new QComboBox(groupBox_3);
        ParityBox->setObjectName(QStringLiteral("ParityBox"));

        horizontalLayout_4->addWidget(ParityBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(60, 21));

        horizontalLayout_5->addWidget(label_5);

        StopBox = new QComboBox(groupBox_3);
        StopBox->setObjectName(QStringLiteral("StopBox"));

        horizontalLayout_5->addWidget(StopBox);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 1, 2, 1, 1);

        send_button1 = new QPushButton(groupBox_3);
        send_button1->setObjectName(QStringLiteral("send_button1"));
        send_button1->setMinimumSize(QSize(22, 22));
        send_button1->setMaximumSize(QSize(22, 23));

        gridLayout_2->addWidget(send_button1, 2, 0, 1, 1);

        send_input1 = new QLineEdit(groupBox_3);
        send_input1->setObjectName(QStringLiteral("send_input1"));

        gridLayout_2->addWidget(send_input1, 2, 1, 1, 2);

        send_check1 = new QRadioButton(groupBox_3);
        send_check1->setObjectName(QStringLiteral("send_check1"));
        send_check1->setChecked(true);

        gridLayout_2->addWidget(send_check1, 2, 3, 1, 1);

        send_button2 = new QPushButton(groupBox_3);
        send_button2->setObjectName(QStringLiteral("send_button2"));
        send_button2->setMinimumSize(QSize(22, 22));
        send_button2->setMaximumSize(QSize(22, 23));

        gridLayout_2->addWidget(send_button2, 3, 0, 1, 1);

        send_input2 = new QLineEdit(groupBox_3);
        send_input2->setObjectName(QStringLiteral("send_input2"));

        gridLayout_2->addWidget(send_input2, 3, 1, 1, 2);

        send_check2 = new QRadioButton(groupBox_3);
        send_check2->setObjectName(QStringLiteral("send_check2"));

        gridLayout_2->addWidget(send_check2, 3, 3, 1, 1);

        send_button3 = new QPushButton(groupBox_3);
        send_button3->setObjectName(QStringLiteral("send_button3"));
        send_button3->setMinimumSize(QSize(22, 22));
        send_button3->setMaximumSize(QSize(22, 23));

        gridLayout_2->addWidget(send_button3, 4, 0, 1, 1);

        send_input3 = new QLineEdit(groupBox_3);
        send_input3->setObjectName(QStringLiteral("send_input3"));

        gridLayout_2->addWidget(send_input3, 4, 1, 1, 2);

        send_check3 = new QRadioButton(groupBox_3);
        send_check3->setObjectName(QStringLiteral("send_check3"));

        gridLayout_2->addWidget(send_check3, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        auto_send = new QCheckBox(groupBox_3);
        auto_send->setObjectName(QStringLiteral("auto_send"));
        auto_send->setMaximumSize(QSize(81, 16));

        horizontalLayout->addWidget(auto_send);

        send_interval = new QSpinBox(groupBox_3);
        send_interval->setObjectName(QStringLiteral("send_interval"));
        send_interval->setMaximumSize(QSize(51, 22));
        send_interval->setMinimum(10);
        send_interval->setMaximum(2000);
        send_interval->setSingleStep(50);
        send_interval->setValue(500);

        horizontalLayout->addWidget(send_interval);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(31, 20));

        horizontalLayout->addWidget(label_6);


        gridLayout_2->addLayout(horizontalLayout, 6, 0, 1, 3);

        openButton = new QPushButton(groupBox_3);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setMinimumSize(QSize(209, 23));

        gridLayout_2->addWidget(openButton, 7, 0, 1, 3);


        gridLayout_4->addWidget(groupBox_3, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(451, 181));
        groupBox_2->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMinimumSize(QSize(391, 121));

        gridLayout_3->addWidget(textEdit, 0, 0, 1, 4);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(81, 23));

        gridLayout_3->addWidget(pushButton_2, 1, 2, 1, 1);

        clearsend = new QPushButton(groupBox_2);
        clearsend->setObjectName(QStringLiteral("clearsend"));
        clearsend->setMaximumSize(QSize(75, 23));

        gridLayout_3->addWidget(clearsend, 1, 0, 1, 1);

        sendButton = new QPushButton(groupBox_2);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setMaximumSize(QSize(81, 23));

        gridLayout_3->addWidget(sendButton, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(144, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        serial_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(serial_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        serial_window->setMenuBar(menubar);
        statusbar = new QStatusBar(serial_window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        serial_window->setStatusBar(statusbar);

        retranslateUi(serial_window);

        QMetaObject::connectSlotsByName(serial_window);
    } // setupUi

    void retranslateUi(QMainWindow *serial_window)
    {
        serial_window->setWindowTitle(QApplication::translate("serial_window", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("serial_window", "\346\216\245\346\224\266\347\252\227\345\217\243", Q_NULLPTR));
        clear->setText(QApplication::translate("serial_window", "\346\270\205\347\251\272\346\216\245\346\224\266", Q_NULLPTR));
        checkBox->setText(QApplication::translate("serial_window", "\350\207\252\345\212\250\346\215\242\350\241\214", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("serial_window", "GBK", Q_NULLPTR));
        radioButton->setText(QApplication::translate("serial_window", "UTF8", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("serial_window", "UNICODE", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("serial_window", "HEX", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("serial_window", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("serial_window", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("serial_window", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        BaudBox->clear();
        BaudBox->insertItems(0, QStringList()
         << QApplication::translate("serial_window", "115200", Q_NULLPTR)
         << QApplication::translate("serial_window", "57600", Q_NULLPTR)
         << QApplication::translate("serial_window", "19200", Q_NULLPTR)
         << QApplication::translate("serial_window", "38400", Q_NULLPTR)
         << QApplication::translate("serial_window", "9600", Q_NULLPTR)
         << QApplication::translate("serial_window", "4800", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("serial_window", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        BitNumBox->clear();
        BitNumBox->insertItems(0, QStringList()
         << QApplication::translate("serial_window", "8", Q_NULLPTR)
         << QApplication::translate("serial_window", "7", Q_NULLPTR)
         << QApplication::translate("serial_window", "6", Q_NULLPTR)
         << QApplication::translate("serial_window", "5", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("serial_window", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        ParityBox->clear();
        ParityBox->insertItems(0, QStringList()
         << QApplication::translate("serial_window", "\346\227\240", Q_NULLPTR)
         << QApplication::translate("serial_window", "\345\245\207\346\240\241\351\252\214", Q_NULLPTR)
         << QApplication::translate("serial_window", "\345\201\266\346\240\241\351\252\214", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("serial_window", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        StopBox->clear();
        StopBox->insertItems(0, QStringList()
         << QApplication::translate("serial_window", "1", Q_NULLPTR)
         << QApplication::translate("serial_window", "2", Q_NULLPTR)
        );
        send_button1->setText(QApplication::translate("serial_window", "1", Q_NULLPTR));
        send_check1->setText(QString());
        send_button2->setText(QApplication::translate("serial_window", "2", Q_NULLPTR));
        send_check2->setText(QString());
        send_button3->setText(QApplication::translate("serial_window", "3", Q_NULLPTR));
        send_check3->setText(QString());
        auto_send->setText(QApplication::translate("serial_window", "\350\207\252\345\212\250\345\217\221\351\200\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("serial_window", "\346\257\253\347\247\222", Q_NULLPTR));
        openButton->setText(QApplication::translate("serial_window", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("serial_window", "\345\217\221\351\200\201\347\252\227\345\217\243", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("serial_window", "HEX\345\217\221\351\200\201", Q_NULLPTR));
        clearsend->setText(QApplication::translate("serial_window", "\346\270\205\347\251\272\345\217\221\351\200\201", Q_NULLPTR));
        sendButton->setText(QApplication::translate("serial_window", "\345\255\227\347\254\246\344\270\262\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class serial_window: public Ui_serial_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_WINDOW_H
