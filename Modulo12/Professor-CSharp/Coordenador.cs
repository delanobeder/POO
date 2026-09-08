using System;

namespace poo
{

    class Coordenador : Professor
    {

        private string curso;
        public Coordenador(string nome, int CPF, double salario, string curso) : base(nome, CPF, salario)
        {
            this.curso = curso;
        }
        public override double GetSalario()
        {
            return base.GetSalario() + 2000;
        }
        public string GetCurso()
        {
            return curso;
        }

        public override void Imprime()
        {
            base.Imprime();
            Console.WriteLine("Curso: " + curso);
        }
    }

}