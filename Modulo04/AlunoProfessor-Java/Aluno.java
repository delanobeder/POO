public class Aluno extends Pessoa {
    private int RA;

    public Aluno(String nome, int idade, int RA) {
        super(nome, idade);
        this.RA = RA;
    }

    public int getRA() {
        return this.RA;
    }

    public void setRA(int RA) {
        this.RA = RA;
    }
    
    public void imprime() {
        super.imprime();
        System.out.println("RA: " + this.RA);
    }
}