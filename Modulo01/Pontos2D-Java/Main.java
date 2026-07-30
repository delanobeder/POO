
class Main {

  public static void main(String[] args) {
    
    Ponto2D p1 = new Ponto2D(4, 4);
    Ponto2D p2 = new Ponto2D(7, 8);    

    p1.imprime();
    p2.imprime();
    System.out.printf("dist(P1, P2) = %.2f\n", p1.distancia(p2));
    System.out.printf("dist(P2, P1) = %.2f\n", p2.distancia(p1));
    System.out.println();
    
    p1.moveX(10);
    p2.moveX(10);

    p1.imprime();
    p2.imprime();
    System.out.printf("dist(P1, P2) = %.2f\n", p1.distancia(p2));
    System.out.printf("dist(P2, P1) = %.2f\n", p2.distancia(p1));
    System.out.println();

    p1.moveY(5);
    p2.moveY(5);
    
    // p1.imprime();
    System.out.printf("(%.2f, %.2f)\n", p1.getX(), p1.getY());
    // p2.imprime();
    System.out.printf("(%.2f, %.2f)\n", p2.getX(), p2.getY());

    System.out.printf("dist(P1, P2) = %.2f\n", p1.distancia(p2));
    System.out.printf("dist(P2, P1) = %.2f\n", p2.distancia(p1));
  }
}