using System;

public class ContaCorrente {
    
    // atributos da classe

    private int numero;
    private double saldo;

    public ContaCorrente(int numero) {
        this.numero = numero;
        this.saldo = 0;
    } 

    public ContaCorrente(int numero, double saldo) {
        this.numero = numero;
        this.saldo = saldo;
    }

    // métodos da classe
    public bool retirada(double valor) {
        if (saldo - valor >= 0) {
            saldo -= valor;
            return true;
        }
        return false;
    }
    
    void deposito(double valor) {
        this.saldo += valor;
    }
    
    public bool transferencia(ContaCorrente outra, double valor) {
        bool ok = this.retirada(valor);
        if (ok) {
            outra.deposito(valor);
        }
        return ok;
    }

    virtual public void imprime() {
        Console.WriteLine("Numero: {0}", this.numero);
        Console.WriteLine("Saldo: {0:0.00}", this.saldo);
    }
}
