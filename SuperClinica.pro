TEMPLATE = app
CONFIG += console #c++11
CONFIG += qt
#CONFIG -= app_bundle

QT += core

SOURCES += main.cpp \
    usuario.cpp \
    paciente.cpp \
    cirurgia.cpp \
    medico.cpp \
    recepcionista.cpp \
    prontuario.cpp \
    repositoriousuario.cpp \
    consulta.cpp \
    repositorioconsulta.cpp \
    controladorusuario.cpp \
    controladorconsulta.cpp

HEADERS += \
    usuario.h \
    paciente.h \
    cirurgia.h \
    medico.h \
    recepcionista.h \
    prontuario.h \
    repositoriousuario.h \
    consulta.h \
    repositorioconsulta.h \
    controladorusuario.h \
    controladorconsulta.h
