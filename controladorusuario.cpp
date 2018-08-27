#include "controladorusuario.h"

ControladorUsuario* ControladorUsuario::instance = 0;

ControladorUsuario::ControladorUsuario()
{

}

ControladorUsuario::~ControladorUsuario()
{

}

ControladorUsuario *ControladorUsuario::getInstance()
{
    if(instance == 0) {
        instance = new ControladorUsuario();
        return instance;
    }
    return instance;
}
