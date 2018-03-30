/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *labelshowmouse;
    QLabel *mov;
    QLabel *realdata;
    QLabel *realdata2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        labelshowmouse = new QLabel(Dialog);
        labelshowmouse->setObjectName(QStringLiteral("labelshowmouse"));
        labelshowmouse->setGeometry(QRect(20, 80, 241, 161));
        mov = new QLabel(Dialog);
        mov->setObjectName(QStringLiteral("mov"));
        mov->setGeometry(QRect(130, 140, 21, 31));
        mov->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
" background-color:rgb(255, 0, 0);\n"
"}"));
        realdata = new QLabel(Dialog);
        realdata->setObjectName(QStringLiteral("realdata"));
        realdata->setGeometry(QRect(10, 30, 111, 21));
        realdata2 = new QLabel(Dialog);
        realdata2->setObjectName(QStringLiteral("realdata2"));
        realdata2->setGeometry(QRect(240, 40, 111, 21));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        labelshowmouse->setText(QApplication::translate("Dialog", "TextLabel", Q_NULLPTR));
        mov->setText(QApplication::translate("Dialog", "TextLabel", Q_NULLPTR));
        realdata->setText(QApplication::translate("Dialog", "TextLabel", Q_NULLPTR));
        realdata2->setText(QApplication::translate("Dialog", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
