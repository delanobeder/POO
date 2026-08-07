using System;

class Program {

  private static void RunExample() {

    Console.WriteLine("---------------------------------------");
    Pessoa p1 = new Pessoa("Fulano da Silva", 18);
    Pessoa p2 = new Pessoa("Sincrano Andrade", 19);
    Pessoa p3 = new Pessoa("Beltrano dos Santos", 18);
    Aluno a1 = new Aluno("Aluno teste", 18, 927450);
    Pessoa prof1 = new Professor("Professor Teste", 42, 5000);
    Console.WriteLine("---------------------------------------");

    Pessoa[] cadastro = new Pessoa[5];

    cadastro[0] = p1;
    cadastro[1] = p2;
    cadastro[2] = p3;
    cadastro[3] = a1;
    cadastro[4] = prof1;

    prof1.setIdade(43);
    
    Console.WriteLine();

    prof1.imprime();
    Console.WriteLine();
    cadastro[4].imprime();

    Console.WriteLine();
    Console.WriteLine("---------------------------------------");
    Console.WriteLine();

    Console.WriteLine("Contador de objetos: " + Pessoa.getContador());

    Console.WriteLine();
    Console.WriteLine("---------------------------------------");

    for (int i = 0; i < 5; i++) {
      cadastro[i] = null;
    }

    p1 = null;
    p2 = null;
    p3 = null;
    a1 = null;
    prof1 = null;
  }

  public static void Main(string[] args) {
    
    RunExample();

    while (Pessoa.getContador() > 0) {
      // Force immediate garbage collection across all generations
      GC.Collect();
      
      // Block the current thread until all finalizer queues are empty
      GC.WaitForPendingFinalizers();
    }

    Console.WriteLine("---------------------------------------");
    Console.WriteLine();

    Console.WriteLine("Contador de objetos: " + Pessoa.getContador());

    Console.WriteLine();
    Console.WriteLine("---------------------------------------");
  }
}