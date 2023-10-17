using System;

public class Program {
  public static void Main(string[] args) {

    Pessoa p1 = new Pessoa("Fulano da Silva", 18);
    Pessoa p2 = new Pessoa("Sincrano Andrade", 19);
    Pessoa p3 = new Pessoa("Beltrano dos Santos", 18);
    Aluno a1 = new Aluno("Aluno teste", 18, 927450);
    Professor prof1 = new Professor("Professor Teste", 42, 5000);

    int res;

    p1.imprime();
    
    // Não recomendado (o método imprime é o mais recomendado)
    
    Console.WriteLine("Nome: {0}", p2.getNome());
    Console.WriteLine("Idade: {0}", p2.getIdade());
    
    p3.imprime();
    Console.WriteLine();
    
    // Impressão do objeto aluno
    
    a1.imprime(); // Invocação do método sobreposto imprime()
    Console.WriteLine();

    // Não recomendado (o método imprime é o mais recomendado)

    Console.WriteLine("Nome: {0}", a1.getNome());
    Console.WriteLine("Idade: {0}", a1.getIdade());
    Console.WriteLine("RA: {0}", a1.getRA());
    Console.WriteLine();

    // Impressão do objeto professor
    
    prof1.imprime(); // Invocação do método sobreposto imprime()
    Console.WriteLine();

    // Não recomendado (o método imprime é o mais recomendado)

    Console.WriteLine("Nome: {0}", prof1.getNome());
    Console.WriteLine("Idade: {0}", prof1.getIdade());
    Console.WriteLine("Salário: {0}", prof1.getSalario());
    Console.WriteLine();
    
    // Comparando objetos da classe Pessoa

    res = p1.compare(p2);
    Console.Write("Comparando p1 com p2: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    
    res = p2.compare(p1);
    Console.Write("Comparando p2 com p1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    Console.WriteLine();

    res = p1.compare(p3);
    Console.Write("Comparando p1 com p3: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    
    res = p3.compare(p1);
    Console.Write("Comparando p3 com p1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    Console.WriteLine();

    res = p2.compare(p3);
    Console.Write("Comparando p2 com p3: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    
    res = p3.compare(p2);
    Console.Write("Comparando p3 com p2: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    Console.WriteLine();

    // Comparando Pessoa com Aluno (Aluno subclasse de Pessoa -> pode ser utilizado como parametro)
    
    res = p1.compare(a1);
    Console.Write("Comparando p1 com a1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    
    // Comparando Aluno com Pessoa (Aluno herda o método compare)
    
    res = a1.compare(p1);
    Console.Write("Comparando a1 com p1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    Console.WriteLine();

    // Comparando Pessoa com Professor (Professor subclasse de Pessoa -> pode ser utilizado como parametro)

    res = p1.compare(prof1);
    Console.Write("Comparando p1 com prof1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));

    // Comparando Professsor com Pessoa (Professor herda o método compare)
    
    res = prof1.compare(p1);
    Console.Write("Comparando prof1 com p1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    Console.WriteLine();

    // Comparando Aluno com Professor
    // Aluno herda o método compare
    // Professor subclasse de Pessoa -> pode ser utilizado como parametro
    
    res = a1.compare(prof1);
    Console.Write("Comparando a1 com prof1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));

    // Comparando Professor com Aluno
    // Professor herda o método compare
    // Aluno subclasse de Pessoa -> pode ser utilizado como parametro
    
    res = prof1.compare(a1);
    Console.Write("Comparando prof1 com a1: ");
    Console.WriteLine((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    Console.WriteLine();
  }
}
