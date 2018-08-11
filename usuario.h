#ifndef USUARIO_H
#define USUARIO_H

#include <string>
using namespace std;

class Usuario
{
public:
    Usuario();

    string getNome() const;
    void setNome(const string &value);

    string getCpf() const;
    void setCpf(const string &value);

    int getSenhaHash() const;

    string getId() const;
    void setId(const string &value);

    int getIdade() const;
    void setIdade(int value);

    bool operator ==(Usuario& b);

private:
    string nome;
    string cpf;
    int senhaHash;
    string id;
    int idade;

};

#endif // USUARIO_H
