#include "Pessoa.h"
#include "Professor.h"
#include "Coordenador.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using namespace poo;

int main() {
    
    vector<Pessoa*> pessoas;
    
    Pessoa* p1 = new Pessoa("Fulano", 12345);
     
    Professor* p2 = new Professor("Sincrano", 54321, 1000);
    
    Coordenador* p3 = new Coordenador("Beltrano", 13579, 2000, "BCC");

    cout << endl << "----------------------------- " << endl << endl;

    pessoas.push_back(p1);
    pessoas.push_back(p2);
    pessoas.push_back(p3);

    for (long unsigned int i = 0; i < 3; i++) {
        pessoas[i]->imprime();
        cout << endl;
    }

    cout << "----------------------------- " << endl << endl;

    sort(pessoas.begin(), pessoas.end(), Pessoa::comparaNome);

    for (long unsigned int i = 0; i < 3; i++) {
        pessoas[i]->imprime();
        cout << endl;
    }

    cout << "----------------------------- " << endl << endl;

    delete p1;
    delete p2;
    delete p3;
    
    return 0;
}

