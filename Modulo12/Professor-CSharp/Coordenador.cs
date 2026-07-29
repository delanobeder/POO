using System;

namespace poo {

    class Coordenador : Professor {

        private string curso;
        public Coordenador(string nome, int CPF, double salario, string curso) : base(nome, CPF, salario) {
            this.curso = curso;
        }
        public override double getSalario() {
            return base.getSalario() + 2000;
        }
        public string getCurso() {
            return curso;
        }

        public override void imprime() {
            base.imprime();
            Console.WriteLine("Curso: " + curso);
        }
    }

}