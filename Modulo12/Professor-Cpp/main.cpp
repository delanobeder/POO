#include "Pessoa.h"
#include "Professor.h"
#include "Coordenador.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    vector<Pessoa*> pessoas;
    
    Pessoa p1("Fulano", 12345);
     
    Professor* p2 = new Professor("Sincrano", 54321, 1000);
    
    Coordenador p3("Beltrano", 13579, 2000, "BCC");

    cout << endl << "----------------------------- " << endl << endl;

    pessoas.push_back(&p1);
    pessoas.push_back(p2);
    pessoas.push_back(&p3);

    p1.setCPF(54321);
    p2->setCPF(12345);
    p3.setCPF(97531);

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

    sort(pessoas.begin(), pessoas.end(), Pessoa::comparaCPF);

    for (long unsigned int i = 0; i < 3; i++) {
        pessoas[i]->imprime();
        cout << endl;
    }

    cout << "----------------------------- " << endl << endl;
    
    delete p2;
    
    return 0;
}

