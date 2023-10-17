public class Main {
  public static void main(String[] args) {

    Pessoa p1 = new Pessoa("Fulano da Silva", 18);
    Pessoa p2 = new Pessoa("Sincrano Andrade", 19);
    Pessoa p3 = new Pessoa("Beltrano dos Santos", 18);
    Aluno a1 = new Aluno("Aluno teste", 18, 927450);
    Professor prof1 = new Professor("Professor Teste", 42, 5000);

    int res;

    p1.imprime();
    
    // Não recomendado (o método imprime é o mais recomendado)

    System.out.println("Nome: " + p2.getNome());
    System.out.println("Idade: " + p2.getIdade());
    
    p3.imprime();
    
    System.out.println();
    
    // Impressão do objeto aluno

    a1.imprime();
    System.out.println();

    // Não recomendado (o método imprime é o mais recomendado)

    System.out.println("Nome: " + a1.getNome());
    System.out.println("Idade: " + a1.getIdade());
    System.out.println("RA: " + a1.getRA());
    System.out.println();
    
    prof1.imprime(); // Invocação do método sobreposto imprime()
    System.out.println();

    // Não recomendado (o método imprime é o mais recomendado)

    System.out.println("Nome: " + prof1.getNome());
    System.out.println("Idade: " + prof1.getIdade());
    System.out.println("Salário: " + prof1.getSalario());
    System.out.println();

    // Comparando objetos da classe Pessoa

    res = p1.compare(p2);
    System.out.print("Comparando p1 com p2: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));

    res = p2.compare(p1);
    System.out.print("Comparando p2 com p1: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    System.out.println();

    res = p1.compare(p3);
    System.out.print("Comparando p1 com p3: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));

    res = p3.compare(p1);
    System.out.print("Comparando p3 com p1: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    System.out.println();

    res = p2.compare(p3);
    System.out.print("Comparando p2 com p3: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));

    res = p3.compare(p2);
    System.out.print("Comparando p3 com p2: ");
    System.out.println((res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")));
    System.out.println();

    // Comparando Pessoa com Aluno (Aluno subclasse de Pessoa -> pode ser utilizado como parametro)
    
    res = p1.compare(a1);
    System.out.print("Comparando p1 com a1: ");
    System.out.println(res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior"));

    // Comparando Aluno com Pessoa (Aluno herda o método compare)
    
    res = a1.compare(p1);
    System.out.print("Comparando a1 com p1: ");
    System.out.println(res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior"));
    System.out.println();

    // Comparando Pessoa com Professor (Professor subclasse de Pessoa -> pode ser utilizado como parametro)

    res = p1.compare(prof1);
    System.out.print("Comparando p1 com prof1: ");
    System.out.println(res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior"));
    
    // Comparando Aluno com Pessoa (Professor herda o método compare)
    
    res = prof1.compare(p1);
    System.out.print("Comparando prof1 com p1: ");
    System.out.println(res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior"));
    System.out.println();

    // Comparando Aluno com Professor
    // Aluno herda o método compare
    // Professor subclasse de Pessoa -> pode ser utilizado como parametro
    
    res = a1.compare(prof1);
    System.out.print("Comparando a1 com prof1: ");
    System.out.println(res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior"));

    // Comparando Professor com Aluno
    // Professor herda o método compare
    // Aluno subclasse de Pessoa -> pode ser utilizado como parametro
    
    res = prof1.compare(a1);
    System.out.print("Comparando prof1 com a1: ");
    System.out.println(res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior"));
    System.out.println();
  }
}
