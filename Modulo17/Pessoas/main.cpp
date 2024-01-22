#include "Cadastro.h"
#include "Pessoa.h"
#include <iostream>
using namespace std;

int main() {

    Cadastro c("info.dat");
    int pos;
    
    c.grava();
    
    cout << endl << "-------------------------" << endl << endl;

    c.imprime();

    cout << "-------------------------" << endl << endl;

    cout << "Posicao: ";
    cin >> pos;
    cout << endl;

    c.imprime(pos);
    
    cout << "-------------------------" << endl << endl;

    return 0;
}
