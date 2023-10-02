#ifndef POLIGONO_H
#define POLIGONO_H

#include <iostream>
#include <vector>
using namespace std;

class Poligono {
public:
    Poligono(vector<double>&);
    virtual ~Poligono();
    double getLado(int) const;
    double getPerimetro() const;
    int getNroLados() const;
    virtual double getArea() const = 0;
    virtual void imprime() const;
    friend ostream& operator<<(ostream&, const Poligono&);

    static bool comparaArea(const Poligono* p1, const Poligono* p2);
    static bool comparaNroLados(const Poligono* p1, const Poligono* p2);
private:
    vector<double>& lados;
};

#endif /* POLIGONO_H */

