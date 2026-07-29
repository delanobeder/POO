#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

class ContaCorrente {
public:
    ContaCorrente(int numero, double saldo = 0); // construtor 
    virtual ~ContaCorrente(); // destrutor
    
    // métodos getters e setters

    int getNumero() const;
    void setNumero (int);
    double getSaldo() const;
    void setSaldo(double);
    
    // métodos da classe

    bool retirada(double valor);
    bool deposito(double valor);
    bool transferencia(ContaCorrente &outra, double valor);
    void imprime() const;
private: // atributos da classe
    int numero;
    double saldo;
};

#endif /* CONTACORRENTE_H */

