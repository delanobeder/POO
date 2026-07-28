#ifndef PEIXE_H
#define PEIXE_H

#include "Animal.h"

class Peixe : public Animal {
public:
    Peixe(string nome, double peso, string habitat);
    virtual ~Peixe();
    string getHabitat() const;
    void setHabitat(string habitat);
    virtual string getEspecie() const;
    virtual void imprime() const;
private:
    string habitat;
};

#endif /* PEIXE_H */