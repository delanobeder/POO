#ifndef TEXTFILE_H
#define TEXTFILE_H

#include <string>
#include <fstream>
using namespace std;

class TextFile {
public:
    TextFile();
    virtual ~TextFile();
    static void copiaC(string entrada, string saida);
    static void copiaL(string entrada, string saida);
};

#endif /* TEXTFILE_H */

