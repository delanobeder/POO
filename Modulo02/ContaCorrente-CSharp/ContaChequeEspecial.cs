using System;

public class ContaChequeEspecial : ContaCorrente {

    private double credito;

    public ContaChequeEspecial(int numero, double saldo, double credito) : base (numero, saldo) {
        this.credito = credito;
    } 
    
    override public void imprime() {
        base.imprime();
        Console.WriteLine("Credito: {0:0.00}", this.credito);
    }
}
