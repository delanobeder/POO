#include "Medico.h"
#include "Enfermeiro.h"

int main() {
    
    Medico m("123456789-01", "Dr. House", "Neurologista");
    m.imprime();
    
    cout << endl;
    
    Enfermeiro e("234567890-12", "Nurse Beth", 12345);
    e.imprime();
    

    return 0;
}

