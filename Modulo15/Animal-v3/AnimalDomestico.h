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
    virtual string getEspecie() = 0;
    virtual void imprime();
    bool operator<(AnimalDomestico& animal);
private:
    Pessoa* dono;
    string nome;
    double peso;
};

#endif /* ANIMALDOMESTICO_H */