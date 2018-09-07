#ifndef PACIENTE_H
#define PACIENTE_H

#include "usuario.h"
#include "cirurgia.h"
#include "prontuario.h"

class Paciente : public Usuario
{
public:
    Paciente();
    virtual ~Paciente();
    Cirurgia getCirurgia() const;
    void setCirurgia(const Cirurgia &value);

    Prontuario getProntuario() const;
    void setProntuario(const Prontuario &value);

private:
    Cirurgia cirurgia;
    Prontuario prontuario;
};

#endif // PACIENTE_H
