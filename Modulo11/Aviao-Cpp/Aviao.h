#ifndef AVIAO_H
#define AVIAO_H

#include "MeioDeTransporte.h"
#include "Voador.h"

namespace poo {

    class Aviao : public Voador, MeioDeTransporte {
    public:
        virtual void decolar();
        virtual void aterissar();
        virtual void subir();
        virtual void descer();
    };

}

#endif /* AVIAO_H */
