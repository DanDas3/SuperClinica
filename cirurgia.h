#ifndef CIRURGIA_H
#define CIRURGIA_H

#include "medico.h"
#include <QDate>

class Paciente;

class Cirurgia
{
public:
    Cirurgia();

    QString getId() const;
    void setId(const QString &value);

    Paciente *getPaciente() const;
    void setPaciente(Paciente *value);

    Medico getMedico() const;
    void setMedico(const Medico &value);

    bool getMarcada() const;
    void setMarcada(bool value);

    QDate getData() const;
    void setData(const QDate &value);

    QString getTipoCirurgia() const;
    void setTipoCirurgia(const QString &value);

private:
    QString id;
    Paciente *paciente;
    Medico medico;
    bool marcada;
    QDate data;
    QString tipoCirurgia;
};

#endif // CIRURGIA_H
