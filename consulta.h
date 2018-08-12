#ifndef CONSULTA_H
#define CONSULTA_H

#include <QDate>
#include "medico.h"
#include "paciente.h"
class Consulta
{
public:
    Consulta();

    QDate getData() const;
    void setData(const QDate &value);

    Medico getMedico() const;
    void setMedico(const Medico &value);

    Paciente getPaciente() const;
    void setPaciente(const Paciente &value);

    Prontuario getProntuario() const;
    void setProntuario(const Prontuario &value);

    QString getId() const;
    void setId(const QString &value);

private:
    QDate data;
    Medico medico;
    Paciente paciente;
    Prontuario prontuario;
    QString id;
};

#endif // CONSULTA_H
