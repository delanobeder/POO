using System;

class Program {
  public static void Main(string[] args) {

    Pessoa p1 = new Pessoa("Fulano da Silva", 18);
    Pessoa p2 = new Pessoa("Sincrano Andrade", 19);
    Pessoa p3 = new Pessoa("Beltrano dos Santos", 18);
    Aluno a1 = new Aluno("Aluno teste", 18, 927450);
    Pessoa prof1 = new Professor("Professor Teste", 42, 5000);

    Pessoa[] cadastro = new Pessoa[5];

    cadastro[0] = p1;
    cadastro[1] = p2;
    cadastro[2] = p3;
    cadastro[3] = a1;
    cadastro[4] = prof1;

    prof1.setIdade(43);
    prof1.imprime();
    Console.WriteLine();
    cadastro[4].imprime();

    Console.WriteLine();
    cadastro[3].imprime();
  }
}