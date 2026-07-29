using System;
using System.Collections.Generic;
using poo;

class Program {
    public static void Main(string[] args) {

        List<Funcionario> funcionarios = new List<Funcionario>();

        Funcionario f1 = new Medico("123456789-01", "Dr. House", "Neurologista");
        Funcionario f2 = new Enfermeiro("456789012-34", "Charles Cullen", 23451);
        Medico f3 = new Medico("345678901-23", "Dr. Patch Adams", "Clínico Geral");
        Enfermeiro f4 = new Enfermeiro("234567890-12", "Nurse Beth", 12345);

        funcionarios.Add(f1);
        funcionarios.Add(f2);
        funcionarios.Add(f3);
        funcionarios.Add(f4);

        for (int i = 0; i < funcionarios.Count; i++) {
            funcionarios[i].imprime();
            Console.WriteLine();

            // Cast f1 para Medico
             
            Console.Write("Cast => Medico     : ");
            
            Medico m1 = funcionarios[i] as Medico;
            
            if (m1 != null) {
                Console.WriteLine("(Cast OK) Especialidade: {0}", m1.getEspecialidade());
            } else {
                Console.WriteLine("(Cast not OK)");
            }
            
            // Cast para Enfermeiro
            
            Console.Write("Cast => Enfermeiro : ");
            
            Enfermeiro e1 = funcionarios[i] as Enfermeiro;
            
            if (e1 != null) {
                Console.WriteLine("(Cast OK) CRE: {0}", e1.getCRE());
            } else {
                Console.WriteLine("(Cast not OK)");
            }

            Console.WriteLine();            
        }

        Console.WriteLine("=========================================");
        Console.WriteLine();


        funcionarios.Sort(); // Ordenação padrão => por CPF 

        for (int i = 0; i < funcionarios.Count; i++)
        {
            funcionarios[i].imprime();
            Console.WriteLine();
        }

        Console.WriteLine("=========================================");
        Console.WriteLine();

        funcionarios.Sort(Funcionario.CompareProfissao);

        // Construção for each collection

        foreach (Funcionario f in funcionarios)
        {
            f.imprime();
            Console.WriteLine();
        }
    }
}