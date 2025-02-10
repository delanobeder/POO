#include "TextFile.h"

TextFile::TextFile() {
}

TextFile::~TextFile() {
}

// Lê e escreve um caractere por vez

void TextFile::copiaC(string entrada, string saida) {
        
    char c;
    ifstream ifs(entrada, ifstream::in);
    ofstream ofs(saida, ofstream::out);

    ifs.get(c);
    while (ifs.good()) {
        ofs.put(c); // ofs << c;
        ifs.get(c);
    }

    ofs.close();
    ifs.close();
}

// Lê e escreve uma linha por vez

void TextFile::copiaL(string entrada, string saida) {
    
    ifstream ifs(entrada);
    ofstream ofs(saida);
    
    string linha;
    while (getline(ifs, linha)) {
        ofs << linha << endl;
    }

    ofs.close();
    ifs.close();
}
