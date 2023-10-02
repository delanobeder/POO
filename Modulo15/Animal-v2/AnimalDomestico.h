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
    virtual string getEspecie() const = 0;
    virtual void imprime();
    
    static bool compNome(const AnimalDomestico* a1, const AnimalDomestico* a2);
    static bool compPeso(const AnimalDomestico* a1, const AnimalDomestico* a2);
    static bool compEspecie(const AnimalDomestico* a1, const AnimalDomestico* a2);
private:
    Pessoa* dono;
    string nome;
    double peso;
};

#endif /* ANIMALDOMESTICO_H */