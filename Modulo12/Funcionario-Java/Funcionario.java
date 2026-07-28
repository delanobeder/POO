
public abstract class Funcionario {
    private int CPF;
    private String nome;

    public Funcionario(int CPF, String nome) {
        this.CPF = CPF;
        this.nome = nome;
    }

    public abstract String getProfissao(); // método abstrato

    void imprime() {
        System.out.println("Nome : " + nome);
        System.out.println("CPF : " + CPF);
        System.out.println("Profissão : " + this.getProfissao());
    }
}