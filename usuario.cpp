#include "usuario.h"

Usuario::Usuario()
{

}

string Usuario::getNome() const
{
    return nome;
}

void Usuario::setNome(const string &value)
{
    nome = value;
}

string Usuario::getCpf() const
{
    return cpf;
}

void Usuario::setCpf(const string &value)
{
    cpf = value;
}

int Usuario::getSenhaHash() const
{
    return senhaHash;
}

string Usuario::getId() const
{
    return id;
}

void Usuario::setId(const string &value)
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

bool Usuario::operator ==(Usuario &b)
{
    if(this->nome != b.nome) {
        return false;
    }

    if(this->cpf != b.cpf) {
        return false;
    }

    if(this->senhaHash != b.senhaHash) {
        return false;
    }

    if(this->id != b.id) {
        return false;
    }

    if(this->idade != b.idade) {
        return false;
    }

    return true;
}
