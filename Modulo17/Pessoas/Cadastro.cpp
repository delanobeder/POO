#include "Cadastro.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

Cadastro::Cadastro(string fileName) : fileName(fileName) {}

bool Cadastro::salva(fstream& fs, Pessoa& p) {
    int tam;
    string nome;
    bool ok = fs.is_open();
    if (ok) {
        
        // Escrevendo a idade
        
        fs.write(reinterpret_cast<char *>(&p.idade), sizeof(p.idade));

        // Escrevendo o nome

        nome = p.nome;
        tam = nome.size();

        // Escrevendo o tamanho da string (nome)
        fs.write(reinterpret_cast<char *>(&tam), sizeof(tam));

        // Escrevendo os caracteres da string (nome)
        fs.write(reinterpret_cast<char *>(&nome[0]), tam);
    }

    return ok;
}

bool Cadastro::recupera(fstream& fs, Pessoa& p) {
    int tam;
    bool ok = fs.is_open();
    if (ok) {
        // Lendo a idade;
        fs.read(reinterpret_cast<char*> (&p.idade), sizeof (p.idade));
        if (fs.good()) {
            // Lendo o nome

            // Lendo o tamanho da string (nome)
            fs.read(reinterpret_cast<char *>(&tam), sizeof(tam));
            p.nome.resize(tam);

            // Lendo os caracteres da string (nome)
            fs.read(reinterpret_cast<char *>(&p.nome[0]), tam);
            ok = true;
        } else {
            ok = false;
        }
    }
    return ok;
}

void Cadastro::grava() {

    Pessoa* p;
    string nome;
    int idade;
    
    fstream saida(fileName, ios::out | ios::binary);

    for (int i = 0; i < 3; i++) {
        cout << "\nDigite Nome e idade: ";
        cin >> nome >> idade;
        p = new Pessoa(nome, idade);
        this->salva(saida, *p);
        delete p;
    }

    saida.close();
}

void Cadastro::imprime() {

    Pessoa* p = new Pessoa();

    fstream entrada(fileName, ios::in | ios::binary);

    while (this->recupera(entrada, *p)) {
        p->imprime();
    }

    delete p;

    entrada.close();
}

void Cadastro::imprime(int pos) {

    Pessoa p;

    fstream entrada(fileName, ios::in | ios::binary);

    // entrada.seekg((pos - 1) * sizeof (Pessoa));
    
    int i = 0;
    while (i < pos && this->recupera(entrada, p)) {
        i++;
    }

    if (i == pos) {
        p.imprime();
    } else {
        cout << "Pessoa não encontrada" << endl;
    }

    entrada.close();
}
