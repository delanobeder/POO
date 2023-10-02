
public class Horario {

    private int hora, minuto, segundo;

    public Horario() {
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

    public Horario(int hora, int minuto, int segundo) {
        setHora(hora);
        setMinuto(minuto);
        setSegundo(segundo);
    }

    // Métodos set

    void setHora(int hora) {
        this.hora = (hora >= 0 && hora < 24) ? hora : 0;
    }

    void setMinuto(int minuto) {
        this.minuto = (minuto >= 0 && minuto < 59) ? minuto : 0;
    }

    void setSegundo(int segundo) {
        this.segundo = (segundo >= 0 && segundo < 24) ? segundo : 0;
    }

    // Métodos get

    int getHora() {
        return hora;
    }

    int getMinuto() {
        return minuto;
    }

    int getSegundo() {
        return segundo;
    }

    void imprime() {
        System.out.printf("%02d:%02d:%02d\n", hora, minuto, segundo);
    }
}
