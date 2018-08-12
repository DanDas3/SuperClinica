#include "repositorioconsulta.h"

RepositorioConsulta::RepositorioConsulta()
{

}

void RepositorioConsulta::cadastrarConsulta(Consulta c)
{
    this->consultas.append(c);
}

Consulta *RepositorioConsulta::procurar(QString id)
{
    int total = consultas.size();
    bool continuar = true;
    Consulta *c = 0;
    int i = 0;

    i = getPos(id);

    if(i != -1) {
        c = &consultas[i];
    }
    return c;
}

QVector<Consulta> *RepositorioConsulta::procurar(QDate data)
{
    QVector<Consulta> *lc = new QVector<Consulta>();
    int total = consultas.size();
    for(int i = 0; i < total; i++) {
        if(consultas[i].getData() == data) {
            lc->append(consultas[i]);
        }
    }
    return lc;
}

void RepositorioConsulta::remover(QString id)
{
    int i = getPos(id);
    if(i != -1) {
        consultas.remove(i);
    }
}

int RepositorioConsulta::getPos(QString id)
{
    int i = 0;
    int size = consultas.size();
    bool continuar = true;
    while (i < size && continuar) {
        if(consultas[i].getId() == id) {
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
