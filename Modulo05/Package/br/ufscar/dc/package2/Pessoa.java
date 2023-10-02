package br.ufscar.dc.package2;

public class Pessoa {

    private String nome;
    private String endereco;

    public Pessoa(String nome, String endereco) {
        this.nome = nome;
        this.endereco = endereco;
    }

    public void imprime() {
        System.out.println("Nome: " + nome);
        System.out.println("Endereco: " + endereco);
    }
}