#include "Triangulo.h"
#include "Equilatero.h"

int main() {

    Triangulo t1(3,4,5);
    Equilatero t2(3);
    int res;
    
    t1.imprime();
    
    cout << endl;
    
    t2.imprime();
    
    cout << endl;

    // Comparando t1 com t2
    
    res = t1.compare(t2);
    cout << "Comparando t1 com t2: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    // Comparando t1 com t2
    
    res = t2.compare(t1);
    cout << "Comparando t2 com t1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl << endl;

    // Comparando t1 com t1
    
    res = t1.compare(t1);
    cout << "Comparando t1 com t1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    // Comparando t2 com t2
    
    res = t2.compare(t2);
    cout << "Comparando t2 com t2: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;
    
    return 0;
}

