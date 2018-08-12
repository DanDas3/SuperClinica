#include <algorithm>
#include "repositoriousuario.h"

RepositorioUsuario::RepositorioUsuario()
{

}

RepositorioUsuario::RepositorioUsuario(QVector<Usuario> u)
{
    this->usuarios = u;
}

void RepositorioUsuario::cadastrarUsuario(Usuario u)
{
    this->usuarios.append(u);
}

Usuario* RepositorioUsuario::procurar(QString id)
{
    int total = usuarios.size();
    bool continuar = true;
    Usuario *u = 0;
    int i = 0;

    i = getPos(id);

    if(i != -1) {
        u = &usuarios[i];
    }
    return u;
}

void RepositorioUsuario::remover(QString id)
{
    //std::remove(usuarios.begin(), usuarios.end(), this->procurar(id));
    int i = getPos(id);
    if(i != -1) {
        usuarios.remove(i);
    }
}

int RepositorioUsuario::getPos(QString id)
{
    int i = 0;
    int size = usuarios.size();
    bool continuar = true;
    while (i < size && continuar) {
        if(usuarios[i].getId() == id) {
            continuar = false;
        } else {
            i += 1;
        }
    }
    if(continuar) {
        i = -1;
    }
    return i;
}
