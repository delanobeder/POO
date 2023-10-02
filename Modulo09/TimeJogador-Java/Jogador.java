public class Jogador {
    private String nome;
    private int idade;
    private String posicao;
    private Time time;

    public Jogador(String nome, int idade, String posicao) {
        this.nome = nome;
        this.idade = idade;
        this.posicao = posicao;
        System.out.println("Criando jogador " + this.nome);
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return this.idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getPosicao() {
        return this.posicao;
    }

    public void setPosicao(String posicao) {
        this.posicao = posicao;
    }

    public Time getTime() {
        return this.time;
    }

    public void setTime(Time time) {
        this.time = time;
    }

    public void imprime() {
        System.out.print(nome + ", " + posicao + ", " + idade + " anos");
        if (time != null) {
            System.out.print(" (Joga no " + time.getNome() + ")");
        } else {
            System.out.print(" (Aposentado/Desempregado)");
        }
        System.out.println();
    }
}