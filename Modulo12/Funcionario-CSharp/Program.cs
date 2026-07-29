using System;
using System.Collections.Generic;
using poo;

class Program {
  public static void Main(string[] args) {

    List<Funcionario> funcionarios = new List<Funcionario>();

    Funcionario f1 = new Medico("123456789-01", "Dr. House", "Neurologista");
    f1.imprime();
    
    Console.WriteLine();

    Funcionario f2 = new Enfermeiro ("456789012-34", "Charles Cullen", 23451);
    f2.imprime();

    Console.WriteLine();

    Medico f3 = new Medico("345678901-23", "Dr. Patch Adams", "Clínico Geral");
    f3.imprime();

    Console.WriteLine();

    Enfermeiro f4 = new Enfermeiro("234567890-12", "Nurse Beth", 12345);
    f4.imprime();

    Console.WriteLine();
    Console.WriteLine("=========================================");
    Console.WriteLine();

    // Cast f1 para Medico

    Console.Write("Cast f1 => Medico     : ");    
    
    Medico m1 = f1 as Medico;

    if (m1 != null) { 
        Console.WriteLine("(Cast OK) Especialidade: {0}", m1.getEspecialidade()); 
    } 
    else { 
        Console.WriteLine("(Cast not OK)"); 
    }

    // Cast f1 para Enfermeiro
    
    Console.Write("Cast f1 => Enfermeiro : ");
    
    Enfermeiro e1 = f1 as Enfermeiro;

    if (e1 != null) { 
        Console.WriteLine("(Cast OK) CRE: {0}", e1.getCRE()); 
    }
    else { 
        Console.WriteLine("(Cast not OK)"); 
    }

    // Cast f2 para Medico

    Console.Write("Cast f2 => Medico     : ");    
    
    Medico m2 = f2 as Medico;

    if (m2 != null) { 
        Console.WriteLine("(Cast OK) Especialidade: {0}", m2.getEspecialidade()); 
    } 
    else { 
        Console.WriteLine("(Cast not OK)"); 
    }

    // Cast f2 para Enfermeiro
    
    Console.Write("Cast f2 => Enfermeiro : ");
    
    Enfermeiro e2 = f2 as Enfermeiro;

    if (e2 != null) { 
        Console.WriteLine("(Cast OK) CRE: {0}", e2.getCRE()); 
    }
    else { 
        Console.WriteLine("(Cast not OK)"); 
    }

    Console.WriteLine();
    Console.WriteLine("=========================================");
    Console.WriteLine();

    funcionarios.Add(f1);
    funcionarios.Add(f2);
    funcionarios.Add(f3);
    funcionarios.Add(f4);

    funcionarios.Sort(); // Ordenação padrão => por CPF 
    
    for (int i = 0; i < funcionarios.Count; i++) {
        funcionarios[i].imprime();
        Console.WriteLine();
    }

    Console.WriteLine("=========================================");
    Console.WriteLine();

    funcionarios.Sort(Funcionario.CompareProfissao);

    // Construção for each collection
    
    foreach (Funcionario f in funcionarios) {
        f.imprime();
        Console.WriteLine();
    }
  }
}