package br.ufscar.dc.poo;

public class Aviao implements Voador, MeioDeTransporte{

    public void decolar() {
        System.out.println("Liga as turbinas e levanta voo");
    }

    public void aterissar() {
        System.out.println("Desce o trem de pouso e freia");
    }

    public void subir() {
        System.out.println("Faz check-in e embarca");
    }

    public void descer() {
        System.out.println("Desembarca e pega as malas");
    }
}

