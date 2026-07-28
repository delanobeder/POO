#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Poligono.h"

class Triangulo : public Poligono {
public:
    Triangulo(vector<double>&);
    virtual ~Triangulo();
    virtual double getArea() const;
private:
};

#endif /* TRIANGULO_H */

