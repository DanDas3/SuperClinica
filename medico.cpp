#include "medico.h"

Medico::Medico()
{

}

Medico::Medico(QString especialidade)
{
    this->setEspecialidade(especialidade);
}

QString Medico::getEspecialidade() const
{
    return especialidade;
}

void Medico::setEspecialidade(const QString &value)
{
    especialidade = value;
}
