package br.ufscar.dc.poo;

public class Pessoa {

    private String nome;
    private String CPF;
    private Carro carros[];
    private int qtde;

    public Pessoa(String nome, String CPF) {
        this.nome = nome;
        this.CPF = CPF;
        this.qtde = 0;
        this.carros = new Carro[3];
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCPF() {
        return CPF;
    }

    public void setCPF(String CPF) {
        CPF = this.CPF;
    }

    public boolean adicionaCarro(Carro carro) {
        boolean ok = (qtde < 3);
        if (ok) {
            carros[qtde++] = carro;
            carro.setDono(this);
        }
        return ok;
    }

    public Carro removeCarro(String placa) {
        Carro carro = null;
        int pos = 0;
        while (pos < qtde && carro == null) {
            //if (carros[pos].getPlaca().equals(placa)) { 
            if (carros[pos].getPlaca() == placa) {
                carro = carros[pos];
            }
            else {
                pos++;
            }
        }

        if (carro != null) {
            while (pos < qtde - 1) {
                carros[pos] = carros[pos + 1];
                pos++;
            }
            carros[pos] = null; 

            qtde = qtde - 1;
        }

        return carro;
    }

    public void imprime() {
        System.out.println("-------------------------------------");
        System.out.println("Nome: " + this.getNome());
        System.out.println("CPF: " + this.getCPF());
        System.out.println("<Carros> ");
        for (int i = 0; i < qtde; i++) {
            if (carros[i] != null) {
                this.carros[i].imprime();
                System.out.println();
            }
        }
    }

    
}