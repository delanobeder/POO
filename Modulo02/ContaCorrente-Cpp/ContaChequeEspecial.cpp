#include <iostream>
#include "ContaChequeEspecial.h"

using namespace std;

ContaChequeEspecial::ContaChequeEspecial(int numero, double saldo, double credito) : ContaCorrente(numero, saldo) {
    cout << "Construindo Conta Especial " << numero << endl;
    this->credito = credito;
}

ContaChequeEspecial::~ContaChequeEspecial() {
    cout << "Destruindo Conta Especial " << this->getNumero() << endl;
}

double ContaChequeEspecial::getCredito() const {
    return this->credito;
}

void ContaChequeEspecial::imprime() const {
    ContaCorrente::imprime();
    cout << "Credito: " << credito << endl;
}
