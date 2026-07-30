#include <iostream>
#include <iomanip>
#include "ContaCorrente.h"

using namespace std;

// Construtor

ContaCorrente::ContaCorrente(int numero, double saldo) {
    cout << "Construindo Conta " << numero << endl;
    this->numero = numero;
    this->saldo = saldo;
}

// Destrutor

ContaCorrente::~ContaCorrente() {
    cout << "Destruindo Conta " << numero << endl;
}

// Métodos getters e setters

int ContaCorrente::getNumero() const {
    return this->numero;
}

void ContaCorrente::setNumero(int numero){
    this->numero = numero;
}

double ContaCorrente::getSaldo() const {
    return this->saldo;
}

void ContaCorrente::setSaldo(double saldo){
    this->saldo = saldo;
}

// Outros métodos da classe

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
    cout << fixed << setprecision(2);
    cout << "Numero: " << numero << ", ";
    cout << "Saldo: " << saldo << endl;
}
