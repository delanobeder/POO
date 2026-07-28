#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>
using namespace std;

class Funcionario {
public:
    Funcionario(string CPF, string nome);
    virtual ~Funcionario();
    virtual string getProfissao() const = 0; // método abstrato
    virtual void imprime() const;
private:
    string CPF;
    string nome;
};

#endif /* PESSOA_H */