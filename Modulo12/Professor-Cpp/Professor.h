#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"

class Professor : public Pessoa {
public:
    Professor(string nome, int CPF, double salario);
    virtual ~Professor();
    virtual double getSalario() const;
    virtual void imprime() const;

private:
    double salario;
};

#endif /* PROFESSOR_H */
