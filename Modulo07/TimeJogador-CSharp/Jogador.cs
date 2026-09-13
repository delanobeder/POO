using System;

namespace poo;

public class Jogador
{
    private string nome;
    private int idade;
    private string posicao;
    private Time ?time;

    public Jogador(string nome, int idade, string posicao)
    {
        this.nome = nome;
        this.idade = idade;
        this.posicao = posicao;
        Console.WriteLine("Criando jogador " + this.nome);
    }

    public string GetNome()
    {
        return this.nome;
    }

    public void SetNome(string nome)
    {
        this.nome = nome;
    }

    public int GetIdade()
    {
        return this.idade;
    }

    public void SetIdade(int idade)
    {
        this.idade = idade;
    }

    public string GetPosicao()
    {
        return this.posicao;
    }

    public void SetPosicao(string posicao)
    {
        this.posicao = posicao;
    }

    public Time? GetTime()
    {
        return this.time;
    }

    public void SetTime(Time time)
    {
        this.time = time;
    }

    public void Imprime()
    {
        Console.Write(nome + ", " + posicao + ", " + idade + " anos");
        if (time != null)
        {
            Console.Write(" (Joga no " + time.GetNome() + ")");
        }
        else
        {
            Console.Write(" (Aposentado/Desempregado)");
        }
        Console.WriteLine();
    }
}