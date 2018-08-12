#include <iostream>
#include <QtDebug>
#include "repositoriousuario.h"

using namespace std;

int main()
{
    RepositorioUsuario repositorio;
    Usuario u, *a;
    u.setId("1111");
    u.setNome("Danilo Araujo");

    repositorio.cadastrarUsuario(u);

    a = repositorio.procurar("1111");
    qDebug() << "Nome: " << repositorio.procurar("1111")->getNome() << endl;

    repositorio.remover("1111");

    a = repositorio.procurar("1111");
    if(a == 0) {
        qDebug() << "Erro! elemento vazio" << endl;
    }
    //cout << "Nome: " << repositorio.procurar("1111")->getNome().toStdString() << endl;
    return 0;
}
