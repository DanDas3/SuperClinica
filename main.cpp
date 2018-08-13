#include <iostream>
#include <QtDebug>
#include "repositoriousuario.h"
#include "paciente.h"

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

    Usuario *p = 0;
    p = new Paciente();
    ((Paciente*)p)->getCirurgia();
    //cout << "Nome: " << repositorio.procurar("1111")->getNome().toStdString() << endl;
    return 0;
}
