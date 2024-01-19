#include "Cadastro.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

Cadastro::Cadastro(string fileName) : fileName(fileName) {}

bool Cadastro::salva(fstream& fs, Retangulo& r) {
    bool ok = fs.is_open();
    if (ok) {
        fs.write(reinterpret_cast<char*> (&r), sizeof (Retangulo));
    }
    return ok;
}

bool Cadastro::recupera(fstream& fs, Retangulo& r) {
    bool ok = fs.is_open();
    if (ok) {
        fs.read(reinterpret_cast<char*> (&r), sizeof (Retangulo));
        ok = fs.good();
    }
    return ok;
}

void Cadastro::grava() {

    Retangulo* r;
    double x, y;

    fstream saida(fileName, ios::out | ios::binary);

    for (int i = 0; i < 3; i++) {
        cout << "\nDigite base e altura: ";
        cin >> x >> y;
        r = new Retangulo(x, y);
        this->salva(saida, *r);
        delete r;
    }

    saida.close();
}

void Cadastro::imprime() {

    Retangulo* r = new Retangulo();

    fstream entrada(fileName, ios::in | ios::binary);

    while (this->recupera(entrada, *r)) {
        r->imprime();
    }

    delete r;

    entrada.close();
}

void Cadastro::imprime(int pos) {

    Retangulo r;

    fstream entrada(fileName, ios::in | ios::binary);

    entrada.seekg((pos - 1) * sizeof (Retangulo));

    if (this->recupera(entrada, r)) {
        r.imprime();
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

    if (this->recupera(arquivo, r)) {
        r.imprime();
        cout << "Digite base e altura: ";
        cin >> x >> y;
        Retangulo* aux = new Retangulo(x, y);
        arquivo.seekp(-sizeof(Retangulo),ios_base::cur);
        this->salva(arquivo, *aux);
        delete aux;
    } else {
        cout << "Retangulo não encontrado" << endl;
    }

    arquivo.close();
}

void Cadastro::ordenaArquivo() {

    Retangulo r;

    vector<Retangulo> retangulos;
    
    fstream entrada(fileName, ios::in | ios::binary);

    while (this->recupera(entrada, r)) {
        retangulos.push_back(r);
    }

    entrada.close();

    sort(retangulos.begin(), retangulos.end(), Retangulo::compara);

    fstream ordenado(fileName, ios::out | ios::binary);

    for (long unsigned int i = 0; i < retangulos.size(); i++) {
        this->salva(ordenado, retangulos[i]);
    }

    ordenado.close();
}