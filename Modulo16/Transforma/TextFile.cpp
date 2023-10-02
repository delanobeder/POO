#include "TextFile.h"

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

    ifs.get(c);
    transforma(c);
    
    while (ifs.good()) {
        ofs << c;
        ifs.get(c);
        transforma(c);
    }

    ofs.close();
    ifs.close();
}

// Lê e escreve uma linha por vez

void TextFile::transformaL(string entrada, string saida) {
    
    ifstream ifs(entrada);
    ofstream ofs(saida);
    
    string str;
    while (getline(ifs, str)) {
        for (unsigned long int i = 0; i < str.size(); i++) {
            transforma(str[i]);
        }
        ofs << str << endl;
    }

    ofs.close();
    ifs.close();
}
