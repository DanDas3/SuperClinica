#include <algorithm>
#include "repositoriousuario.h"

RepositorioUsuario::RepositorioUsuario()
{

}

RepositorioUsuario::RepositorioUsuario(int n)
{
    this->usuarios.resize(n);
}

RepositorioUsuario::RepositorioUsuario(QVector<Usuario> u)
{
    this->usuarios = u;
}

void RepositorioUsuario::cadastrarUsuario(Usuario u)
{
    this->usuarios.push_back(u);
}

Usuario* RepositorioUsuario::procurar(QString id)
{
    int total = usuarios.size();
    bool continuar = true;
    int i;

    for (i = 0; i < total && continuar; ++i) {
        if(usuarios[i].getId() == id) {
            continuar = false;
        }
    }
    return &usuarios[i];
}

void RepositorioUsuario::remover(QString id)
{
    std::remove(usuarios.begin(), usuarios.end(), this->procurar(id));
}
