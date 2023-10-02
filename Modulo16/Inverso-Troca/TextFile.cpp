#include "TextFile.h"
#include <vector>
#include <algorithm>
using namespace std;

TextFile::TextFile() {
}

TextFile::~TextFile() {
}

void TextFile::transforma(char& c) {
    if (c >= 'A' && c <= 'Z') {
        c = (char)((int) c - 'A' + 'a');
    } else if (c >= 'a' && c <= 'z') {
        c = (char)((int) c - 'a' + 'A');
    }
}

// Lê e escreve um caractere por vez

void TextFile::transformaC(string entrada, string saida) {
    char c;

    ifstream ifs(entrada, ifstream::in);
    ofstream ofs(saida, ofstream::out);

    vector<char> caracteres;

    ifs.get(c);
    transforma(c);
    
    while (ifs.good()) {
        caracteres.push_back(c);
        ifs.get(c);
        transforma(c);
    }

    reverse(caracteres.begin(), caracteres.end());

    for (long unsigned int i = 0; i < caracteres.size(); i++) {
        ofs.put(caracteres[i]);
    }

    ofs.close();
    ifs.close();
}

// Lê e escreve uma linha por vez

void TextFile::transformaL(string entrada, string saida) {
    
    ifstream ifs(entrada);
    ofstream ofs(saida);
    
    vector<string> linhas;
    string linha;
    while (getline(ifs, linha)) {
        for (unsigned long int i = 0; i < linha.size(); i++) {
            transforma(linha[i]);
        }
        reverse(linha.begin(), linha.end());
        linhas.push_back(linha);
    }

    reverse(linhas.begin(), linhas.end());

    for (long unsigned int i = 0; i < linhas.size(); i++) {
        ofs << linhas[i] << endl;
    }

    ofs.close();
    ifs.close();
}
