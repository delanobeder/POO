#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Cadastro;

class Pessoa {
    friend Cadastro;
private:
    string nome;
    int idade;
    Pessoa();
public:
    Pessoa(string nome, int idade);
    virtual ~Pessoa();
    virtual void imprime() const;
    static bool compara(const Pessoa p1, const Pessoa p2);
};

#endif /* PESSOA_H */

