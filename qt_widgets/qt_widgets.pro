#-------------------------------------------------
#
# Project created by QtCreator 2018-03-17T20:05:12
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_widgets
TEMPLATE = app

RC_ICONS =app.ico

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mywidget.cpp \
    subwidgets.cpp \
    myui.cpp \
    zidgyikongjian.cpp \
    dialog.cpp \
    serial_window.cpp \
    timerthread.cpp

HEADERS += \
        mywidget.h \
    subwidgets.h \
    myui.h \
    zidgyikongjian.h \
    dialog.h \
    serial_window.h \
    timerthread.h

CONFIG += C++11

FORMS += \
    myui.ui \
    dialog.ui \
    serial_window.ui

RESOURCES += \
    myresource.qrc


