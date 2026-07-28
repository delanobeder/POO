using System;

public class Endereco {

    private string logradouro;
    private int numero;
    private string cidade;
    private string estado;

    public Endereco(string logradouro, int numero, string cidade, string estado) {
        this.logradouro = logradouro;
        this.numero = numero;
        this.cidade = cidade;
        this.estado = estado;
    }

    public string getLogradouro() {
        return this.logradouro;
    }

    public void setLogradouro(string logradouro) {
        this.logradouro = logradouro;
    }

    public int getNumero() {
        return this.numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public string getCidade() {
        return this.cidade;
    }

    public void setCidade(string cidade) {
        this.cidade = cidade;
    }

    public string getEstado() {
        return this.estado;
    }

    public void setEstado(string estado) {
        this.estado = estado;
    }

    public void imprime() {
        Console.WriteLine("Logradouro: " + this.getLogradouro());
        Console.WriteLine("Numero: " + this.getNumero());
        Console.WriteLine("Cidade: " + this.getCidade());
        Console.WriteLine("Estado: " + this.getEstado());
    }
}