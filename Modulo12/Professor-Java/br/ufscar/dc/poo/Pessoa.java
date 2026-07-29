package br.ufscar.dc.poo;

public class Pessoa implements Comparable<Pessoa> {

    private String nome;
    private int CPF;

    public Pessoa(String nome, int CPF) {
        this.CPF = CPF;
        this.nome = nome;
    }

    public int getCPF() {
        return CPF;
    }

    public void setCPF(int CPF) {
        this.CPF = CPF;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void imprime() {
        System.out.println("Nome: " + nome);
        System.out.println("CPF: " + CPF);
    }

    @Override
    public int compareTo(Pessoa outro) {
        if (outro == null) {
            return 1;
        } else {
            return this.nome.compareTo(outro.nome);
        }
    }
}