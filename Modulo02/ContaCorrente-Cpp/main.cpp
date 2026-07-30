#include <iostream>
#include "ContaCorrente.h"
using namespace std;

int main() {

    ContaCorrente c1(1000, 1200.50);
    ContaCorrente c2(2000);
    
    cout << endl << "============================" << endl;
    cout << "Antes da Transferência" << endl;
    cout << "============================" << endl << endl;
    
    c1.imprime();
    c2.imprime();
    
    c1.transferencia(c2, 500);
    
    cout << endl << "============================" << endl;
    cout << "Depois da Transferência" << endl;
    cout << "============================" << endl << endl;
    
    c1.imprime();
    c2.imprime();
    
    cout << endl;
    
    return 0;
}

