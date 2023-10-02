#include "Medico.h"
#include "Enfermeiro.h"

int main() {
    
    Medico m(12345, "Dr. House", "Neurologista");
    m.imprime();
    
    cout << endl;
    
    Enfermeiro e(67890, "Nurse Beth", 12345);
    e.imprime();
    

    return 0;
}

