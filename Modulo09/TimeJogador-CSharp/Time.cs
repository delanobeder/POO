using System;

public class Time {
    private string nome;
    private Jogador[] elenco;

    public Time(string nome) {
        this.nome = nome;
        Console.WriteLine("Criando time " + nome);
        elenco = new Jogador[22];
    }

    public string getNome() {
        return this.nome;
    }

    public void setNome(string nome) {
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
        Console.WriteLine("Elenco do " + nome);
        for (int i = 0; i < 22; i++) {
            if (elenco[i] != null) {
                Console.Write("(" + (i + 1) + ") ");
                elenco[i].imprime();
            }
        }
    }
}