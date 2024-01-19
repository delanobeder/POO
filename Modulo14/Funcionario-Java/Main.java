
public class Main {

    public static void main(String[] args) {

        Funcionario f1 = new Medico(12345, "Dr. House", "Neurologista");
        f1.imprime();

        System.out.println();

        Funcionario f2 = new Enfermeiro(67890, "Nurse Beth", 12345);
        f2.imprime();

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
    }
}
