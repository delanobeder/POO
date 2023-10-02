using System;

public class Aluno : Pessoa {
    private int ra;

    public Aluno(string nome, int idade, int ra) : base(nome,idade) {
        this.ra = ra;
    }

    public int getRA() {
        return this.ra;
    }
    
    public void setRA(int ra) {
        this.ra = ra;
    }
    
    new public void imprime() {
        base.imprime();
        Console.WriteLine("RA: {0}", this.ra);
    }
}