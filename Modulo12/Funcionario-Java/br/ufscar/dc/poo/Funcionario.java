package br.ufscar.dc.poo;

public abstract class Funcionario implements Comparable<Funcionario> {
    private String CPF;
    private String nome;

    public Funcionario(String CPF, String nome) {
        this.CPF = CPF;
        this.nome = nome;
    }

    
    public String getCPF() {
        return CPF;
    }


    public void setCPF(String cPF) {
        CPF = cPF;
    }


    public String getNome() {
        return nome;
    }


    public void setNome(String nome) {
        this.nome = nome;
    }


    public abstract String getProfissao(); // método abstrato


    public void imprime() {
        System.out.println("Nome : " + nome);
        System.out.println("CPF : " + CPF);
        System.out.println("Profissão : " + this.getProfissao());
    }

    @Override
    public int compareTo(Funcionario outro) {
        return this.CPF.compareTo(outro.CPF);
    }
}