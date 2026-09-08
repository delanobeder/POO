using System;
using poo;

public class Program
{

    public static void Main(string[] args)
    {

        Universidade ufscar = new Universidade("UFSCar");

        Console.WriteLine("-------------------------------");

        ufscar.AdicionaDepartamento("Computação", "DC");
        ufscar.AdicionaDepartamento("Matemática", "DM");
        ufscar.AdicionaDepartamento("Física", "DF");

        Console.WriteLine("-------------------------------");

        ufscar.Imprime();

        ufscar.RemoveDepartamento("DM");

        Console.WriteLine("-------------------------------");

        ufscar.Imprime();

        Console.WriteLine("-------------------------------");
    }
}
