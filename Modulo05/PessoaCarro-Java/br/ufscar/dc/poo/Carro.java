package br.ufscar.dc.poo;

public class Carro {

    private String marca;
    private String cor;
    private int ano;
    private String placa;
    private Pessoa dono;

    public Carro(String marca, String cor, int ano, String placa) {
        this.marca = marca;
        this.cor = cor;
        this.ano = ano;
        this.placa = placa;
    }

    public String getMarca() {
        return this.marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getCor() {
        return this.cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public String getPlaca() {
        return placa;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public Pessoa getDono() {
        return dono;
    }

    public void setDono(Pessoa dono) {
        this.dono = dono;
    }

    public void imprime() {

        System.out.println("Marca: " + this.marca);
        System.out.println("Cor: " + this.cor);
        System.out.println("Ano: " + this.ano);
        System.out.println("Placa: " + this.placa);
        if (this.dono != null) {
            System.out.println("Dono: " + this.dono.getNome());
        }
    }
}