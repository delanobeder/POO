using System;

public class ContaCorrente {
    
    // Atributos da classe

    private int numero;
    private double saldo;

    // Construtores

    public ContaCorrente(int numero, double saldo = 0) {
        this.numero = numero;
        this.saldo = saldo;
    }

    // Métodos getters e setters

    public int getNumero() {
        return this.numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public double getSaldo() {
        return this.saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    // Outros Métodos da classe
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

    public void imprime() {
        Console.Write("Numero: {0}", this.numero);
        Console.WriteLine(", Saldo: {0:0.00}", this.saldo);
    }
}
