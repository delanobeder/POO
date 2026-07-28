using System;

class Program {
  public static void Main(string[] args) {

    Funcionario f1 = new Medico(12345, "Dr. House", "Neurologista");
    f1.imprime();
    
    Console.WriteLine();
    
    Funcionario f2 = new Enfermeiro(67890, "Nurse Beth", 12345);
    f2.imprime();

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
  }
}