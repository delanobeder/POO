#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {
public:
    Pessoa(string nome, int CPF);
    virtual ~Pessoa();
    int getCPF() const;
    string getNome() const;
    virtual void imprime() const;
private:
    string nome;
    int CPF;
};

#endif /* PESSOA_H */
