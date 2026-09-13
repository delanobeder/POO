using System;

namespace poo;

class Professor : Pessoa
{

    private double salario;
    public Professor(string nome, int CPF, double salario) : base(nome, CPF)
    {
        this.salario = salario;
    }
    public virtual double GetSalario()
    {
        return salario;
    }

    public override void Imprime()
    {
        base.Imprime();
        Console.WriteLine("Salário: " + this.GetSalario());
    }
}