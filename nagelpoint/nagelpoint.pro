QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#CONFIG += c++11

TARGET = Func
TEMPLATE = app

SOURCES += \
    main.cpp \
    nagelpoint.cpp drawarea.cpp\
    R2Graph.cpp

HEADERS += \
    nagelpoint.h drawarea.h R2Graph.h

FORMS += \
    nagelpoint.ui

# Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target
