#ifndef RETANGULO_H
#define RETANGULO_H

#include "Poligono.h"

class Retangulo :public Poligono {
public:
    Retangulo(vector<double>&);
    virtual ~Retangulo(); 
    virtual double getArea() const;
private:
};

#endif /* RETANGULO_H */

