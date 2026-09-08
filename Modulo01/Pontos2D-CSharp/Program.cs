using System;

public class Program
{

  public static void Main(string[] args)
  {

    Ponto2D p1 = new Ponto2D(4, 4);
    Ponto2D p2 = new Ponto2D(7, 8);

    p1.Imprime();
    p2.Imprime();

    Console.WriteLine("dist(P1, P2) = {0:0.00}", p1.Distancia(p2));
    Console.WriteLine("dist(P2, P1) = {0:0.00}", p2.Distancia(p1));
    Console.WriteLine();

    p1.MoveX(10);
    p2.MoveX(10);

    p1.Imprime();
    p2.Imprime();

    Console.WriteLine("dist(P1, P2) = {0:0.00}", p1.Distancia(p2));
    Console.WriteLine("dist(P2, P1) = {0:0.00}", p2.Distancia(p1));
    Console.WriteLine();

    p1.MoveY(5);
    p2.MoveY(5);

    // p1.Imprime();
    Console.WriteLine("({0:0.00}, {1:0.00})", p1.GetX(), p1.GetY());
    // p2.Imprime();
    Console.WriteLine("({0:0.00}, {1:0.00})", p2.GetX(), p2.GetY());

    Console.WriteLine("dist(P1, P2) = {0:0.00}", p1.Distancia(p2));
    Console.WriteLine("dist(P2, P1) = {0:0.00}", p2.Distancia(p1));
  }
}
