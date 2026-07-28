#include "Aviao.h"
#include "Onibus.h"
#include "Passarinho.h"
#include "Voador.h"
using namespace poo;

int main() {

    Voador* v = new Passarinho();
    
    v->decolar();
    v->aterissar();
        
    MeioDeTransporte* m = new Onibus();

    m->subir();
    m->descer();
    
    Aviao* a = new Aviao();

    a->decolar();
    a->aterissar();
    a->subir();
    a->descer();

    return 0;
}
