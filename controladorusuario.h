#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H

#include "repositoriousuario.h"



class ControladorUsuario
{
public:

    static ControladorUsuario *getInstance();

    void cadastrar(Usuario u);
    Usuario* procurar(QString id);
    void remover(QString id);

    void salvarDados(QString file);
    void carregarDados(QString file);

private:
    ControladorUsuario();
    static ControladorUsuario *instance;
    RepositorioUsuario repositorio;
    virtual ~ControladorUsuario();
};

#endif // CONTROLADORUSUARIO_H
