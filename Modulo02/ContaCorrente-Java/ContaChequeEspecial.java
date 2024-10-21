public class ContaChequeEspecial extends ContaCorrente {
    
    // atributos da classe

    private double credito;

    public ContaChequeEspecial(int numero, double saldo, double credito) {
        super(numero, saldo);
        this.credito = credito;
    } 

    // métodos da classe
    
    public void imprime() {
        super.imprime();
        System.out.println("Credito: " + credito);
    }
}
