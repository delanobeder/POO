package br.ufscar.dc.poo;

public class Professor extends Pessoa {

    private double salario;

    public Professor(String nome, int CPF, double salario) {
        super(nome, CPF);
        this.salario = salario;
    }

    public double getSalario() {
        return salario;
    }

    public void imprime() {
        super.imprime();
        System.out.println("Salário: " + this.getSalario());
    }
}