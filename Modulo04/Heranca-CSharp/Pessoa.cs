using System;

public class Pessoa {

    private string nome;


    private int idade;

    public Pessoa(string nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    public string getNome() {
        return this.nome;
    }

    public void setNome(string value) {
        this.nome = value;
    }

    public int getIdade() {
        return this.idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }
    
    public void imprime() {
        Console.WriteLine("Nome: {0}", this.nome);
        Console.WriteLine("Idade: {0}", this.idade);
    }
    
    public int compare(Pessoa p) {
        return idade - p.idade;
    }
}

