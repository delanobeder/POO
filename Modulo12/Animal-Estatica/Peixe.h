#ifndef PEIXE_H
#define PEIXE_H

#include "AnimalDomestico.h"

class Peixe : public AnimalDomestico {
public:
    Peixe(string nome, double peso, string habitat);
    virtual ~Peixe();
    string getHabitat() const;
    void setHabitat(string habitat);
    void imprime();
private:
    string habitat;
};

#endif /* PEIXE_H */