#ifndef CONTROLADORCONSULTA_H
#define CONTROLADORCONSULTA_H

#include "repositorioconsulta.h"



class ControladorConsulta
{
public:

    static ControladorConsulta *getInstance();

    void cadastrar(Consulta c);
    Consulta *procurar(QString id);
    QVector<Consulta>* procurar(QDate data);
    void remover(QString id);

private:
    ControladorConsulta();
    static ControladorConsulta *instance;
    RepositorioConsulta repositorio;
    virtual ~ControladorConsulta();
};

#endif // CONTROLADORCONSULTA_H
