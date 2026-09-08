using System;

public class ContaCorrente
{

    // Atributos da classe

    private int numero;
    private double saldo;

    // Construtores

    public ContaCorrente(int numero, double saldo = 0)
    {
        this.numero = numero;
        this.saldo = saldo;
    }

    // Métodos getters e setters

    public int GetNumero()
    {
        return this.numero;
    }

    public void SetNumero(int numero)
    {
        this.numero = numero;
    }

    public double GetSaldo()
    {
        return this.saldo;
    }

    public void SetSaldo(double saldo)
    {
        this.saldo = saldo;
    }

    // Outros Métodos da classe
    public bool Retirada(double valor)
    {
        if (saldo - valor >= 0)
        {
            saldo -= valor;
            return true;
        }
        return false;
    }

    void Deposito(double valor)
    {
        this.saldo += valor;
    }

    public bool Transferencia(ContaCorrente outra, double valor)
    {
        bool ok = this.Retirada(valor);
        if (ok)
        {
            outra.Deposito(valor);
        }
        return ok;
    }

    public void Imprime()
    {
        Console.Write("Numero: {0}", this.numero);
        Console.WriteLine(", Saldo: {0:0.00}", this.saldo);
    }
}
