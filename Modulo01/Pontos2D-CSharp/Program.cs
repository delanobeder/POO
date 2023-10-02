using System;

class Program {

  static void Main(string[] args) {
    
    Ponto2D p1 = new Ponto2D(4, 3);
    Ponto2D p2 = new Ponto2D(7, 8);    

    p1.imprime();
    p2.imprime();

    Console.WriteLine("dist(P1, P2) = {0:0.00}", p1.distancia(p2));
    Console.WriteLine("dist(P2, P1) = {0:0.00}", p2.distancia(p1));
    
    p1.moveX(10);
    p2.moveX(10);

    p1.imprime();
    p2.imprime();

    Console.WriteLine("dist(P1, P2) = {0:0.00}", p1.distancia(p2));
    Console.WriteLine("dist(P2, P1) = {0:0.00}", p2.distancia(p1));

    p1.moveY(5);
    p2.moveY(5);
    
    p1.imprime();
    p2.imprime();
    
    Console.WriteLine("dist(P1, P2) = {0:0.00}", p1.distancia(p2));
    Console.WriteLine("dist(P2, P1) = {0:0.00}", p2.distancia(p1));
  }
}