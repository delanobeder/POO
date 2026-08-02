package br.ufscar.dc.package1;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane.SystemMenuBar;

public class Pessoa {

    private String nome;
    private int idade;

    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    public void imprime() {
        System.out.println("Nome: " + nome);
        System.out.println("Idade: " + idade);
    }
}