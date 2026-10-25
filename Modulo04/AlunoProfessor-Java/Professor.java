public class Professor extends Pessoa {
    private float salario;

    public Professor(String nome, int idade, float salario) {
        super(nome, idade);
        this.salario = salario;
    }

    public float getSalario() {
        return this.salario;
    }

    public void setSalario(float salario) {
        this.salario = salario;
    }

    @Override 
    public void imprime() {
        super.imprime();
        System.out.println("Salário: " + this.salario);
    }
}