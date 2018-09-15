#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H

#include <QDataStream>
#include <QFile>
#include <QDebug>

#include "repositoriousuario.h"


template <typename T>
class ControladorUsuario
{
public:

    ControladorUsuario() {}
    virtual ~ControladorUsuario(){}

    void cadastrar(T u) {
        repositorio.cadastrarUsuario(u);
    }

    T* procurar(QString id) {
        T* u = repositorio.procurar(id);
        return u;
    }

    void remover(QString id) {
        repositorio.remover(id);
    }

    void atualizar(QString id, T u) {
        repositorio.atualizar(id, u);
    }

    void salvarDados(QString file)
    {
        QFile f(file);

        if(!f.open(QIODevice::WriteOnly)) {
            qDebug() << "Nao foi possivel abrir o arquivo";
            return;
        }

        QDataStream out(&f);
        QVector<T> *l = repositorio.getDados();
        out.setVersion(QDataStream::Qt_5_10);
        out << l;
        delete l;
        f.flush();
        f.close();
    }

    void carregarDados(QString file) {

    }

private:
    RepositorioUsuario<T> repositorio;
};

#endif // CONTROLADORUSUARIO_H
