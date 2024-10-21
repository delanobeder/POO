#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "ContaCorrente.h"

class ContaChequeEspecial : public ContaCorrente {
public:
    ContaChequeEspecial(int numero, double saldo, double credito); // construtor 
    virtual ~ContaChequeEspecial(); // destrutor
    // métodos da classe
    double getCredito() const;
    void imprime() const;
private: // atributos da classe
    double credito;
};

#endif /* CONTAESPECIAL_H */

