#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>
using namespace std;

class Pessoa {
public:
    Pessoa(string nome, int idade);
    ~Pessoa();
    int getIdade() const;
    void setIdade(int idade);
    string getNome() const;
    void setNome(string nome);
    void imprime() const;
    int compare(const Pessoa& p) const;
    static int getContador();

private:
    static void decrementa();
    static void incrementa();
    string nome;
    int idade;
    static int contador;
};


#endif /* PESSOA_H */

