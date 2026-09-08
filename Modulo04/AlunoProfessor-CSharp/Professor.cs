using System;
public class Professor : Pessoa
{
    private float salario;

    public Professor(String nome, int idade, float salario) : base(nome, idade)
    {
        this.salario = salario;
    }

    public float GetSalario()
    {
        return this.salario;
    }

    public void SetSalario(float salario)
    {
        this.salario = salario;
    }

    public override void Imprime()
    {
        base.Imprime();
        Console.WriteLine("Salário: " + this.salario);
    }
}
