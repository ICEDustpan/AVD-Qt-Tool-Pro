#-------------------------------------------------
#
# Project created by QtCreator 2020-03-10T14:03:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AVD-Qt-Tool
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    screen.cpp \
    network.cpp \
    softkeyboard.cpp \
    music.cpp

HEADERS  += mainwindow.h \
    screen.h \
    network.h \
    softkeyboard.h \
    music.h

FORMS    += mainwindow.ui \
    screen.ui \
    network.ui \
    softkeyboard.ui \
    music.ui

RESOURCES += \
    resources/picture/gif.qrc \
    resources/picture/background.qrc \
    resources/button/button.qrc
