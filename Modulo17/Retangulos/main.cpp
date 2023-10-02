#include "Cadastro.h"
#include "Retangulo.h"
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

    cout << "Posicao: ";
    cin >> pos;
    cout << endl;

    c.altera(pos);
    
    cout << "-------------------------" << endl << endl;

    c.ordenaArquivo();
    
    c.imprime();

    return 0;
}
