#ifndef PRONTUARIO_H
#define PRONTUARIO_H

#include <string>

class Prontuario
{
public:
    Prontuario();


    std::string getQueixaPaciente() const;
    void setQueixaPaciente(const std::string &value);

private:
    std::string queixaPaciente;
};

#endif // PRONTUARIO_H
