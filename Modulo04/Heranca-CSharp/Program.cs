using System;

public class Program {
  public static void Main(string[] args) {

    Pessoa p1 = new Pessoa("Fulano da Silva", 18);
    Pessoa p2 = new Pessoa("Sincrano Andrade", 19);
    Pessoa p3 = new Pessoa("Beltrano dos Santos", 18);
    
    p1.imprime();
    
    // Não recomendado (o método imprime é o mais recomendado)
    
    Console.WriteLine("Nome: {0}", p2.getNome());
    Console.WriteLine("Idade: {0}", p2.getIdade());
    
    p3.imprime();
    
    Console.WriteLine(p1.compare(p2));
    Console.WriteLine(p1.compare(p3));
    Console.WriteLine(p2.compare(p1));

    Aluno a1 = new Aluno("Aluno teste", 18, 927450);
    a1.imprime();

    // Não recomendado (o método imprime é o mais recomendado)

    Console.WriteLine("Nome: {0}", a1.getNome());
    Console.WriteLine("Idade: {0}", a1.getIdade());
    Console.WriteLine("RA: {0}", a1.getRA());
    
    // Comparando Pessoa com Aluno (Aluno subclasse de Pessoa -> pode ser utilizado como parametro)
    int v = p1.compare(a1);
    
    Console.WriteLine(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));

    // Comparando Aluno com Pessoa (Aluno herda o método compare)
    
    v = a1.compare(p1);

    Console.WriteLine(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));
    Console.WriteLine();

    Professor prof1 = new Professor("Professor Teste", 42, 5000);
    prof1.imprime(); // Invocação do método sobreposto imprime()
    Console.WriteLine();

    // Não recomendado (o método imprime é o mais recomendado)

    Console.WriteLine("Nome: {0}", prof1.getNome());
    Console.WriteLine("Idade: {0}", prof1.getIdade());
    Console.WriteLine("Salário: {0}", prof1.getSalario());
    Console.WriteLine();

    // Comparando Pessoa com Professor (Professor subclasse de Pessoa -> pode ser utilizado como parametro)

    v = p1.compare(prof1);
    Console.WriteLine(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));

    // Comparando Aluno com Pessoa (Professor herda o método compare)
    
    v = prof1.compare(p1);

    Console.WriteLine(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));   

    // Comparando Aluno com Professor
    // Aluno herda o método compare
    // Professor subclasse de Pessoa -> pode ser utilizado como parametro
    
    v = a1.compare(prof1);

    Console.WriteLine(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));

    // Comparando Professor com Aluno
    // Professor herda o método compare
    // Aluno subclasse de Pessoa -> pode ser utilizado como parametro
    
    v = prof1.compare(a1);

    Console.WriteLine(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));
  }
}

