#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#define FALSE 0
#define TRUE 1

typedef struct ContaCorrente {
    int numero;
    double saldo;
} ContaCorrente;

int retirada(ContaCorrente* conta, double valor);

void deposito(ContaCorrente* conta, double valor);

int transferencia(ContaCorrente* c1, ContaCorrente* c2, double valor);

void imprime(ContaCorrente conta);

#endif /* CONTACORRENTE_H */

