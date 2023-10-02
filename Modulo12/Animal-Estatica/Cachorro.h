#ifndef CACHORRO_H
#define CACHORRO_H

#include "AnimalDomestico.h"

class Cachorro : public AnimalDomestico {
public:
    Cachorro(string nome, double peso, string raca);
    virtual ~Cachorro();
    string getRaca() const;
    void setRaca(string raca);
    void imprime();
private:
    string raca;
};

#endif /* CACHORRO_H */