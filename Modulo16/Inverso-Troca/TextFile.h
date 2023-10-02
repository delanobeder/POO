#ifndef TEXTFILE_H
#define TEXTFILE_H

#include <string>
#include <fstream>
using namespace std;

class TextFile {
public:
    TextFile();
    virtual ~TextFile();
    static void transformaC(string entrada, string saida);
    static void transformaL(string entrada, string saida);
private:
    static void transforma(char& c);
};

#endif /* TEXTFILE_H */

