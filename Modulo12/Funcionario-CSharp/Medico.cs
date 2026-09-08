using System;

namespace poo
{
    public class Medico : Funcionario
    {

        private string especialidade;

        public Medico(string CPF, string nome, string especialidade) : base(CPF, nome)
        {
            this.especialidade = especialidade;
        }

        public override string GetProfissao()
        {
            return "Medico";
        }

        public string GetEspecialidade()
        {
            return especialidade;
        }

        public override void Imprime()
        {
            base.Imprime();
            Console.WriteLine("Especialidade: {0}", this.especialidade);
        }
    }
}