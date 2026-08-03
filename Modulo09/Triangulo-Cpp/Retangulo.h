#ifndef RETANGULO_H
#define RETANGULO_H

#include "Triangulo.h"

namespace poo {

    class Retangulo : public Triangulo {
    public:
        Retangulo(double cateto1, double cateto2, double hipotenuza);
        double getArea() const;

    private:
    };

}

#endif /* RETANGULO_H */