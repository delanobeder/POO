public class ContaCorrente {
    
    // Atributos da classe

    private int numero;
    private double saldo;

    // Construtores 

    public ContaCorrente(int numero) {
        this.numero = numero;
        this.saldo = 0;
    } 

    public ContaCorrente(int numero, double saldo) {
        this.numero = numero;
        this.saldo = saldo;
    }
    
    // Métodos getters e setters
    
    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    // Outros Métodos da classe

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
        System.out.printf("Numero: %d", numero);
        System.out.printf(", Saldo: %.2f\n", saldo);
    }
}
