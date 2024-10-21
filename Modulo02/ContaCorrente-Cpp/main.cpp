#include <iostream>
#include "ContaChequeEspecial.h"

using namespace std;

int main() {

    ContaCorrente c1(1000, 1200.50);
    ContaChequeEspecial c2(2000, 0, 500);
    
    cout << endl << "Antes da Transferência" << endl << endl;
    
    c1.imprime();
    cout << endl;
    c2.imprime();
    
    c1.transferencia(c2, 500);
    
    cout << endl << "Depois da Transferência" << endl << endl;
    
    c1.imprime();
    cout << endl;
    c2.imprime();
    
    cout << endl;
    
    return 0;
}

