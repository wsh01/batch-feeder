#-------------------------------------------------
#
# Project created by QtCreator 2022-07-09T08:38:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = chengyi
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    form_meun.cpp \
    form_history.cpp \
    form_maunal.cpp \
    form_auto.cpp \
    form_history2.cpp \
    form_history3.cpp \
    form_warning.cpp \
    form_parameter.cpp \
    softkeylineedit.cpp \
    numkeyboard.cpp

HEADERS += \
        widget.h \
    form_meun.h \
    form_history.h \
    form_maunal.h \
    form_auto.h \
    form_history2.h \
    form_history3.h \
    form_warning.h \
    form_parameter.h \
    softkeylineedit.h \
    numkeyboard.h

FORMS += \
        widget.ui \
    form_meun.ui \
    form_history.ui \
    form_maunal.ui \
    form_auto.ui \
    form_history2.ui \
    form_history3.ui \
    form_warning.ui \
    form_parameter.ui

RESOURCES += \
    qss.qrc
