#include "controladorconsulta.h"

ControladorConsulta* ControladorConsulta::instance = 0;

ControladorConsulta *ControladorConsulta::getInstance()
{
    if(instance == 0) {
        instance = new ControladorConsulta();
        return instance;
    }
    return instance;
}

void ControladorConsulta::cadastrar(Consulta c)
{
    repositorio.cadastrarConsulta(c);
}

Consulta *ControladorConsulta::procurar(QString id)
{
    Consulta *c = repositorio.procurar(id);
    return c;
}

QVector<Consulta> *ControladorConsulta::procurar(QDate data)
{
    QVector<Consulta> *v = repositorio.procurar(data);
    return v;
}

void ControladorConsulta::remover(QString id)
{
    repositorio.remover(id);
}

ControladorConsulta::ControladorConsulta()
{

}

ControladorConsulta::~ControladorConsulta()
{

}
