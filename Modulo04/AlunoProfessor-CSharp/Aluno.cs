using System;
public class Aluno : Pessoa
{
    private int RA;

    public Aluno(String nome, int idade, int RA) : base(nome, idade)
    {
        this.RA = RA;
    }

    public int GetRA()
    {
        return this.RA;
    }

    public void SetRA(int RA)
    {
        this.RA = RA;
    }

    public override void Imprime()
    {
        base.Imprime();
        Console.WriteLine("RA: " + this.RA);
    }
}
