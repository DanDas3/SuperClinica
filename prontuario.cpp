#include "prontuario.h"

Prontuario::Prontuario()
{

}

std::string Prontuario::getQueixaPaciente() const
{
    return queixaPaciente;
}

void Prontuario::setQueixaPaciente(const std::string &value)
{
    queixaPaciente = value;
}
