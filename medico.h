#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include "usuario.h"

using namespace std;

class Medico : public Usuario
{
public:
    Medico();

private:
    string especialidade;
};

#endif // MEDICO_H
