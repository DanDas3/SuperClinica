#ifndef REPOSITORIOUSUARIO_H
#define REPOSITORIOUSUARIO_H

#include <QVector>
//#include "usuario.h"

template <typename T>
class RepositorioUsuario
{
public:
    RepositorioUsuario(){}

    RepositorioUsuario(QVector<T> u){
        usuarios = u;
    }

    /*void cadastrarUsuario(Usuario u);
    Usuario* procurar(QString id);
    QVector<Usuario> *getDados() const;
    void remover(QString id);*/
    void cadastrarUsuario(T u) {
        this->usuarios.append(u);
    }

    T* procurar(QString id) {
        int total = usuarios.size();
        bool continuar = true;
        T *u = 0;
        int i = 0;

        i = getPos(id);

        if(i != -1) {
            u = &usuarios[i];
        }
        return u;
    }
    QVector<T> *getDados() const {
        QVector<T> *l = new QVector<T>(usuarios);
        return l;
    }
    void remover(QString id) {
        int i = getPos(id);
        if(i != -1) {
            usuarios.remove(i);
        }
    }

private:
    //QVector<Usuario> usuarios;
    QVector<T> usuarios;

    int getPos(QString id) {
        int i = 0;
        int size = usuarios.size();
        bool continuar = true;
        while (i < size && continuar) {
            if(usuarios[i].getId() == id) {
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
};

#endif // REPOSITORIOUSUARIO_H
