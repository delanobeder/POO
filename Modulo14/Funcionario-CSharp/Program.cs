using System;

class Program {
  public static void Main(string[] args) {

    Medico m = new Medico(12345, "Dr. House", "Neurologista");
    m.imprime();
    
    Console.WriteLine();
    
    Enfermeiro e = new Enfermeiro(67890, "Nurse Beth", 12345);
    e.imprime();
  }
}