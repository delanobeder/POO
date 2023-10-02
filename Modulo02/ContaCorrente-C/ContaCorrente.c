#include <stdio.h>
#include "ContaCorrente.h"

int retirada(ContaCorrente* conta, double valor) {
    if (conta->saldo - valor >= 0) {
        conta->saldo -= valor;
        return TRUE;
    }
    return FALSE;
}

void deposito(ContaCorrente* conta, double valor) {
    conta->saldo += valor;
}

int transferencia(ContaCorrente* c1, ContaCorrente* c2, double valor) {
    int ok = retirada(c1, valor);
    if (ok) {
        deposito(c2, valor);
    }
    return ok;
}

void imprime(ContaCorrente conta) {
    printf("Numero: %d, saldo: %5.2f\n", conta.numero, conta.saldo);
}
