#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

class ContaCorrente {
public:
    ContaCorrente(int numero, double saldo = 0); // construtor 
    virtual ~ContaCorrente(); // destrutor
    // métodos da classe
    int getNumero() const;
    double getSaldo() const;
    bool retirada(double valor);
    bool deposito(double valor);
    bool transferencia(ContaCorrente &outra, double valor);
    void imprime() const;
private: // atributos da classe
    int numero;
    double saldo;
};

#endif /* CONTACORRENTE_H */

