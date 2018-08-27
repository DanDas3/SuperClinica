#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H

#include "repositoriousuario.h"



class ControladorUsuario
{
public:

    static ControladorUsuario *getInstance();

private:
    ControladorUsuario();
    static ControladorUsuario *instance;
    RepositorioUsuario repositorio;
    virtual ~ControladorUsuario();
};

#endif // CONTROLADORUSUARIO_H
