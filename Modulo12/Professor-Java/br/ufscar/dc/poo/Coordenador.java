package br.ufscar.dc.poo;

public class Coordenador extends Professor {

    private String curso;

    public Coordenador(String nome, int CPF, double salario, String curso) {
        super(nome, CPF, salario);
        this.curso = curso;
    }

    public double getSalario() {
        return super.getSalario() + 2000;
    }

    public String getCurso() {
        return curso;
    }

    public void imprime() {
        super.imprime();
        System.out.println("Curso: " + curso);
    }
}
