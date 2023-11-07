using System;

public class Program {

    public static void Main(string[] args) {

        Universidade ufscar = new Universidade("UFSCar");

        Console.WriteLine("-------------------------------");

        ufscar.adicionaDepartamento("Computação", "DC");
        ufscar.adicionaDepartamento("Matemática", "DM");
        ufscar.adicionaDepartamento("Física", "DF");

        Console.WriteLine("-------------------------------");

        ufscar.imprime();

        ufscar.removeDepartamento("DM");

        Console.WriteLine("-------------------------------");

        ufscar.imprime();

        Console.WriteLine("-------------------------------");
    }
}
