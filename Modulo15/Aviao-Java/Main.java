import br.ufscar.dc.poo.*;

public class Main {

    public static void main(String[] args) {

        Voador v = new Passaro();

        v.decolar();
        v.aterissar();
        
        MeioDeTransporte m = new Onibus();

        m.subir();
        m.descer();
        
        Aviao a = new Aviao();

        a.decolar();
        a.aterissar();
        a.subir();
        a.descer();
    }
}
