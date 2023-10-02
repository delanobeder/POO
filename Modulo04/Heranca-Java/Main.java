public class Main {
  public static void main(String[] args) {

    Pessoa p1 = new Pessoa("Fulano da Silva", 18);
    Pessoa p2 = new Pessoa("Sincrano Andrade", 19);
    Pessoa p3 = new Pessoa("Beltrano dos Santos", 18);
    
    p1.imprime();
    
    // Não recomendado (o método imprime é o mais recomendado)

    System.out.println("Nome: " + p2.getNome());
    System.out.println("Idade: " + p2.getIdade());
    
    p3.imprime();
    
    System.out.println(p1.compare(p2));
    System.out.println(p1.compare(p3));
    System.out.println(p2.compare(p1));

    Aluno a1 = new Aluno("Aluno teste", 18, 927450);
    a1.imprime();

    // Não recomendado (o método imprime é o mais recomendado)

    System.out.println("Nome: " + a1.getNome());
    System.out.println("Idade: " + a1.getIdade());
    System.out.println("RA: " + a1.getRA());
    
    // Comparando Pessoa com Aluno (Aluno subclasse de Pessoa -> pode ser utilizado como parametro)
    int v = p1.compare(a1);
    
    System.out.println(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));

    // Comparando Aluno com Pessoa (Aluno herda o método compare)
    
    v = a1.compare(p1);

    System.out.println(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));
    System.out.println();

    Professor prof1 = new Professor("Professor Teste", 42, 5000);
    prof1.imprime(); // Invocação do método sobreposto imprime()
    System.out.println();

    // Não recomendado (o método imprime é o mais recomendado)

    System.out.println("Nome: " + prof1.getNome());
    System.out.println("Idade: " + prof1.getIdade());
    System.out.println("Salário: " + prof1.getSalario());
    System.out.println();

    // Comparando Pessoa com Professor (Professor subclasse de Pessoa -> pode ser utilizado como parametro)

    v = p1.compare(prof1);
    System.out.println(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));

    // Comparando Aluno com Pessoa (Professor herda o método compare)
    
    v = prof1.compare(p1);

    System.out.println(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));   

    // Comparando Aluno com Professor
    // Aluno herda o método compare
    // Professor subclasse de Pessoa -> pode ser utilizado como parametro
    
    v = a1.compare(prof1);

    System.out.println(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));

    // Comparando Professor com Aluno
    // Professor herda o método compare
    // Aluno subclasse de Pessoa -> pode ser utilizado como parametro
    
    v = prof1.compare(a1);

    System.out.println(v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior"));
  }
}

/*  

    // Comparando Pessoa com Professor (Professor subclasse de Pessoa -> pode ser utilizado como parametro)

    v = p1.compare(prof1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl;

    // Comparando Aluno com Pessoa (Professor herda o método compare)
    
    v = prof1.compare(p1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl;   

    // Comparando Aluno com Professor
    // Aluno herda o método compare
    // Professor subclasse de Pessoa -> pode ser utilizado como parametro
    
    v = a1.compare(prof1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl;

    // Comparando Professor com Aluno
    // Professor herda o método compare
    // Aluno subclasse de Pessoa -> pode ser utilizado como parametro
    
    v = prof1.compare(a1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl;

*/