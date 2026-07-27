using System;

namespace ns2 {

    public class Pessoa {

        private string nome;
        private string endereco;

        public Pessoa(string nome, string endereco) {
            this.nome = nome;
            this.endereco = endereco;
        }

        public void imprime() {
            Console.WriteLine("Nome: {0}", nome);
            Console.WriteLine("Endereco: {0}", endereco);
        }
    }
}