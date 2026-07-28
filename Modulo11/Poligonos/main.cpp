#include <iostream>
#include <algorithm> // std::sort
#include <vector>    // std::vector
#include "Poligono.h"
#include "Triangulo.h"
#include "Retangulo.h"

int main() {

    vector<Poligono *> poligonos;

    vector<double> v1{3, 4, 5};
    poligonos.push_back(new Triangulo(v1));

    vector<double> v2{3, 4, 3, 4};
    poligonos.push_back(new Retangulo(v2));

    vector<double> v3{3, 3, 3};
    poligonos.push_back(new Triangulo(v3));

    vector<double> v4{2, 3, 2, 3};
    poligonos.push_back(new Retangulo(v4));

    cout << "poligonos:" << endl;

    for (unsigned long int i = 0; i < poligonos.size(); i++) {
        cout << *poligonos[i] << endl;
    }

    cout << endl << "poligonos (ordenado pela Area):" << endl;

    sort(poligonos.begin(), poligonos.end(), Poligono::comparaArea);

    for (unsigned long int i = 0; i < poligonos.size(); i++) {
        poligonos[i]->imprime();
    }

    cout << endl << "poligonos (ordenado pelo Nro Lados):" << endl;

    sort(poligonos.begin(), poligonos.end(), Poligono::comparaNroLados);

    for (unsigned long int i = 0; i < poligonos.size(); i++) {
        poligonos[i]->imprime();
    }
    return 0;
}
