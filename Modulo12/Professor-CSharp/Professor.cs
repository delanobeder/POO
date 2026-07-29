using System;

namespace poo {

    class Professor : Pessoa {

        private double salario;
        public Professor(string nome, int CPF, double salario) : base(nome, CPF) {
            this.salario = salario;
        }
        public virtual double getSalario() {
            return salario;
        }

        public override void imprime() {
            base.imprime();
            Console.WriteLine("Salário: " + this.getSalario());
        }
    }

}