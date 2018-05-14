/********************************************************************************
** Form generated from reading UI file 'serial_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
    QGroupBox *recive_window;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QPushButton *clear;
    QCheckBox *auto_linefeed;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *gbk_disp;
    QRadioButton *utf8_disp;
    QRadioButton *unicode_disp;
    QRadioButton *Hex_disp;
    QGroupBox *set_window;
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
    QGroupBox *send_window;
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
        recive_window = new QGroupBox(centralwidget);
        recive_window->setObjectName(QStringLiteral("recive_window"));
        recive_window->setEnabled(false);
        recive_window->setMinimumSize(QSize(451, 285));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        recive_window->setFont(font);
        recive_window->setFlat(false);
        recive_window->setCheckable(false);
        gridLayout = new QGridLayout(recive_window);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(recive_window);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMinimumSize(QSize(391, 221));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 4);

        clear = new QPushButton(recive_window);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setMaximumSize(QSize(75, 23));

        gridLayout->addWidget(clear, 1, 0, 1, 1);

        auto_linefeed = new QCheckBox(recive_window);
        auto_linefeed->setObjectName(QStringLiteral("auto_linefeed"));
        auto_linefeed->setMaximumSize(QSize(77, 19));

        gridLayout->addWidget(auto_linefeed, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        gbk_disp = new QRadioButton(recive_window);
        gbk_disp->setObjectName(QStringLiteral("gbk_disp"));
        gbk_disp->setMaximumSize(QSize(47, 16));
        gbk_disp->setChecked(true);

        horizontalLayout_6->addWidget(gbk_disp);

        utf8_disp = new QRadioButton(recive_window);
        utf8_disp->setObjectName(QStringLiteral("utf8_disp"));
        utf8_disp->setMaximumSize(QSize(53, 16));

        horizontalLayout_6->addWidget(utf8_disp);

        unicode_disp = new QRadioButton(recive_window);
        unicode_disp->setObjectName(QStringLiteral("unicode_disp"));
        unicode_disp->setMaximumSize(QSize(79, 16));

        horizontalLayout_6->addWidget(unicode_disp);

        Hex_disp = new QRadioButton(recive_window);
        Hex_disp->setObjectName(QStringLiteral("Hex_disp"));
        Hex_disp->setMaximumSize(QSize(45, 16));
        Hex_disp->setCheckable(true);
        Hex_disp->setChecked(false);

        horizontalLayout_6->addWidget(Hex_disp);


        gridLayout->addLayout(horizontalLayout_6, 1, 3, 1, 1);


        gridLayout_4->addWidget(recive_window, 0, 0, 1, 1);

        set_window = new QGroupBox(centralwidget);
        set_window->setObjectName(QStringLiteral("set_window"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(set_window->sizePolicy().hasHeightForWidth());
        set_window->setSizePolicy(sizePolicy);
        set_window->setMinimumSize(QSize(261, 505));
        set_window->setMaximumSize(QSize(261, 16777215));
        set_window->setFont(font);
        gridLayout_2 = new QGridLayout(set_window);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, -1, -1, -1);
        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(set_window);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(60, 21));

        _2->addWidget(label);

        PortBox = new QComboBox(set_window);
        PortBox->setObjectName(QStringLiteral("PortBox"));

        _2->addWidget(PortBox);


        verticalLayout->addLayout(_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(set_window);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(60, 21));

        horizontalLayout_2->addWidget(label_2);

        BaudBox = new QComboBox(set_window);
        BaudBox->setObjectName(QStringLiteral("BaudBox"));

        horizontalLayout_2->addWidget(BaudBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(set_window);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 21));

        horizontalLayout_3->addWidget(label_3);

        BitNumBox = new QComboBox(set_window);
        BitNumBox->setObjectName(QStringLiteral("BitNumBox"));

        horizontalLayout_3->addWidget(BitNumBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(set_window);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(60, 21));

        horizontalLayout_4->addWidget(label_4);

        ParityBox = new QComboBox(set_window);
        ParityBox->setObjectName(QStringLiteral("ParityBox"));

        horizontalLayout_4->addWidget(ParityBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(set_window);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(60, 21));

        horizontalLayout_5->addWidget(label_5);

        StopBox = new QComboBox(set_window);
        StopBox->setObjectName(QStringLiteral("StopBox"));

        horizontalLayout_5->addWidget(StopBox);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 1, 2, 1, 1);

        send_button1 = new QPushButton(set_window);
        send_button1->setObjectName(QStringLiteral("send_button1"));
        send_button1->setMinimumSize(QSize(22, 22));
        send_button1->setMaximumSize(QSize(22, 23));

        gridLayout_2->addWidget(send_button1, 2, 0, 1, 1);

        send_input1 = new QLineEdit(set_window);
        send_input1->setObjectName(QStringLiteral("send_input1"));

        gridLayout_2->addWidget(send_input1, 2, 1, 1, 2);

        send_check1 = new QRadioButton(set_window);
        send_check1->setObjectName(QStringLiteral("send_check1"));
        send_check1->setChecked(true);

        gridLayout_2->addWidget(send_check1, 2, 3, 1, 1);

        send_button2 = new QPushButton(set_window);
        send_button2->setObjectName(QStringLiteral("send_button2"));
        send_button2->setMinimumSize(QSize(22, 22));
        send_button2->setMaximumSize(QSize(22, 23));

        gridLayout_2->addWidget(send_button2, 3, 0, 1, 1);

        send_input2 = new QLineEdit(set_window);
        send_input2->setObjectName(QStringLiteral("send_input2"));

        gridLayout_2->addWidget(send_input2, 3, 1, 1, 2);

        send_check2 = new QRadioButton(set_window);
        send_check2->setObjectName(QStringLiteral("send_check2"));

        gridLayout_2->addWidget(send_check2, 3, 3, 1, 1);

        send_button3 = new QPushButton(set_window);
        send_button3->setObjectName(QStringLiteral("send_button3"));
        send_button3->setMinimumSize(QSize(22, 22));
        send_button3->setMaximumSize(QSize(22, 23));

        gridLayout_2->addWidget(send_button3, 4, 0, 1, 1);

        send_input3 = new QLineEdit(set_window);
        send_input3->setObjectName(QStringLiteral("send_input3"));

        gridLayout_2->addWidget(send_input3, 4, 1, 1, 2);

        send_check3 = new QRadioButton(set_window);
        send_check3->setObjectName(QStringLiteral("send_check3"));

        gridLayout_2->addWidget(send_check3, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        auto_send = new QCheckBox(set_window);
        auto_send->setObjectName(QStringLiteral("auto_send"));
        auto_send->setMaximumSize(QSize(81, 16));

        horizontalLayout->addWidget(auto_send);

        send_interval = new QSpinBox(set_window);
        send_interval->setObjectName(QStringLiteral("send_interval"));
        send_interval->setMaximumSize(QSize(51, 22));
        send_interval->setMinimum(10);
        send_interval->setMaximum(2000);
        send_interval->setSingleStep(50);
        send_interval->setValue(500);

        horizontalLayout->addWidget(send_interval);

        label_6 = new QLabel(set_window);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(31, 20));

        horizontalLayout->addWidget(label_6);


        gridLayout_2->addLayout(horizontalLayout, 6, 0, 1, 3);

        openButton = new QPushButton(set_window);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setMinimumSize(QSize(209, 23));

        gridLayout_2->addWidget(openButton, 7, 0, 1, 3);


        gridLayout_4->addWidget(set_window, 0, 1, 2, 1);

        send_window = new QGroupBox(centralwidget);
        send_window->setObjectName(QStringLiteral("send_window"));
        send_window->setEnabled(false);
        send_window->setMinimumSize(QSize(451, 181));
        send_window->setFont(font);
        gridLayout_3 = new QGridLayout(send_window);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textEdit = new QTextEdit(send_window);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMinimumSize(QSize(391, 121));

        gridLayout_3->addWidget(textEdit, 0, 0, 1, 4);

        pushButton_2 = new QPushButton(send_window);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(81, 23));

        gridLayout_3->addWidget(pushButton_2, 1, 2, 1, 1);

        clearsend = new QPushButton(send_window);
        clearsend->setObjectName(QStringLiteral("clearsend"));
        clearsend->setMaximumSize(QSize(75, 23));

        gridLayout_3->addWidget(clearsend, 1, 0, 1, 1);

        sendButton = new QPushButton(send_window);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setMaximumSize(QSize(81, 23));

        gridLayout_3->addWidget(sendButton, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(144, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        gridLayout_4->addWidget(send_window, 1, 0, 1, 1);

        serial_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(serial_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        recive_window->setTitle(QApplication::translate("serial_window", "\346\216\245\346\224\266\347\252\227\345\217\243", Q_NULLPTR));
        clear->setText(QApplication::translate("serial_window", "\346\270\205\347\251\272\346\216\245\346\224\266", Q_NULLPTR));
        auto_linefeed->setText(QApplication::translate("serial_window", "\350\207\252\345\212\250\346\215\242\350\241\214", Q_NULLPTR));
        gbk_disp->setText(QApplication::translate("serial_window", "GBK", Q_NULLPTR));
        utf8_disp->setText(QApplication::translate("serial_window", "UTF8", Q_NULLPTR));
        unicode_disp->setText(QApplication::translate("serial_window", "UNICODE", Q_NULLPTR));
        Hex_disp->setText(QApplication::translate("serial_window", "HEX", Q_NULLPTR));
        set_window->setTitle(QApplication::translate("serial_window", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
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
        send_window->setTitle(QApplication::translate("serial_window", "\345\217\221\351\200\201\347\252\227\345\217\243", Q_NULLPTR));
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
