#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

using namespace std;

class Endereco {
public:
    Endereco(string logradouro, int numero, string cidade, string estado);
    virtual ~Endereco();
    string getLogradouro() const;
    void setLogradouro(string val);
    int getNumero() const;
    void setNumero(int val);
    string getCidade() const;
    void setCidade(string val);
    string getEstado() const;
    void setEstado(string val);
    void imprime() const;
private:
    string logradouro;
    int numero;
    string cidade;
    string estado;
};

#endif // ENDERECO_H
