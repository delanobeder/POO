#ifndef PESSOA_H
#define PESSOA_H

#include "AnimalDomestico.h"

#define MAX 3

class Pessoa {
public:
    Pessoa(string nome, int idade);
    virtual ~Pessoa();
    int getIdade() const;
    void setIdade(int idade);
    string getNome() const;
    void setNome(string nome);
    bool adiciona(AnimalDomestico* a);
    bool remove(string nome);
    void imprime();
private:
    string nome;
    int idade;
    AnimalDomestico* animais[MAX];
    int qtde;
};

#endif /* PESSOA_H */