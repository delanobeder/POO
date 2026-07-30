import java.io.Console;

class Main {
  public static void main(String[] args) {
    ContaCorrente c1 = new ContaCorrente(1000, 1200.50);
    ContaCorrente c2 = new ContaCorrente(2000);
    
    System.out.println("\n============================");
    System.out.println("Antes da Transferência");
    System.out.println("============================\n");
    
    c1.imprime();
    c2.imprime();
    
    c1.transferencia(c2, 500);
    
    System.out.println("\n============================");
    System.out.println("Depois da Transferência");
    System.out.println("============================\n");
    
    c1.imprime();
    c2.imprime();
    
    System.out.println();    
  }
}