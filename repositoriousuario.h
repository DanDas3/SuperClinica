#ifndef REPOSITORIOUSUARIO_H
#define REPOSITORIOUSUARIO_H

#include <vector>
#include "usuario.h"

class RepositorioUsuario
{
public:
    RepositorioUsuario();
    RepositorioUsuario(int n);
    RepositorioUsuario(std::vector<Usuario> u);

    void cadastrarUsuario(Usuario u);
    Usuario& procurar(string id);
    void remover(std::string id);
private:
    std::vector<Usuario> usuarios;
};

#endif // REPOSITORIOUSUARIO_H
