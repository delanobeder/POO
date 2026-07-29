import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import br.ufscar.dc.poo.Coordenador;
import br.ufscar.dc.poo.Pessoa;
import br.ufscar.dc.poo.Professor;

class Main {

    public static void main(String[] args) {

        List<Pessoa> pessoas = new ArrayList<Pessoa>();

        Pessoa p1 = new Pessoa("Fulano", 12345);
        Professor p2 = new Professor("Sincrano", 54321, 1000);
        Coordenador p3 = new Coordenador("Beltrano", 13579, 2000, "BCC");

        System.out.println();
        System.out.println("----------------------------- ");
        System.out.println();

        pessoas.add(p1);
        pessoas.add(p2);
        pessoas.add(p3);

        for (int i = 0; i < pessoas.size(); i++) {
            Pessoa p = pessoas.get(i);
            p.imprime();
            System.out.println();
        }

        System.out.println("----------------------------- ");
        System.out.println();

        Collections.sort(pessoas);

        for (Pessoa p : pessoas) {
            p.imprime();
            System.out.println();
        }
    }
}