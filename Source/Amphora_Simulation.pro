#-------------------------------------------------
#
# Project created by QtCreator 2013-11-08T09:46:36
#
#-------------------------------------------------

QT       += core gui xml opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Amphora_Simulation
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    paraboloid.cpp \
    phone.cpp \
    user.cpp \
    simulation.cpp \
    MatrixMath.cpp \
    Amphora.cpp \
    properties.cpp \
    background.cpp \
    aboutsimulation.cpp

HEADERS  += mainwindow.h \
    paraboloid.h \
    phone.h \
    user.h \
    simulation.h \
    MatrixMath.h \
    Amphora.h \
    properties.h \
    background.h \
    aboutsimulation.h

FORMS    += mainwindow.ui \
    properties.ui \
    aboutsimulation.ui

OTHER_FILES += \
    iPhone5.xml \
    iPhone4S.xml

