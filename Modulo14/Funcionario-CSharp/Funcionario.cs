using System;

public abstract class Funcionario {
    private int CPF;
    private string nome;

    public Funcionario(int CPF, string nome) {
        this.CPF = CPF;
        this.nome = nome;
    }

    public abstract string getProfissao(); // método abstrato

    public void imprime() {
        Console.WriteLine("Nome: {0}", this.nome);
        Console.WriteLine("CPF: {0}", this.CPF);
        Console.WriteLine("Profissão : {0}", this.getProfissao());
    }
}