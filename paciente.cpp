#include "paciente.h"

Paciente::Paciente()
{

}

Paciente::~Paciente()
{

}

Cirurgia Paciente::getCirurgia() const
{
    return cirurgia;
}

void Paciente::setCirurgia(const Cirurgia &value)
{
    cirurgia = value;
}

Prontuario Paciente::getProntuario() const
{
    return prontuario;
}

void Paciente::setProntuario(const Prontuario &value)
{
    prontuario = value;
}
