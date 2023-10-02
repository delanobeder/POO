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
    public boolean retirada(double valor) {
        if (saldo - valor >= 0) {
            saldo -= valor;
            return true;
        }
        return false;
    }
    
    public void deposito(double valor) {
        this.saldo += valor;
    }
    
    public boolean transferencia(ContaCorrente outra, double valor) {
        boolean ok = this.retirada(valor);
        if (ok) {
            outra.deposito(valor);
        }
        return ok;
    }

    public void imprime() {
        System.out.println("Numero: " + numero + ", saldo: " + saldo);
    }
}
