public class Time {
    private String nome;
    private Jogador elenco[];

    public Time(String nome) {
        this.nome = nome;
        System.out.println("Criando time " + nome);
        elenco = new Jogador[22];
    }

    String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void adicionaJogador(int numero, Jogador jogador) {
        elenco[numero - 1] = jogador;
        jogador.setTime(this);
    }

    public void removeJogador(int numero) {
        elenco[numero - 1].setTime(null);
        elenco[numero - 1] = null;
    }

    public void imprime() {
        System.out.println("Elenco do " + nome);
        for (int i = 0; i < 22; i++) {
            if (elenco[i] != null) {
                System.out.println("(" + (i + 1) + ") ");
                elenco[i].imprime();
            }
        }
    }
}