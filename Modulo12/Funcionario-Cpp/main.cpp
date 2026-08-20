#include "Medico.h"
#include "Enfermeiro.h"
#include <vector>
#include <algorithm>

using namespace poo;

int main() {

    vector<Funcionario *> funcionarios;

    Funcionario* f1 = new Medico("123456789-01", "Dr. House", "Neurologista");
    Funcionario* f2 = new Enfermeiro("456789012-34", "Charles Cullen", 23451);
    Medico* f3 = new Medico("345678901-23", "Dr. Patch Adams", "Clínico Geral");
    Enfermeiro* f4 = new Enfermeiro("234567890-12", "Nurse Beth", 12345);

    funcionarios.push_back(f1);
    funcionarios.push_back(f2);
    funcionarios.push_back(f3);
    funcionarios.push_back(f4);

    for (long unsigned int i = 0; i < funcionarios.size(); i++) {
        
        funcionarios[i]->imprime();
        cout << endl;
        
        // Cast para Medico*

        cout << "Cast => Medico*     : ";

        Medico *m1 = dynamic_cast<Medico *>(funcionarios[i]);

        if (m1) {
            cout << "(Cast OK) Especialidade: " << m1->getEspecialidade() << endl;
        } else {
            cout << "(Cast not OK)" << endl;
        }

        // Cast para Enfermeiro*

        cout << "Cast => Enfermeiro* : ";

        Enfermeiro *e1 = dynamic_cast<Enfermeiro *>(funcionarios[i]);

        if (e1) {
            cout << "(Cast OK) CRE: " << e1->getCRE() << endl;
        } else {
            cout << "(Cast not OK)" << endl;
        }

        cout << endl;
    }

    cout << "=========================================" << endl << endl;


    sort(funcionarios.begin(), funcionarios.end(), Funcionario::comparaCPF);

    for (unsigned int i = 0; i < funcionarios.size(); i++) {
        funcionarios[i]->imprime();
        cout << endl;
    }

    cout << "=========================================" << endl << endl;

    sort(funcionarios.begin(), funcionarios.end(), Funcionario::comparaProfissao);

    // Construção for each collection

    for (auto f : funcionarios) {
        f->imprime();
        cout << endl;
    }

    return 0;
}
