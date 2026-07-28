using System;

public class Departamento {
    private string nome;
    private string sigla;
    private Universidade universidade;

    public Departamento(string nome, string sigla, Universidade universidade) {
        this.nome = nome;
        this.sigla = sigla;
        this.universidade = universidade;
        Console.WriteLine("[Construindo departamento " + sigla + "]");
    }

    public string getNome() {
        return this.nome;
    }

    public void setNome(string nome) {
        this.nome = nome;
    }

    public string getSigla() {
        return this.sigla;
    }

    public void setSigla(string sigla) {
        this.sigla = sigla;
    }

    public Universidade getUniversidade() {
        return this.universidade;
    }

    public void setUniversidade(Universidade universidade) {
        this.universidade = universidade;
    }

    public void imprime() {
        Console.Write("Departamento " + nome + " de sigla " + sigla);
        Console.WriteLine(" (" + universidade.getNome() + ")");
    }
}
