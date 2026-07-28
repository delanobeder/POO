#include "Medico.h"
#include "Enfermeiro.h"
#include <vector>
#include <algorithm>

int main() {

    vector<Funcionario *> funcionarios;

    Medico m1("345678901-23", "Dr. Patch Adams", "Clínico Geral");
    Medico m2("123456789-01", "Dr. House", "Neurologista");
    Enfermeiro e1("456789012-34", "Charles Cullen", 23451);
    Enfermeiro e2("234567890-12", "Nurse Beth", 12345);

    funcionarios.push_back(&m1);
    funcionarios.push_back(&m2);
    funcionarios.push_back(&e1);
    funcionarios.push_back(&e2);

    sort(funcionarios.begin(), funcionarios.end(), Funcionario::comparaCPF);

    for (long unsigned int i = 0; i < funcionarios.size(); i++) {
        funcionarios[i]->imprime();
        cout << endl;
    }

    cout << "=========================================" << endl << endl;

    sort(funcionarios.begin(), funcionarios.end(), Funcionario::comparaProfissao);

    for (long unsigned int i = 0; i < funcionarios.size(); i++) {
        funcionarios[i]->imprime();
        cout << endl;
    }

    return 0;
}
