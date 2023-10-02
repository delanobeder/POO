public class Main {

  public static void main(String[] args) {
    
    Triangulo t1 = new Triangulo(3,4,5);
    Equilatero t2 = new Equilatero(3);
    
    t1.imprime();
    
    System.out.println();
    
    t2.imprime();
    
    System.out.println();
    
    System.out.println(t1.compare(t2));
    System.out.println(t1.compare(t1));
    System.out.println(t2.compare(t1));
  }
}