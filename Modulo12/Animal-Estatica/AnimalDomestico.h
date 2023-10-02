#ifndef ANIMALDOMESTICO_H
#define ANIMALDOMESTICO_H

#include <string>
#include <iostream>
using namespace std;

class Pessoa;

class AnimalDomestico {
public:
    AnimalDomestico(string nome, double peso);
    virtual ~AnimalDomestico();
    string getNome() const;
    void setNome(string nome);
    double getPeso() const;
    void setPeso(double peso);
    Pessoa* getDono() const;
    void setDono(Pessoa* dono);
    virtual void imprime();
private:
    string nome;
    double peso;
    Pessoa* dono;
};

#endif /* ANIMALDOMESTICO_H */