
public class Main {

    public static void main(String[] args) {

        Medico m = new Medico(12345, "Dr. House", "Neurologista");
        m.imprime();

        System.out.println();

        Enfermeiro e = new Enfermeiro(67890, "Nurse Beth", 12345);
        e.imprime();
    }
}
