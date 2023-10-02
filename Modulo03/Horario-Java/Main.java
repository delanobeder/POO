class Main {
  public static void main(String[] args) {
    
    Horario comer = new Horario(12,0,0);
    Horario dormir = new Horario(30,90,75); //horário inválido

    System.out.println("horário de comer: ");
    comer.imprime();

    comer.setHora(23);
    comer.setMinuto(15);
    comer.setSegundo(30);

    System.out.println("horário de comer modificado: ");
    comer.imprime();

    System.out.println("horário de dormir: ");
    dormir.imprime();
  }
}