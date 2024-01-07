#include "Medico.h"
#include "Enfermeiro.h"

int main() {
    
    Funcionario* f1 = new Medico("123456789-01", "Dr. House", "Neurologista");
    f1->imprime();
    
    cout << endl;
    
    Funcionario* f2 = new Enfermeiro("234567890-12", "Nurse Beth", 12345);
    f2->imprime();
    
    cout << endl;

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

    return 0;
}

