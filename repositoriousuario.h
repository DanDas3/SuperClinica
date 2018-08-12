#ifndef REPOSITORIOUSUARIO_H
#define REPOSITORIOUSUARIO_H

#include <QVector>
#include "usuario.h"

class RepositorioUsuario
{
public:
    RepositorioUsuario();
    RepositorioUsuario(QVector<Usuario> u);

    void cadastrarUsuario(Usuario u);
    Usuario* procurar(QString id);
    void remover(QString id);
private:
    QVector<Usuario> usuarios;

    int getPos(QString id);
};

#endif // REPOSITORIOUSUARIO_H
