using System;
public class Pessoa {

    private String nome;
    private int idade;

    private static int contador = 0;

    public Pessoa(String nome, int idade) {        
        this.nome = nome;
        this.idade = idade;
        incrementa();
        Console.WriteLine("Construtor: " + this.nome);
    }

    ~Pessoa() {
        Pessoa.decrementa();
        Console.WriteLine("Destrutor: " + this.nome);
    }

    public int getIdade() {
        return this.idade;
    }
    
    public void setIdade(int idade) {
        this.idade = idade;
    }
    
    public String getNome() {
        return this.nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public virtual void imprime() {
        Console.WriteLine("Nome: " + this.nome);
        Console.WriteLine("Idade: " + this.idade);
    }
    
    public static int getContador() {
        return Pessoa.contador;
    }

    private static void decrementa() {
        Pessoa.contador -= 1;
    }

    private static void incrementa(){
        Pessoa.contador += 1;
    }
}

