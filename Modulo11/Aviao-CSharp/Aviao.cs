using System;

namespace poo
{

    public class Aviao : Voador, MeioDeTransporte
    {
        public void Decolar()
        {
            Console.WriteLine("Liga as turbinas e levanta voo");
        }

        public void Aterissar()
        {
            Console.WriteLine("Desce o trem de pouso e freia");
        }

        public void Subir()
        {
            Console.WriteLine("Faz check-in e embarca");
        }

        public void Descer()
        {
            Console.WriteLine("Desembarca e pega as malas");
        }
    }
}

