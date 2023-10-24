#ifndef PROFESSOR_H
#define PROFESSOR_H

/* Adicionem a subclasse Professor (Pessoa)
com atributo float salario
getSalario e setSalario
reimplemente o imprime() para imprimir o salario */

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