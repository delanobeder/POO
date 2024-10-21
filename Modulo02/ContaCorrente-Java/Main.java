class Main {
  public static void main(String[] args) {
    ContaCorrente c1 = new ContaCorrente(1000, 1200.50);
    ContaChequeEspecial c2 = new ContaChequeEspecial(2000, 0, 500);
    
    System.out.println("\nAntes da Transferência\n");
    
    c1.imprime();
    System.out.println();
    c2.imprime();
    
    c1.transferencia(c2, 500);
    
    System.out.println("\nDepois da Transferência\n");
    
    c1.imprime();
    System.out.println();
    c2.imprime();
    
    System.out.println();    
  }
}