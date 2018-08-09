TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    usuario.cpp \
    paciente.cpp \
    cirurgia.cpp

HEADERS += \
    usuario.h \
    paciente.h \
    cirurgia.h
