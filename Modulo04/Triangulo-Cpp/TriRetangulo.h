#ifndef TRI_RETANGULO_H
#define TRI_RETANGULO_H

#include "Triangulo.h"

class TriRetangulo : public Triangulo {
public:
    TriRetangulo(double, double, double);
    ~TriRetangulo();
    double getArea() const override;
private:
};

#endif /* TRI_RETANGULO_H */