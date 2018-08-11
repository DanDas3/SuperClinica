#include "prontuario.h"

Prontuario::Prontuario()
{

}

QString Prontuario::getQueixaPaciente() const
{
    return queixaPaciente;
}

void Prontuario::setQueixaPaciente(const QString &value)
{
    queixaPaciente = value;
}
