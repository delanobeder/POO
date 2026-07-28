using System;

namespace poo {
    
    public class Aviao : Voador, MeioDeTransporte{
        public void decolar() {
            Console.WriteLine("Liga as turbinas e levanta voo");
        }
        
        public void aterissar() {
            Console.WriteLine("Desce o trem de pouso e freia");
        }

        public void subir() {
            Console.WriteLine("Faz check-in e embarca");
        }

        public void descer() {
            Console.WriteLine("Desembarca e pega as malas");
        }
    }
}

