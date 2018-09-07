#ifndef MEDICO_H
#define MEDICO_H

#include "usuario.h"

class Medico : public Usuario
{
public:
    Medico();
    Medico(QString especialidade);

    QString getEspecialidade() const;
    void setEspecialidade(const QString &value);

private:
    QString especialidade;
};

#endif // MEDICO_H
