using System;

public class Horario
{

    private int hora;
    private int minuto;

    private int segundo;

    public Horario()
    {
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

    public Horario(int hora, int minuto, int segundo)
    {
        SetHora(hora);
        SetMinuto(minuto);
        SetSegundo(segundo);
    }

    // Métodos Set

    public void SetHora(int hora)
    {
        this.hora = (hora >= 0 && hora < 24) ? hora : 0;
    }

    public void SetMinuto(int minuto)
    {
        this.minuto = (minuto >= 0 && minuto < 59) ? minuto : 0;
    }

    public void SetSegundo(int segundo)
    {
        this.segundo = (segundo >= 0 && segundo < 24) ? segundo : 0;
    }

    // Métodos Get

    public int GetHora()
    {
        return hora;
    }

    public int GetMinuto()
    {
        return minuto;
    }

    public int GetSegundo()
    {
        return segundo;
    }

    public void Imprime()
    {
        Console.WriteLine("{0:00}:{1:00}:{2:00}", hora, minuto, segundo);
    }
}