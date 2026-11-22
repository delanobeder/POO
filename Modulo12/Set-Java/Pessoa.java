public class Pessoa implements Comparable<Pessoa>{

    private String nome;
    private int idade;

    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public void imprime() {
        System.out.printf("Nome: %s", nome);
        System.out.printf(", Idade: %d\n", idade);
    }

    @Override
    public int compareTo(Pessoa p) {
        return this.nome.compareTo(p.nome);
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == null || !(obj instanceof Pessoa)) {
            return false;
        } else {
            Pessoa p = (Pessoa) obj;
            return this.nome.equals(p.nome) && this.idade == p.idade;
        }
    }

    @Override
    public int hashCode() {
        return this.nome.hashCode() * this.idade;
    }
}
