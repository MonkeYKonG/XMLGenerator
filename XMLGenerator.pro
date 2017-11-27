#-------------------------------------------------
#
# Project created by QtCreator 2017-11-24T22:41:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = XMLGenerator
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

INCLUDEPATH += "G:\git\Enchiladas-s-shmup\includes"


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    xmltree.cpp

HEADERS += \
        mainwindow.h \
    xmltree.h

FORMS += \
        mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../Enchiladas-s-shmup/build/x64-Debug/release/ -lmy_graph_lib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../Enchiladas-s-shmup/build/x64-Debug/debug/ -lmy_graph_lib
else:unix: LIBS += -L$$PWD/../Enchiladas-s-shmup/build/x64-Debug/ -lmy_graph_lib

INCLUDEPATH += $$PWD/../Enchiladas-s-shmup/build/x64-Debug/Debug
DEPENDPATH += $$PWD/../Enchiladas-s-shmup/build/x64-Debug/Debug
