#include "Cadastro.h"
#include "Retangulo.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

Cadastro::Cadastro(string fileName) : fileName(fileName) {}

void Cadastro::grava() {

    Retangulo r;
    double x, y;

    ofstream saida(fileName, ios::binary);

    for (int i = 0; i < 3; i++) {
        cout << "\nDigite base e altura: ";
        cin >> x >> y;
        r.setDim(x, y);
        saida.write(reinterpret_cast<char*> (&r), sizeof (Retangulo));
    }

    saida.close();
}

void Cadastro::imprime() {

    Retangulo r;

    ifstream entrada(fileName, ios::binary);

    entrada.read(reinterpret_cast<char*> (&r), sizeof (Retangulo));
    while (entrada.good()) {
        r.imprimir();
        entrada.read(reinterpret_cast<char*> (&r), sizeof (Retangulo));
    }

    entrada.close();
}

void Cadastro::imprime(int pos) {

    Retangulo r;

    ifstream entrada(fileName, ios::binary);

    entrada.seekg((pos - 1) * sizeof (Retangulo));
    entrada.read(reinterpret_cast<char*> (&r), sizeof (Retangulo));

    if (entrada.good()) {
        r.imprimir();
    } else {
        cout << "Retangulo não encontrado" << endl;
    }

    entrada.close();
}

void Cadastro::altera(int pos) {

    Retangulo r;
    double x, y;

    fstream arquivo(fileName, ios::in | ios::out | ios::binary);

    arquivo.seekg((pos - 1) * sizeof (Retangulo)); // segundo parametro opcional (inicio)
    arquivo.read(reinterpret_cast<char*> (&r), sizeof (Retangulo));

    if (arquivo.good()) {
        r.imprimir();
        cout << "Digite base e altura: ";
        cin >> x >> y;
        r.setDim(x, y);
        arquivo.seekp(-sizeof(Retangulo),ios_base::cur);
        arquivo.write(reinterpret_cast<char*> (&r), sizeof (Retangulo));
    } else {
        cout << "Retangulo não encontrado" << endl;
    }

    arquivo.close();
}

void Cadastro::ordenaArquivo() {

    Retangulo r;

    vector<Retangulo> retangulos;
    
    ifstream entrada(fileName, ios::binary);

    entrada.read(reinterpret_cast<char*> (&r), sizeof (Retangulo));
    while (entrada.good()) {
        retangulos.push_back(r);
        entrada.read(reinterpret_cast<char*> (&r), sizeof (Retangulo));
    }

    entrada.close();

    sort(retangulos.begin(), retangulos.end(), Retangulo::compara);

    ofstream ordenado(fileName, ios::binary);
    for (long unsigned int i = 0; i < retangulos.size(); i++) {
        ordenado.write(reinterpret_cast<char*> (&retangulos[i]), sizeof (Retangulo));
    }

    ordenado.close();
}