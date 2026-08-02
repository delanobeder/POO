using System;

namespace poo {

    public class Pessoa {

        private string nome;
        private string CPF;
        private Carro[] carros;
        private int qtde;

        public Pessoa(string nome, string CPF) {
            this.nome = nome;
            this.CPF = CPF;
            this.qtde = 0;
            this.carros = new Carro[3];
        }

        public string getNome() {
            return nome;
        }

        public void setNome(string nome) {
            this.nome = nome;
        }

        public string getCPF() {
            return CPF;
        }

        public void setCPF(string CPF) {
            CPF = this.CPF;
        }

        public bool adicionaCarro(Carro carro) {
            bool ok = (qtde < 3);
            if (ok) {
                carros[qtde++] = carro;
                carro.setDono(this);
            }
            return ok;
        }

        public Carro removeCarro(string placa) {
            Carro carro = null;
            int pos = 0;
            while (pos < qtde && carro == null) {
                //if (carros[pos].getPlaca().equals(placa)) { 
                if (carros[pos].getPlaca() == placa) {
                    carro = carros[pos];
                }
                else {
                    pos++;
                }
            }

            if (carro != null) {
                while (pos < qtde - 1) {
                    carros[pos] = carros[pos + 1];
                    pos++;
                }
                carros[pos] = null;

                qtde = qtde - 1;
            }

            return carro;
        }

        public void imprime() {
            Console.WriteLine("-------------------------------------");
            Console.WriteLine("Nome: " + this.getNome());
            Console.WriteLine("CPF: " + this.getCPF());
            Console.WriteLine("<Carros> ");
            for (int i = 0; i < qtde; i++) {
                if (carros[i] != null) {
                    this.carros[i].imprime();
                    Console.WriteLine();
                }
            }
        }
    }
}