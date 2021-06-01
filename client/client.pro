QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += ../common

SOURCES += \
    ../common/common.cpp \
    ../common/communicator.cpp \
    application.cpp \
    control.cpp \
    interface.cpp \
    main.cpp \
    mainwindow.cpp \
    settings.cpp \
    status.cpp

HEADERS += \
    ../common/common.h \
    ../common/communicator.h \
    application.h \
    control.h \
    interface.h \
    mainwindow.h \
    settings.h \
    status.h

FORMS += \
    control.ui \
    mainwindow.ui \
    settings.ui \
    status.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
