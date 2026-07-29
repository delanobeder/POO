#include "Medico.h"
#include "Enfermeiro.h"
#include <vector>
#include <algorithm>

using namespace poo;

int main() {

    vector<Funcionario *> funcionarios;

    Funcionario* f1 = new Medico("123456789-01", "Dr. House", "Neurologista");
    f1->imprime();
    
    cout << endl;
    
    Funcionario* f2 = new Enfermeiro ("456789012-34", "Charles Cullen", 23451); 
    f2->imprime();

    cout << endl;
    
    Medico* f3 = new Medico("345678901-23", "Dr. Patch Adams", "Clínico Geral");
    f3->imprime();

    cout << endl;

    Enfermeiro* f4 = new Enfermeiro("234567890-12", "Nurse Beth", 12345);
    f4->imprime();
    
    cout << endl;

    cout << "=========================================" << endl << endl;

    // Cast f1 para Medico*

    cout << "Cast f1 => Medico*     : ";    
    
    Medico* m1 = dynamic_cast<Medico*>(f1);

    if (m1) { 
        cout << "(Cast OK) Especialidade: " << m1->getEspecialidade() << endl; 
    } 
    else { 
        cout << "(Cast not OK)" << endl; 
    }

    // Cast f1 para Enfermeiro*
    
    cout << "Cast f1 => Enfermeiro* : ";
    
    Enfermeiro* e1 = dynamic_cast<Enfermeiro*>(f1);

    if (e1) { 
        cout << "(Cast OK) CRE: " << e1->getCRE() << endl; 
    }
    else { 
        cout << "(Cast not OK)" << endl; 
    }

    // Cast f2 para Medico*

    cout << "Cast f2 => Medico*     : ";    
    
    Medico* m2 = dynamic_cast<Medico*>(f2);

    if (m2) { 
        cout << "(Cast OK) Especialidade: " << m2->getEspecialidade() << endl; 
    } 
    else { 
        cout << "(Cast not OK)" << endl; 
    }

    // Cast f2 para Enfermeiro*
    
    cout << "Cast f2 => Enfermeiro* : ";
    
    Enfermeiro* e2 = dynamic_cast<Enfermeiro*>(f2);

    if (e2) { 
        cout << "(Cast OK) CRE: " << e2->getCRE() << endl; 
    }
    else { 
        cout << "(Cast not OK)" << endl; 
    }

    cout << endl;

    cout << "=========================================" << endl << endl;

    funcionarios.push_back(f1);
    funcionarios.push_back(f2);
    funcionarios.push_back(f3);
    funcionarios.push_back(f4);

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
