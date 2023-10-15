using System;

public class Horario {

    private int hora; 
    private int minuto; 
    
    private int segundo;

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

    public void setHora(int hora) {
        this.hora = (hora >= 0 && hora < 24) ? hora : 0;
    }

    public void setMinuto(int minuto) {
        this.minuto = (minuto >= 0 && minuto < 59) ? minuto : 0;
    }

    public void setSegundo(int segundo) {
        this.segundo = (segundo >= 0 && segundo < 24) ? segundo : 0;
    }

    // Métodos get

    public int getHora() {
        return hora;
    }

    public int getMinuto() {
        return minuto;
    }

    public int getSegundo() {
        return segundo;
    }

    public void imprime() {
        Console.WriteLine("{0:00}:{1:00}:{2:00}", hora, minuto, segundo);
    }
}