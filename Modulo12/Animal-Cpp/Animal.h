#ifndef ANIMALDOMESTICO_H
#define ANIMALDOMESTICO_H

#include <string>
#include <iostream>
using namespace std;

class Animal {
public:
    Animal(string nome, double peso);
    virtual ~Animal();
    string getNome() const;
    void setNome(string nome);
    double getPeso() const;
    void setPeso(double peso);
    virtual string getEspecie() const = 0;
    virtual void imprime() const;
    
    static bool compNome(const Animal* a1, const Animal* a2);
    static bool compPeso(const Animal* a1, const Animal* a2);
    static bool compEspecie(const Animal* a1, const Animal* a2);
private:
    string nome;
    double peso;
};

#endif /* ANIMALDOMESTICO_H */