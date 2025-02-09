#include "Cadastro.h"
#include "Medico.h"
#include "Enfermeiro.h"
using namespace std;

int main() {

    char op;
    int CPF;
    
    Cadastro cadastro("info.dat");
    
    do {
        op = Cadastro::opcao();
        switch (op) {
            case 'I': { 
                cadastro.imprime();
                break;
            }
            case 'C': {
                cout << "CPF: ";
                cin >> CPF;
                cadastro.imprime(CPF);
                break;
            }
            case 'O': {
                cadastro.imprime(true);
                break;
            }
            case 'E': {
                cadastro.adiciona(ENFERMEIRO);
                break;
            }
            case 'M': {
                cadastro.adiciona(MEDICO);
                break;
            }
            case 'S': {
                cout << "CPF: ";
                cin >> CPF;
                bool ok = cadastro.atualiza(CPF);
                cout << "Atualização " << (ok ? "ok" : "não ok") << endl;
                break;
            }
            case 'R': {
                cout << "CPF: ";
                cin >> CPF;
                bool ok = cadastro.remove(CPF);
                cout << "Remoção " << (ok ? "ok" : "não ok") << endl;
                break;
            }
        }
        cout << endl;
    } while (op != 'F');

    return 0;
}

