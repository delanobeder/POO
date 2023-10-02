#include "Aviao.h"
#include <iostream>
using namespace std;

namespace poo {

    void Aviao::decolar() {
        cout << "Liga as turbinas e levanta voo" << endl;
    }

    void Aviao::aterissar() {
        cout << "Desce o trem de pouso e freia" << endl;
    }

    void Aviao::subir() {
        cout << "Faz check-in e embarca" << endl;
    }

    void Aviao::descer() {
        cout << "Desembarca e pega as malas" << endl;
    }
    
}