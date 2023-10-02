#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <string>
using namespace std;

class Universidade;

class Departamento {
public:
    Departamento(string nome, string sigla, Universidade* universidade);
    virtual ~Departamento();
    string getNome() const;
    void setNome(string nome);
    string getSigla() const;
    void setSigla(string sigla);
    Universidade* getUniversidade() const;
    void setUniversidade(Universidade* universidade);
    void imprime() const;
private:
    string nome;
    string sigla;
    Universidade* universidade;
};

#endif /* DEPARTAMENTO_H */

