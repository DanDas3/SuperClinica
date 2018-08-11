#ifndef PRONTUARIO_H
#define PRONTUARIO_H

#include <QString>

class Prontuario
{
public:
    Prontuario();


    QString getQueixaPaciente() const;
    void setQueixaPaciente(const QString &value);

private:
    QString queixaPaciente;
};

#endif // PRONTUARIO_H
