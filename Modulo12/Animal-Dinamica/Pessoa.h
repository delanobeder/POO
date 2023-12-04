#ifndef PESSOA_H
#define PESSOA_H

#include "AnimalDomestico.h"

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
    void realoca(int tam);
    string nome;
    int idade;
    AnimalDomestico** animais;
    int qtde;
    int max;
};

#endif /* PESSOA_H */