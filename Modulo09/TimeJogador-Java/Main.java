public class Main {

    public static void main(String args[]) {
    
        Jogador prass = new Jogador("Fernando Prass", 40, "Goleiro");
        Jogador guerra = new Jogador("Alejando Guerra", 33, "Meia");
        Jogador borja = new Jogador("Miguel Borja", 25, "Atacante");
        
        Time time = new Time("Palmeiras");
        
        time.adicionaJogador(1, prass);
        time.adicionaJogador(10, guerra);
        time.adicionaJogador(9, borja);
        
        System.out.println();
        
        time.imprime();
        
        System.out.println();
        
        time.removeJogador(10);
        
        time.imprime();
        
        System.out.println();
        
        guerra.imprime();
        
        System.out.println();
    }
}
