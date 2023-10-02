#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"

class Cachorro : public Animal {
public:
    Cachorro(string nome, double peso, string raca);
    virtual ~Cachorro();
    string getRaca() const;
    void setRaca(string raca);
    virtual string getEspecie() const;
    virtual void imprime() const;
private:
    string raca;
};

#endif /* CACHORRO_H */