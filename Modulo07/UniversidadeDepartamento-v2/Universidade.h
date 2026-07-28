#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include <iostream>
#include <vector>
#include "Departamento.h"

using namespace std;

class Universidade {
public:
    Universidade(string nome);
    virtual ~Universidade();
    string getNome() const;
    void setNome(string nome);
    void adicionaDepartamento(string nome, string sigla);
    void removeDepartamento(string sigla);
    void imprime() const;
private:
    void realoca(int tam);
    string nome;
    vector<Departamento*> departamentos;
    int max;
};

#endif /* UNIVERSIDADE_H */