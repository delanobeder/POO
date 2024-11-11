using System;
public class Professor : Pessoa {
    private float salario;

    public Professor(String nome, int idade, float salario) : base (nome, idade) {
        this.salario = salario;
    }

    public float getSalario() {
        return this.salario;
    }

    public void setSalario(float salario) {
        this.salario = salario;
    }

    override public void imprime() {
        base.imprime();
        Console.WriteLine("Salário: " + this.salario);
    }
}