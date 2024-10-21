#include <iostream>
#include "ContaCorrente.h"

using namespace std;

ContaCorrente::ContaCorrente(int numero, double saldo) {
    cout << "Construindo Conta " << numero << endl;
    this->numero = numero;
    this->saldo = saldo;
}

ContaCorrente::~ContaCorrente() {
    cout << "Destruindo Conta " << numero << endl;
}

int ContaCorrente::getNumero() const {
    return this->numero;
}

double ContaCorrente::getSaldo() const {
    return this->saldo;
}

bool ContaCorrente::retirada(double valor) {
    if (saldo >= valor) {
        saldo -= valor;
        return true;
    }
    return false;
}

bool ContaCorrente::deposito(double valor) {
    this->saldo += valor;
    return true;
}

bool ContaCorrente::transferencia(ContaCorrente &outra, double valor) {
    bool ok = this->retirada(valor);
    if (ok) {
        ok = outra.deposito(valor);
    }
    return ok;
}

void ContaCorrente::imprime() const {
    cout << "Numero: " << numero << endl;
    cout << "Saldo: " << saldo << endl;
}
