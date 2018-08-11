#ifndef CIRURGIA_H
#define CIRURGIA_H

#include "medico.h"
#include <string>
#include <QDate>

class Paciente;

class Cirurgia
{
public:
    Cirurgia();

    string getId() const;
    void setId(const string &value);

    Paciente *getPaciente() const;
    void setPaciente(Paciente *value);

    Medico getMedico() const;
    void setMedico(const Medico &value);

    bool getMarcada() const;
    void setMarcada(bool value);

    QDate getData() const;
    void setData(const QDate &value);

    string getTipoCirurgia() const;
    void setTipoCirurgia(const string &value);

private:
    string id;
    Paciente *paciente;
    Medico medico;
    bool marcada;
    QDate data;
    string tipoCirurgia;
};

#endif // CIRURGIA_H
