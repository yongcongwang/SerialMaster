#-------------------------------------------------
#
# Project created by QtCreator 2016-02-26T20:55:01
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

DEFINES += QT_DLL QWT_DLL
LIBS += -L"C:\Qt\Qt5.5.1\5.5\mingw492_32\lib" -lqwt
LIBS += -L"C:\Qt\Qt5.5.1\5.5\mingw492_32\lib" -lqwt
INCLUDEPATH += C:\Qt\Qt5.5.1\5.5\mingw492_32\include\Qwt

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qcom
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dataplot.cpp \
    steeringwhile.cpp \
    gear.cpp

HEADERS  += mainwindow.h \
    dataplot.h \
    steeringwhile.h \
    gear.h

FORMS    += mainwindow.ui \
    steeringwhile.ui \
    gear.ui

RESOURCES += \
    source.qrc

DISTFILES +=

RC_FILE = logo.rc
