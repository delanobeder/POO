#include <vector>
#include <algorithm>
#include "TextFile.h"

TextFile::TextFile() {
}

TextFile::~TextFile() {
}

// Lê e escreve um caractere por vez

void TextFile::copiaC(string entrada, string saida) {

    char c;
    long unsigned int tam;

    ifstream ifs(entrada, ifstream::in);
    ofstream ofs(saida, ofstream::out);

    vector<char> caracteres;

    ifs.get(c);

    while (ifs.good()) {
        caracteres.push_back(c);
        ifs.get(c);
    }

    reverse(caracteres.begin(), caracteres.end());
    tam = caracteres.size();
    for (long unsigned int i = 0; i < tam; i++) {
        ofs << caracteres[i];
    }

    ofs.close();
    ifs.close();
}

// Lê e escreve uma linha por vez

void TextFile::copiaL(string entrada, string saida) {

    long unsigned int tam;

    ifstream ifs(entrada);
    ofstream ofs(saida);

    string linha;
    vector<string> linhas;
    while (getline(ifs, linha)) {
        reverse(linha.begin(), linha.end());
        linhas.push_back(linha);
    }
    
    reverse(linhas.begin(), linhas.end());
    tam = linhas.size();
    for (long unsigned int i = 0; i < tam; i++) {
        ofs << linhas[i];
        if (i != tam - 1) {
            ofs << endl;
        }
    }
    
    ofs.close();
    ifs.close();
    
}