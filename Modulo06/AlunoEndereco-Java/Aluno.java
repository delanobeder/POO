public class Aluno {
    private String nome;
    private int RA;
    private Endereco endereco;

    public Aluno(String nome, int RA, Endereco endereco) {
        this.nome = nome;
        this.RA = RA;
        this.endereco = endereco;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getRA() {
        return this.RA;
    }

    public void setRA(int RA) {
        this.RA = RA;
    }

    public Endereco getEndereco() {
        return this.endereco;
    }

    public void setEndereco(Endereco endereco) {
        this.endereco = endereco;
    }

    public void imprime() {
        System.out.println("-------------------------------------");
        System.out.println("Nome: " + this.getNome());
        System.out.println("RA: " + this.getRA());
        System.out.println("<Endereco>");
        this.getEndereco().imprime();
    }
}