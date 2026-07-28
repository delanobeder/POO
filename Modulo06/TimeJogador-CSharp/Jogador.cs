using System;

public class Jogador {
    private string nome;
    private int idade;
    private string posicao;
    private Time time;

    public Jogador(string nome, int idade, string posicao) {
        this.nome = nome;
        this.idade = idade;
        this.posicao = posicao;
        Console.WriteLine("Criando jogador " + this.nome);
    }
    
    public string getNome() {
        return this.nome;
    }

    public void setNome(string nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return this.idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public string getPosicao() {
        return this.posicao;
    }

    public void setPosicao(string posicao) {
        this.posicao = posicao;
    }

    public Time getTime() {
        return this.time;
    }

    public void setTime(Time time) {
        this.time = time;
    }

    public void imprime() {
        Console.Write(nome + ", " + posicao + ", " + idade + " anos");
        if (time != null) {
            Console.Write(" (Joga no " + time.getNome() + ")");
        } else {
            Console.Write(" (Aposentado/Desempregado)");
        }
        Console.WriteLine();
    }
}