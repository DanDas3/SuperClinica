#include "cirurgia.h"

Cirurgia::Cirurgia()
{

}

string Cirurgia::getId() const
{
    return id;
}

void Cirurgia::setId(const string &value)
{
    id = value;
}

Paciente *Cirurgia::getPaciente() const
{
    return paciente;
}

void Cirurgia::setPaciente(Paciente *value)
{
    paciente = value;
}

Medico Cirurgia::getMedico() const
{
    return medico;
}

void Cirurgia::setMedico(const Medico &value)
{
    medico = value;
}

bool Cirurgia::getMarcada() const
{
    return marcada;
}

void Cirurgia::setMarcada(bool value)
{
    marcada = value;
}

QDate Cirurgia::getData() const
{
    return data;
}

void Cirurgia::setData(const QDate &value)
{
    data = value;
}

string Cirurgia::getTipoCirurgia() const
{
    return tipoCirurgia;
}

void Cirurgia::setTipoCirurgia(const string &value)
{
    tipoCirurgia = value;
}
