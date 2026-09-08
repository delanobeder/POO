using System;
public class Pessoa
{

    private String nome;
    private int idade;

    private static int contador = 0;

    public Pessoa(String nome, int idade)
    {
        this.nome = nome;
        this.idade = idade;
        incrementa();
        Console.WriteLine("Construtor: " + this.nome);
    }

    ~Pessoa()
    {
        Pessoa.decrementa();
        Console.WriteLine("Destrutor: " + this.nome);
    }

    public int GetIdade()
    {
        return this.idade;
    }

    public void SetIdade(int idade)
    {
        this.idade = idade;
    }

    public String GetNome()
    {
        return this.nome;
    }

    public void SetNome(String nome)
    {
        this.nome = nome;
    }

    public virtual void Imprime()
    {
        Console.WriteLine("Nome: " + this.nome);
        Console.WriteLine("Idade: " + this.idade);
    }

    public static int GetContador()
    {
        return Pessoa.contador;
    }

    private static void decrementa()
    {
        Pessoa.contador -= 1;
    }

    private static void incrementa()
    {
        Pessoa.contador += 1;
    }
}

