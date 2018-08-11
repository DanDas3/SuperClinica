#ifndef MEDICO_H
#define MEDICO_H

#include "usuario.h"

using namespace std;

class Medico : public Usuario
{
public:
    Medico();

private:
    QString especialidade;
};

#endif // MEDICO_H
