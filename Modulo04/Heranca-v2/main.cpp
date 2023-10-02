#include "Aluno.h"
#include "Professor.h"

int main() {

    Pessoa p1("Fulano da Silva", 18);
    Pessoa p2("Sincrano Andrade", 19);
    Pessoa p3("Beltrano dos Santos", 18);
    
    p1.imprime();
    
    // Não recomendado (o método imprime é o mais recomendado)

    cout << "Nome: " << p2.getNome() << endl;
    cout << "Idade: " << p2.getIdade() << endl;
    
    p3.imprime();
        
    cout << p1.compare(p2) << endl;
    cout << p1.compare(p3) << endl;
    cout << p2.compare(p1) << endl;

    Aluno a1("Aluno teste", 18, 927450);
    a1.imprime(); // Invocação do método sobreposto imprime()
    cout << endl;
    
    // Não recomendado (o método imprime é o mais recomendado)

    cout << "Nome: " << a1.getNome() << endl;
    cout << "Idade: " << a1.getIdade() << endl;
    cout << "RA: " << a1.getRA() << endl;
    cout << endl;

    // Comparando Pessoa com Aluno (Aluno subclasse de Pessoa -> pode ser utilizado como parametro)

    int v = p1.compare(a1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl;
    
    // Comparando Aluno com Pessoa (Aluno herda o método compare)
    
    v = a1.compare(p1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl << endl;

    Professor prof1("Professor Teste", 42, 5000);
    prof1.imprime(); // Invocação do método sobreposto imprime()
    cout << endl;
    
    // Não recomendado (o método imprime é o mais recomendado)

    cout << "Nome: " << prof1.getNome() << endl;
    cout << "Idade: " << prof1.getIdade() << endl;
    cout << "Salario: " << prof1.getSalario() << endl;
    cout << endl;

    // Comparando Pessoa com Professor (Professor subclasse de Pessoa -> pode ser utilizado como parametro)

    v = p1.compare(prof1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl;

    // Comparando Aluno com Pessoa (Professor herda o método compare)
    
    v = prof1.compare(p1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl;   

    // Comparando Aluno com Professor
    // Aluno herda o método compare
    // Professor subclasse de Pessoa -> pode ser utilizado como parametro
    
    v = a1.compare(prof1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl;

    // Comparando Professor com Aluno
    // Professor herda o método compare
    // Aluno subclasse de Pessoa -> pode ser utilizado como parametro
    
    v = prof1.compare(a1);

    cout << (v == 0 ? "Igual" : (v < 0 ? "Menor" : "Maior")) << endl;


    // Alocação estática

    cout << "--------- Alocação Estática ----- " << endl;
    if (true) {
        Pessoa p4("Teste", 20);
        Aluno a2("Aluno Teste 2", 18, 808080);
        Professor prof2("Carrasco do DM", 50, 3000);
        cout << "Contador de objetos: " << Pessoa::getContador() << endl;        
    }
    cout << "Contador de objetos: " << Pessoa::getContador() << endl;

    cout << "--------- Alocação Dinâmica ----- " << endl;

    
    Pessoa* p4 = new Pessoa("Teste", 20);
    Aluno* a2 = new Aluno("Aluno Teste 2", 18, 808080);
    Professor* prof2 = new Professor("Carrasco do DM", 50, 3000);
    
    cout << "Contador de objetos: " << Pessoa::getContador() << endl;
    
    delete p4;
    delete a2;
    delete prof2;

    cout << "Contador de objetos: " << Pessoa::getContador() << endl;

    return 0;
}