using System;

namespace poo;

public class Aluno
{
    private string nome;
    private int RA;
    private Endereco endereco;

    public Aluno(string nome, int RA, Endereco endereco)
    {
        this.nome = nome;
        this.RA = RA;
        this.endereco = endereco;
    }

    public string GetNome()
    {
        return this.nome;
    }

    public void SetNome(string nome)
    {
        this.nome = nome;
    }

    public int GetRA()
    {
        return this.RA;
    }

    public void SetRA(int RA)
    {
        this.RA = RA;
    }

    public Endereco GetEndereco()
    {
        return this.endereco;
    }

    public void SetEndereco(Endereco endereco)
    {
        this.endereco = endereco;
    }

    public void Imprime()
    {
        Console.WriteLine("-------------------------------------");
        Console.WriteLine("Nome: " + this.GetNome());
        Console.WriteLine("RA: " + this.GetRA());
        Console.WriteLine("<Endereco>");
        this.GetEndereco().Imprime();
    }
}