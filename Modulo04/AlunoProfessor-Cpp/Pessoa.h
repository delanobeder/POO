#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>
using namespace std;

class Pessoa {
public:
    Pessoa();
    Pessoa(string nome, int idade);
    virtual ~Pessoa();
    string getNome() const;
    void setNome(string nome);
    int getIdade() const;
    void setIdade(int idade);
    virtual void imprime() const;
    static int getContador();
private:
    string nome;
    int idade;
    static int contador;
    static void decrementa();
    static void incrementa();
};


#endif /* PESSOA_H */

