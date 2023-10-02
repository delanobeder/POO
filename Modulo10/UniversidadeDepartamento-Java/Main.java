public class Main {

    public static void main(String args[]) {

        Universidade ufscar = new Universidade("UFSCar");

        System.out.println("-------------------------------");

        ufscar.adicionaDepartamento("Computação", "DC");
        ufscar.adicionaDepartamento("Matemática", "DM");
        ufscar.adicionaDepartamento("Física", "DF");

        System.out.println("-------------------------------");

        ufscar.imprime();

        ufscar.removeDepartamento("DM");

        System.out.println("-------------------------------");

        ufscar.imprime();

        System.out.println("-------------------------------");
    }
}
