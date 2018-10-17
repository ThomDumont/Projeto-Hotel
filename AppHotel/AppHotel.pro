#-------------------------------------------------
#
# Project created by QtCreator 2018-09-24T17:54:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AppHotel
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
        mainwindow.cpp \
    menu.cpp \
    cadastro.cpp \
    servicoquarto.cpp \
    remove_atualiza.cpp \
    busca.cpp \
    atualiza.cpp \
    confirma_remove.cpp

HEADERS += \
    cadastrado.hpp \
    les.hpp \
    mainwindow.hpp \
    filac.hpp \
    menu.hpp \
    cadastro.hpp \
    servicoquarto.hpp \
    remove_atualiza.hpp \
    busca.hpp \
    atualiza.hpp \
    confirma_remove.hpp

FORMS += \
        mainwindow.ui \
    menu.ui \
    cadastro.ui \
    servicoquarto.ui \
    remove_atualiza.ui \
    busca.ui \
    atualiza.ui \
    confirma_remove.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
