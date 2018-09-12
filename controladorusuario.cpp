#include "controladorusuario.h"

#include <QDataStream>
#include <QFile>
#include <QDebug>

/*ControladorUsuario* ControladorUsuario::instance = 0;

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

void ControladorUsuario::cadastrar(Usuario u)
{
    repositorio.cadastrarUsuario(u);
}

Usuario *ControladorUsuario::procurar(QString id)
{
    Usuario *u = repositorio.procurar(id);
    return u;
}

void ControladorUsuario::remover(QString id)
{
    repositorio.remover(id);
}

void ControladorUsuario::salvarDados(QString file)
{
    QFile f(file);

    if(!f.open(QIODevice::WriteOnly)) {
        qDebug() << "Nao foi possivel abrir o arquivo";
        return;
    }

    QDataStream out(&f);
    QVector<Usuario> *l = repositorio.getDados();
    out.setVersion(QDataStream::Qt_5_10);
    out << l;
    delete l;
    f.flush();
    f.close();
}*/

/*void ControladorUsuario::carregarDados(QString file)
{*/
    /*QFile f(file);

    if(!f.open(QIODevice::ReadOnly)) {
        qDebug() << "Nao foi possivel abrir o arquivo";
        return;
    }

    QDataStream in(&f);
    //QVector<Usuario> *l = repositorio.getDados();
    QVector<Usuario> l;
    in.setVersion(QDataStream::Qt_5_10);
    in >> &l;
    //delete l;
    f.flush();
    f.close();*/
//}
