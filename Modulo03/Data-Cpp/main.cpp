#include <iostream>
#include "Data.h"

using namespace std;

int main() {

    Data d1(20, 8, 2019);
    Data d2(20, 8, 2020);
    Data d3(20, 8, 2019); 
    
    d1.imprime();
    d1.imprimePorExtenso();
    d2.imprime();
    d2.imprimePorExtenso();
    
    cout << boolalpha; 
    cout << d1.anoBissexto() << endl;
    cout << d2.anoBissexto() << endl;
    
    cout << noboolalpha; 
    cout << d1.anoBissexto() << endl;
    cout << d2.anoBissexto() << endl;
    
    cout << d1.compare(d2) << endl;
    cout << d1.compare(d3) << endl;
    cout << d2.compare(d1) << endl;
   
    return 0;
}

