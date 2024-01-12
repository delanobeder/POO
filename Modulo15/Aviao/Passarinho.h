#ifndef PASSARINHO_H
#define PASSARINHO_H

#include "Voador.h"

namespace poo {

    class Passarinho : public Voador {
    public:
        virtual void decolar();
        virtual void aterissar();
    };

}

#endif /* PASSARINHO_H */