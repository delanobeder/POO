using System;

namespace poo {
    public class Onibus : MeioDeTransporte{
        public void subir() {
            Console.WriteLine("O onibus para no ponto e pessoal sobe");
        }

        public void descer() {
            Console.WriteLine("O onibus para no ponto e pessoal desce");
        }
    }
}
