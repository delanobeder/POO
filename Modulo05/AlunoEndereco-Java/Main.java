
public class Main {

    public static void main(String args[]) {

        Endereco end1;
        end1 = new Endereco("Rua da Saudade", 10, "São Carlos", "São Paulo");

        Endereco end2 = new Endereco("Rua das Bandeiras", 1000, "São Carlos", "São Paulo");

        // Construtor com 3 parâmetros
        Aluno aluno1 = new Aluno("Fulano", 12345, end1);

        Aluno aluno2 = new Aluno("Sincrano", 54321, end2);

        // imprime as informações do aluno1
        aluno1.imprime();

        // imprime as informações do aluno2

        aluno2.imprime();

        System.out.println();
    }
}