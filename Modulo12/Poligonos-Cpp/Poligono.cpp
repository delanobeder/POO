#include "Poligono.h"

Poligono::Poligono(vector<double>& lados) :
lados(lados) {
}

Poligono::~Poligono() {
}

double Poligono::getLado(int pos) const {
    return lados[pos - 1];
}

double Poligono::getPerimetro() const {
    double perimetro = 0;
    vector<double>::iterator it;
    for (it = lados.begin(); it != lados.end(); it++) {
        perimetro += (*it);
    }
    return perimetro;
    
    /* double perimetro = 0;
    for (unsigned long int i = 0; i < lados.size(); i++) {
        perimetro += lados[i];
    }
    return perimetro; */
}

int Poligono::getNroLados() const {
    return lados.size();
}

void Poligono::imprime() const {
    cout << *this << endl;
}

ostream& operator<<(ostream& os, const Poligono& obj) {
    os << "Nro Lados: " << obj.getNroLados() << "\t Perimetro: " << obj.getPerimetro() << "\t Area: " << obj.getArea();
    return os;
}

bool Poligono::comparaArea(const Poligono* p1, const Poligono* p2) {
    double area1 = p1->getArea();
    double area2 = p2->getArea();
    if (area1 != area2) {
        return area1 < area2;
    } else {
        return p1->getPerimetro() < p2->getPerimetro();
    }
}

bool Poligono::comparaNroLados(const Poligono* p1, const Poligono* p2) {
    int nroLados1 = p1->getNroLados();
    int nroLados2 = p2->getNroLados();
    if (nroLados1 != nroLados2) {
        return nroLados1 < nroLados2;
    } else {
        return p1->getPerimetro() < p2->getPerimetro();
    }
}
