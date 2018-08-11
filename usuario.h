#ifndef USUARIO_H
#define USUARIO_H

#include <QString>

class Usuario
{
public:
    Usuario();

    QString getNome() const;
    void setNome(const QString &value);

    QString getCpf() const;
    void setCpf(const QString &value);

    int getSenhaHash() const;

    QString getId() const;
    void setId(const QString &value);

    int getIdade() const;
    void setIdade(int value);

    bool operator ==(const Usuario *a);

private:
    QString nome;
    QString cpf;
    int senhaHash;
    QString id;
    int idade;

};

#endif // USUARIO_H
