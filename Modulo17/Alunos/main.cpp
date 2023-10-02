#include "Cadastro.h"
#include <iostream>
using namespace std;

int main() {

    char op;
    int nroAlunos, pos;
    int RA;
    
    Cadastro cadastro("info.dat"); 
    
    do {
        op = Cadastro::opcao();
        switch (op) {
            case 'G': 
                cout << "Numero de Alunos: ";
                cin >> nroAlunos;
                cadastro.grava(nroAlunos);
                break;
            case 'I':
                cadastro.imprime();
                break;
            case 'R':
                cout << "RA: ";
                cin >> RA;
                cadastro.imprimeRA(RA);
                break;
            case 'P':
                cout << "Posição: ";
                cin >> pos;
                cadastro.imprimePos(pos);
                break;
            case 'O':
                cadastro.imprimeOrdenado();
                break;
            case 'A':
                cadastro.imprimeAprovados();
                break;
            case 'B':
                cadastro.imprimeReprovados();
                break;
            case 'S':
                cadastro.imprimeSAC();
                break;
        }
        cout << endl;
    } while (op != 'F');

    return 0;
}

