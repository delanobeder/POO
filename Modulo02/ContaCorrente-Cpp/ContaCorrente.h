#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

class ContaCorrente {
public:
    ContaCorrente(int numero, double saldo = 0); // Construtor 
    virtual ~ContaCorrente(); // Destrutor
    
    // Métodos getters e setters

    int getNumero() const;
    void setNumero (int);
    double getSaldo() const;
    void setSaldo(double);
    
    // Outros métodos da classe

    bool retirada(double valor);
    bool deposito(double valor);
    bool transferencia(ContaCorrente &outra, double valor);
    void imprime() const;
private: // Atributos da classe
    int numero;
    double saldo;
};

#endif /* CONTACORRENTE_H */

