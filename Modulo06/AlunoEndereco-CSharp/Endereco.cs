using System;

namespace poo;

public class Endereco
{

    private string logradouro;
    private int numero;
    private string cidade;
    private string estado;

    public Endereco(string logradouro, int numero, string cidade, string estado)
    {
        this.logradouro = logradouro;
        this.numero = numero;
        this.cidade = cidade;
        this.estado = estado;
    }

    public string GetLogradouro()
    {
        return this.logradouro;
    }

    public void SetLogradouro(string logradouro)
    {
        this.logradouro = logradouro;
    }

    public int GetNumero()
    {
        return this.numero;
    }

    public void SetNumero(int numero)
    {
        this.numero = numero;
    }

    public string GetCidade()
    {
        return this.cidade;
    }

    public void SetCidade(string cidade)
    {
        this.cidade = cidade;
    }

    public string GetEstado()
    {
        return this.estado;
    }

    public void SetEstado(string estado)
    {
        this.estado = estado;
    }

    public void Imprime()
    {
        Console.WriteLine("Logradouro: " + this.GetLogradouro());
        Console.WriteLine("Numero: " + this.GetNumero());
        Console.WriteLine("Cidade: " + this.GetCidade());
        Console.WriteLine("Estado: " + this.GetEstado());
    }
}