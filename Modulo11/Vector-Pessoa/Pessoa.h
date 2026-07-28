#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {
public:
    Pessoa(string nome, int CPF);
    virtual ~Pessoa();
    int getCPF() const;
    void setCPF(int CPF);
    string getNome() const;
    void setNome(string nome);
    virtual void imprime() const;

    bool static comparaNome(Pessoa* p1, Pessoa* p2);
    bool static comparaCPF(Pessoa* p1, Pessoa* p2);
private:
    string nome;
    int CPF;
};

#endif /* PESSOA_H */
