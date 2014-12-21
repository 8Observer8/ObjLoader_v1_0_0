#-------------------------------------------------
#
# Project created by QtCreator 2014-12-20T10:56:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ObjLoader_v1_0_0
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    Scene.cpp \
    Object.cpp \
    ObjLoader.cpp

HEADERS  += MainWindow.h \
    Scene.h \
    Object.h \
    ObjLoader.h

FORMS    += MainWindow.ui

RESOURCES += \
    Shaders.qrc
