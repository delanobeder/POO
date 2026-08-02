#ifndef CARRO_H
#define CARRO_H

#include <string>

using namespace std;

namespace poo {
    class Pessoa;

    class Carro {
    public:
        Carro(string marca, string cor, int ano, string placa);
        virtual ~Carro();
        string getMarca() const;
        void setMarca(string marca);
        string getCor() const;
        void setCor(string cor);
        int getAno() const;
        void setAno(int ano);
        string getPlaca() const;
        void setPlaca(string cor);
        Pessoa *getDono() const;
        void setDono(Pessoa *dono);
        void imprime() const;

    private:
        string marca;
        string cor;
        int ano;
        string placa;
        Pessoa *dono;
    };
}

#endif // CARRO_H
