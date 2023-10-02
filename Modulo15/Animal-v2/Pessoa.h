#ifndef PESSOA_H
#define PESSOA_H

#include "AnimalDomestico.h"
#include <algorithm>
#include <vector>
using namespace std;

enum Criterio { NOSORTED, NOME, PESO, ESPECIE };

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
    void imprime(Criterio opcao = NOSORTED);
private:
    string nome;
    int idade;
    vector<AnimalDomestico*> animais;
};

#endif /* PESSOA_H */