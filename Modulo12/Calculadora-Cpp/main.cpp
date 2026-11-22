#include <iostream>

#include "Calculadora.h"
#include "Complexo.h"
using namespace std;
using namespace poo;

template <class X> 
void troca(X& a, X& b) {
    X aux = a;
    a = b;
    b = aux;
}

int main() {

    int i = 10, j = 20;
    double x = 10.1, y = 23.3;
    char a = 'A', b = 'Z';

    cout << "Original: " << i << " " << j << endl;
    cout << "Original: " << x << " " << y << endl;
    cout << "Original: " << a << " " << b << endl;
    cout << endl;

    troca(i, j); // Troca inteiros
    troca(x, y); // Troca números double
    troca(a, b); // Troca caracteres

    cout << "Depois da Troca: " << i << " " << j << endl;
    cout << "Depois da Troca: " << x << " " << y << endl;
    cout << "Depois da Troca: " << a << " " << b << endl;
    cout << endl;

    Calculadora<int> cInt(10, 3);
    cInt.imprime();

    cout << endl;

    Calculadora<float> cFloat(10.1, 3.1);
    cFloat.imprime();

    cout << endl;

    Calculadora<Complexo> cComplexo(Complexo(3, 4), Complexo(1, 2));
    cComplexo.imprime();

    return 0;
}
