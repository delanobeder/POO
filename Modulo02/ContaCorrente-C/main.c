#include <stdio.h>
#include "ContaCorrente.h"

void main() {

    ContaCorrente c1;
    c1.numero = 1000;
    c1.saldo = 1200.50;
    
    ContaCorrente c2;
    c2.numero = 2000;
    c2.saldo = 0;
    
    printf("============================\n");
    printf("Antes da Transferência\n");
    printf("============================\n\n");

    imprime(c1);
    imprime(c2);
    
    transferencia(&c1, &c2, 500);

    printf("\n============================\n");
    printf("Depois da Transferência\n");
    printf("============================\n\n");   
    
    imprime(c1);
    imprime(c2);

    printf("\n");
}