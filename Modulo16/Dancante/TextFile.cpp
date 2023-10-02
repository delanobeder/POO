#include "TextFile.h"

TextFile::TextFile() {
}

TextFile::~TextFile() {
}

void TextFile::toLower(char& c) {
    if (c >= 'A' && c <= 'Z') {
        c = ((char)((int)c - 'A' + 'a'));
    }
}

void TextFile::toUpper(char& c) {
    if (c >= 'a' && c <= 'z') {
        c = ((char)((int)c - 'a' + 'A'));
    }
}

bool TextFile::isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void TextFile::transforma(char& c, bool& upper) {
    if (isLetter(c)) {
        if (upper) {
            toUpper(c);
        } else {
            toLower(c);
        }
        upper = !upper;
    }
}

// Lê e escreve um caractere por vez

void TextFile::transformaC(string entrada, string saida) {
        
    char c;
    ifstream ifs(entrada, ifstream::in);
    ofstream ofs(saida, ofstream::out);
    
    bool upper = true;
    
    ifs.get(c);
    transforma(c, upper);

    while (ifs.good()) {
        ofs << c;
        ifs.get(c);
        transforma(c, upper);
    }

    ofs.close();
    ifs.close();
}

// Lê e escreve uma linha por vez

void TextFile::transformaL(string entrada, string saida) {
    
    ifstream ifs(entrada);
    ofstream ofs(saida);
    
    string str;
    bool upper = true;
    while (getline(ifs, str)) {
        for (unsigned long int i = 0; i < str.size(); i++) {
            transforma(str[i], upper);
        }
        ofs << str << endl;
    }

    ofs.close();
    ifs.close();
}
