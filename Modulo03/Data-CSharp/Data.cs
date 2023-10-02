using System;

public class Data {

    private int ano;
    private int mes;
    private int dia;

    public Data(int dia, int mes, int ano) {
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }

    public int compare(Data data) {
        if (this.ano != data.ano) {
            return this.ano - data.ano;
        } else if (this.mes != data.mes) {
            return this.mes - data.mes;
        } else {
            return this.dia - data.dia;
        }
    }

    public void imprimePorExtenso() {
        string[] meses = new string[12]{
            "Janeiro", "Fevereiro", "Março", "Abril",
            "Maio", "Junho", "Julho", "Agosto",
            "Setembro", "Outubro", "Novembro", "Dezembro"
        };

        Console.WriteLine("{0:00} de {1} de {2:00}", dia, meses[mes - 1], ano);
    }

    public void imprime() {
        Console.WriteLine("{0:00}/{1:00}/{2:0000}", dia, mes, ano);
    }

    public bool anoBissexto() {
        return ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0));
    }
}