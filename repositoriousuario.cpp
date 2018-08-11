#include <algorithm>
#include "repositoriousuario.h"

RepositorioUsuario::RepositorioUsuario()
{

}

RepositorioUsuario::RepositorioUsuario(int n)
{
    this->usuarios.resize(n);
}

RepositorioUsuario::RepositorioUsuario(std::vector<Usuario> u)
{
    this->usuarios = u;
}

void RepositorioUsuario::cadastrarUsuario(Usuario u)
{
    this->usuarios.push_back(u);
}

Usuario& RepositorioUsuario::procurar(std::string id)
{
    int total = usuarios.size();
    bool continuar = true;
    Usuario &u;
    for (int i = 0; i < total && continuar; ++i) {
        if(usuarios[i].getId() == id) {
            u = usuarios[i];
            continuar = false;
        }
    }
    return u;
}

void RepositorioUsuario::remover(string id)
{
    std::remove(usuarios.begin(), usuarios.end(), this->procurar(id));
}
