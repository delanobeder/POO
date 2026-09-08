using System;
using poo;

public class Program
{

    public static void Main(string[] args)
    {

        Jogador prass = new Jogador("Fernando Prass", 40, "Goleiro");
        Jogador guerra = new Jogador("Alejando Guerra", 33, "Meia");
        Jogador borja = new Jogador("Miguel Borja", 25, "Atacante");

        Time time = new Time("Palmeiras");

        time.AdicionaJogador(1, prass);
        time.AdicionaJogador(10, guerra);
        time.AdicionaJogador(9, borja);

        Console.WriteLine();

        time.Imprime();

        Console.WriteLine();

        time.RemoveJogador(10);

        time.Imprime();

        Console.WriteLine();

        guerra.Imprime();

        Console.WriteLine();
    }
}
