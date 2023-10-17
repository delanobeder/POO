public class Main {

  public static void main(String[] args) {
    
    Triangulo t1 = new Triangulo(3,4,5);
    Equilatero t2 = new Equilatero(3);

    int res;
    
    t1.imprime();
    
    System.out.println();
    
    t2.imprime();
    
    System.out.println();
    
    // Comparando t1 com t2
    
    res = t1.compare(t2);
    System.out.print("Comparando t1 com t2: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));

    // Comparando t1 com t2
    
    res = t2.compare(t1);
    System.out.print("Comparando t2 com t1: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    System.out.println();

    // Comparando t1 com t1
    
    res = t1.compare(t1);
    System.out.print("Comparando t1 com t1: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));

    // Comparando t2 com t2
    
    res = t2.compare(t2);
    System.out.print("Comparando t2 com t2: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
  }
}