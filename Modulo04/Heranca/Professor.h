#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"

class Professor : public Pessoa {
public:
    Professor(string nome, int idade, float salario);
    float getSalario() const;
    void setSalario(float value);
    void imprime() const;
private:
    float salario;
};

#endif /* PROFESSOR_H */
