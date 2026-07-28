#ifndef ONIBUS_H
#define ONIBUS_H

#include "MeioDeTransporte.h"

namespace poo {

    class Onibus : public MeioDeTransporte {
    public:
        virtual void subir();
        virtual void descer();
    };
    
}

#endif /* ONIBUS_H */
