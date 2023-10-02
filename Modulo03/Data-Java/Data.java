public class Data {

    private int ano;
    private int mes;
    private int dia;

    public Data(int dia, int mes, int ano) {
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }

    public int compare(final Data data) {
        if (this.ano != data.ano) {
            return this.ano - data.ano;
        } else if (this.mes != data.mes) {
            return this.mes - data.mes;
        } else {
            return this.dia - data.dia;
        }
    }

    public void imprimePorExtenso() {
        String meses[] = new String[]{
            "Janeiro", "Fevereiro", "Março", "Abril",
            "Maio", "Junho", "Julho", "Agosto",
            "Setembro", "Outubro", "Novembro", "Dezembro"
        };

        System.out.printf("%2d de %s de %4d\n", dia, meses[mes - 1], ano);
    }

    public void imprime() {
        System.out.printf("%02d/%02d/%02d\n", dia, mes, ano);
    }

    public boolean anoBissexto() {
        return ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0));
    }
}