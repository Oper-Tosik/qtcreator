#-------------------------------------------------
#
# Project created by QtCreator 2024-04-22T17:06:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ConvexHull
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        drawarea.cpp R2Graph.cpp \
        convexHull.cpp

HEADERS += mainwindow.h \
        drawarea.h R2Graph.h convexHull.h

FORMS    += mainwindow.ui
