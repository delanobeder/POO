using System;

namespace poo
{
    public class Onibus : MeioDeTransporte
    {
        public void Subir()
        {
            Console.WriteLine("O onibus para no ponto e pessoal sobe");
        }

        public void Descer()
        {
            Console.WriteLine("O onibus para no ponto e pessoal desce");
        }
    }
}
