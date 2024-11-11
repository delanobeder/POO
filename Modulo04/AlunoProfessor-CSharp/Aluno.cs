using System;
public class Aluno : Pessoa {
    private int RA;

    public Aluno(String nome, int idade, int RA) : base (nome, idade) {
        this.RA = RA;
    }

    public int getRA() {
        return this.RA;
    }

    public void setRA(int RA) {
        this.RA = RA;
    }
    
    override public void imprime() {
        base.imprime();
        Console.WriteLine("RA: " + this.RA);
    }
}