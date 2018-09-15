#ifndef REPOSITORIOCONSULTA_H
#define REPOSITORIOCONSULTA_H

#include "consulta.h"

#include <QVector>



class RepositorioConsulta
{
public:
    RepositorioConsulta();

    void cadastrarConsulta(Consulta c);
    Consulta *procurar(QString id);
    QVector<Consulta>* procurar(QDate data);
    void atualizar(Consulta c);
    void remover(QString id);

private:
    QVector<Consulta> consultas;

    int getPos(QString id);
};

#endif // REPOSITORIOCONSULTA_H
