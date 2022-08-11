#-------------------------------------------------
#
# Project created by QtCreator 2022-07-09T08:38:33
#
#-------------------------------------------------

QT       += core gui
QT       += sql

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
    numkeyboard.cpp \
    mylineedit.cpp \
    datatimeshow.cpp \
    form_standardization.cpp \
    form_timemodify.cpp \
    form_malfunction.cpp \
    form_maunaltext.cpp \
    form_zero.cpp \
    database.cpp

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
    numkeyboard.h \
    mylineedit.h \
    datatimeshow.h \
    form_standardization.h \
    form_timemodify.h \
    form_malfunction.h \
    form_maunaltext.h \
    form_zero.h \
    database.h

FORMS += \
        widget.ui \
    form_meun.ui \
    form_history.ui \
    form_maunal.ui \
    form_auto.ui \
    form_history2.ui \
    form_history3.ui \
    form_warning.ui \
    form_parameter.ui \
    form_standardization.ui \
    form_timemodify.ui \
    form_malfunction.ui \
    form_maunaltext.ui \
    form_zero.ui

RESOURCES += \
    qss.qrc
