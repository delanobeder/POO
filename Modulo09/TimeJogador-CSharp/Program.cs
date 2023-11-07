using System;

public class Program {

    public static void Main(string[] args) {
    
        Jogador prass = new Jogador("Fernando Prass", 40, "Goleiro");
        Jogador guerra = new Jogador("Alejando Guerra", 33, "Meia");
        Jogador borja = new Jogador("Miguel Borja", 25, "Atacante");
        
        Time time = new Time("Palmeiras");
        
        time.adicionaJogador(1, prass);
        time.adicionaJogador(10, guerra);
        time.adicionaJogador(9, borja);
        
        Console.WriteLine();
        
        time.imprime();
        
        Console.WriteLine();
        
        time.removeJogador(10);
        
        time.imprime();
        
        Console.WriteLine();
        
        guerra.imprime();
        
        Console.WriteLine();
    }
}
