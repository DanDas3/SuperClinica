#include "consulta.h"

Consulta::Consulta()
{

}

QDate Consulta::getData() const
{
    return data;
}

void Consulta::setData(const QDate &value)
{
    data = value;
}

Medico Consulta::getMedico() const
{
    return medico;
}

void Consulta::setMedico(const Medico &value)
{
    medico = value;
}

Paciente Consulta::getPaciente() const
{
    return paciente;
}

void Consulta::setPaciente(const Paciente &value)
{
    paciente = value;
}

Prontuario Consulta::getProntuario() const
{
    return prontuario;
}

void Consulta::setProntuario(const Prontuario &value)
{
    prontuario = value;
}

QString Consulta::getId() const
{
    return id;
}

void Consulta::setId(const QString &value)
{
    id = value;
}
