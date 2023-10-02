import br.ufscar.dc.package1.Pessoa;

public class Main {
    public static void main(String[] args) {

        Pessoa p1 = new Pessoa("Fulano", 18);
        br.ufscar.dc.package2.Pessoa p2 = new br.ufscar.dc.package2.Pessoa("Sincrano", "Endereco X");

        p1.imprime();

        System.out.println();

        p2.imprime();
    }
}