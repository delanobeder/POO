using System;

public class Aluno {
    private string nome;
    private int RA;
    private Endereco endereco;

    public Aluno(string nome, int RA, Endereco endereco) {
        this.nome = nome;
        this.RA = RA;
        this.endereco = endereco;
    }

    public string getNome() {
        return this.nome;
    }

    public void setNome(string nome) {
        this.nome = nome;
    }

    public int getRA() {
        return this.RA;
    }

    public void setRA(int RA) {
        this.RA = RA;
    }

    public Endereco getEndereco() {
        return this.endereco;
    }

    public void setEndereco(Endereco endereco) {
        this.endereco = endereco;
    }

    public void imprime() {
        Console.WriteLine("-------------------------------------");
        Console.WriteLine("Nome: " + this.getNome());
        Console.WriteLine("RA: " + this.getRA());
        Console.WriteLine("<Endereco>");
        this.getEndereco().imprime();
    }
}