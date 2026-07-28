using System;
using poo;
public class Program {

    public static void Main(string[] args) {

        // Construtor que seta os valores de todos os atributos
        Carro c1 = new Carro("Gol", "Branca", 2001, "ABC1234");

        // Construtor que seta os valores de todos os atributos
        Carro c2 = new Carro("Civic", "Azul", 2020, "CAB3H23");

        // Construtor que seta os valores de todos os atributos
        Carro c3 = new Carro("Fusca", "Preto", 1972, "VWB6789");

        // Construtor que seta os valores de todos os atributos
        Carro c4 = new Carro("Renegade", "Cinza", 2022, "JEP2A20");

        // Construtor que seta os valores de todos os atributos
        Pessoa p1 = new Pessoa("Sincrano", "123456789-01");

        Console.WriteLine(p1.adicionaCarro(c1));
        Console.WriteLine(p1.adicionaCarro(c2));
        Console.WriteLine(p1.adicionaCarro(c3));
        Console.WriteLine(p1.adicionaCarro(c4));

        // Construtor que seta os valores de todos os atributos
        Pessoa p2 = new Pessoa("Fulano", "012345678-90");
        Console.WriteLine(p2.adicionaCarro(c4));

        // imprime as informações do p1

        p1.imprime();

        // imprime as informações do p2

        p2.imprime();

        // p1 "vende" o carro de placa "CAB3H23" para p2
        Carro c5 = p1.removeCarro("CAB3H23");
        if (c5 != null) {
            p2.adicionaCarro(c5);
        }

        // imprime as informações do p1

        p1.imprime();

        // imprime as informações do p2

        p2.imprime();
    }
}