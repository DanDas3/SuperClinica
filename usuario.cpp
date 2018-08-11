#include "usuario.h"

Usuario::Usuario()
{

}

QString Usuario::getNome() const
{
    return nome;
}

void Usuario::setNome(const QString &value)
{
    nome = value;
}

QString Usuario::getCpf() const
{
    return cpf;
}

void Usuario::setCpf(const QString &value)
{
    cpf = value;
}

int Usuario::getSenhaHash() const
{
    return senhaHash;
}

QString Usuario::getId() const
{
    return id;
}

void Usuario::setId(const QString &value)
{
    id = value;
}

int Usuario::getIdade() const
{
    return idade;
}

void Usuario::setIdade(int value)
{
    idade = value;
}

bool Usuario::operator ==(const Usuario* a)
{
    if(cpf == a->cpf) {
        return true;
    } else {
        return false;
    }
}
