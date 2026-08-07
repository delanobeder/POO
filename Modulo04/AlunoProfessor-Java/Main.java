import java.util.concurrent.TimeUnit;

public class Main {

  private static void runExample() {

    System.out.println("---------------------------------------");
    Pessoa p1 = new Pessoa("Fulano da Silva", 18);
    Pessoa p2 = new Pessoa("Sincrano Andrade", 19);
    Pessoa p3 = new Pessoa("Beltrano dos Santos", 18);
    Aluno a1 = new Aluno("Aluno teste", 18, 927450);
    Pessoa prof1 = new Professor("Professor Teste", 42, 5000);
    System.out.println("---------------------------------------");

    Pessoa[] cadastro = new Pessoa[5];

    cadastro[0] = p1;
    cadastro[1] = p2;
    cadastro[2] = p3;
    cadastro[3] = a1;
    cadastro[4] = prof1;

    prof1.setIdade(43);

    System.out.println();

    prof1.imprime();
    System.out.println();
    cadastro[4].imprime();

    System.out.println();
    System.out.println("---------------------------------------");
    System.out.println();

    System.out.println("Contador de objetos: " + Pessoa.getContador());

    System.out.println();
    System.out.println("---------------------------------------");

    for (int i = 0; i < 5; i++) {
      cadastro[i] = null;
    }

    p1 = null;
    p2 = null;
    p3 = null;
    a1 = null;
    prof1 = null;
  }

  public static void main(String[] args) throws InterruptedException {

    runExample();

    while (Pessoa.getContador() > 0) {
      Runtime.getRuntime().gc();
      TimeUnit.SECONDS.sleep(1);
    }

    System.out.println("---------------------------------------");
    System.out.println();

    System.out.println("Contador de objetos: " + Pessoa.getContador());

    System.out.println();
    System.out.println("---------------------------------------");
  }
}