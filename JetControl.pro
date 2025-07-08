#-------------------------------------------------
#
# Project created by QtCreator 2024-04-16T11:22:00
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JetControl
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#DISTFILES += \
#    img/打开串口.png \
#    img/主界面.jpg \
#    img/关闭串口.png \
#    img/微信图片_20230726091617.png \
#    img/打开串口.png \
#    img/电动车.png \
#    img/电动车标题.png \
#    img/电动车背景.png \
#    img/覆盖.png \
#    img/贴图.png \
#    img/选中0.png \
#    img/选中1.png

RESOURCES += \
    image.qrc

RC_FILE += logo.rc

