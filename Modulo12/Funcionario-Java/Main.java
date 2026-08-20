import br.ufscar.dc.poo.Enfermeiro;
import br.ufscar.dc.poo.Funcionario;
import br.ufscar.dc.poo.Medico;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class Main {

    public static void main(String[] args) {

        List<Funcionario> funcionarios = new ArrayList<>();

        Funcionario f1 = new Medico("123456789-01", "Dr. House", "Neurologista");
        f1.imprime();

        System.out.println();

        Funcionario f2 = new Enfermeiro("456789012-34", "Charles Cullen", 23451);
        f2.imprime();

        System.out.println();

        Medico f3 = new Medico("345678901-23", "Dr. Patch Adams", "Clínico Geral");
        f3.imprime();

        System.out.println();

        Enfermeiro f4 = new Enfermeiro("234567890-12", "Nurse Beth", 12345);
        f4.imprime();

        System.out.println();
        System.out.println("=========================================");
        System.out.println();

        // Cast f1 para Medico

        System.out.print("Cast f1 => Medico     : ");

        if (f1 instanceof Medico) {
            Medico m1 = (Medico) f1;
            System.out.println("(Cast OK) Especialidade: " + m1.getEspecialidade());
        } else {
            System.out.println("(Cast not OK)");
        }

        // Cast f1 para Enfermeiro

        System.out.print("Cast f1 => Enfermeiro : ");

        if (f1 instanceof Enfermeiro) {
            Enfermeiro e1 = (Enfermeiro) f1;
            System.out.println("(Cast OK) CRE: " + e1.getCRE());
        } else {
            System.out.println("(Cast not OK)");
        }

        // Cast f2 para Medico

        System.out.print("Cast f2 => Medico     : ");

        if (f2 instanceof Medico) {
            Medico m2 = (Medico) f2;
            System.out.println("(Cast OK) Especialidade: " + m2.getEspecialidade());
        } else {
            System.out.println("(Cast not OK)");
        }

        // Cast f2 para Enfermeiro

        System.out.print("Cast f2 => Enfermeiro : ");

        if (f2 instanceof Enfermeiro) {
            Enfermeiro e2 = (Enfermeiro) f2;
            System.out.println("(Cast OK) CRE: " + e2.getCRE());
        } else {
            System.out.println("(Cast not OK)");
        }

        System.out.println();
        System.out.println("=========================================");
        System.out.println();

        funcionarios.add(f1);
        funcionarios.add(f2);
        funcionarios.add(f3);
        funcionarios.add(f4);

        Collections.sort(funcionarios); // Ordenação padrão => por CPF

        for (int i = 0; i < funcionarios.size(); i++) {
            Funcionario f = funcionarios.get(i);
            f.imprime();
            System.out.println();
        }

        Collections.sort(funcionarios, Comparator.comparing(Funcionario::getProfissao)
                      .thenComparing(Funcionario::getCPF));
        
        System.out.println("=========================================");
        System.out.println();

        // Construção for each collection
        
        for (Funcionario f: funcionarios) {
            f.imprime();
            System.out.println();
        }
    }
}
