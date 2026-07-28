
public class Departamento {
    private String nome;
    private String sigla;
    private Universidade universidade;

    public Departamento(String nome, String sigla, Universidade universidade) {
        this.nome = nome;
        this.sigla = sigla;
        this.universidade = universidade;
        System.out.println("[Construindo departamento " + sigla + "]");
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getSigla() {
        return this.sigla;
    }

    public void setSigla(String sigla) {
        this.sigla = sigla;
    }

    public Universidade getUniversidade() {
        return this.universidade;
    }

    public void setUniversidade(Universidade universidade) {
        this.universidade = universidade;
    }

    public void imprime() {
        System.out.print("Departamento " + nome + " de sigla " + sigla);
        System.out.println(" (" + universidade.getNome() + ")");
    }
}
