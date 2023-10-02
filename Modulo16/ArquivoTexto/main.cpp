#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream in;
    ofstream out;
    in.open("entrada.txt");
    out.open("saida.txt");
    
    int a, b, c, maior;
    
    in >> a >> b >> c;
    
    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }
    
    if (c > maior) {
        maior = c;
    }
    
    out << "Maior valor e: " << maior << endl;

    in.close();
    out.close();
    
    return 0;
}

