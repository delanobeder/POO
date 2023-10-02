class Main {
  public static void main(String[] args) {
    ContaCorrente c1 = new ContaCorrente(1000, 1200.50);
    ContaCorrente c2 = new ContaCorrente(2000);
    
    System.out.println("\nAntes da Transferência\n");
    
    c1.imprime();
    c2.imprime();
    
    c1.transferencia(c2, 500);
    
    System.out.println("\nDepois da Transferência\n");
    
    c1.imprime();
    c2.imprime();
    
    System.out.println();    
  }
}