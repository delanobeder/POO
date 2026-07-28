using System;

public class Pessoa {

    private string nome;
    private int idade;
    static int contador = 0;

    public Pessoa(string nome, int idade) {
        this.nome = nome;
        this.idade = idade;
        Pessoa.incrementa();
    }

    ~Pessoa() {
        Pessoa.decrementa();
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

    public static int getContador() {
        return Pessoa.contador;
    }

    private static void incrementa() {
        Pessoa.contador++;
    }

    private static void decrementa() {
        Pessoa.contador--;
    }
}

