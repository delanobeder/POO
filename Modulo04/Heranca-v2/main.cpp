#include "Aluno.h"
#include "Professor.h"

int main() {

    Pessoa p1("Fulano da Silva", 18);
    Pessoa p2("Sincrano Andrade", 19);
    Pessoa p3("Beltrano dos Santos", 18);
    Aluno a1("Aluno teste", 18, 927450);
    Professor prof1("Professor Teste", 42, 5000);

    int res;
    
    p1.imprime();
    
    // Não recomendado (o método imprime é o mais recomendado)

    cout << "Nome: " << p2.getNome() << endl;
    cout << "Idade: " << p2.getIdade() << endl;
    
    p3.imprime();

    cout << endl;

    // Impressão do objeto aluno

    a1.imprime(); // Invocação do método sobreposto imprime()
    cout << endl;
    
    // Não recomendado (o método imprime é o mais recomendado)

    cout << "Nome: " << a1.getNome() << endl;
    cout << "Idade: " << a1.getIdade() << endl;
    cout << "RA: " << a1.getRA() << endl;
    cout << endl;

    // Impressão do objeto professor
    
    prof1.imprime(); // Invocação do método sobreposto imprime()
    cout << endl;
    
    // Não recomendado (o método imprime é o mais recomendado)

    cout << "Nome: " << prof1.getNome() << endl;
    cout << "Idade: " << prof1.getIdade() << endl;
    cout << "Salario: " << prof1.getSalario() << endl;
    cout << endl;

    // Comparando objetos da classe Pessoa

    res = p1.compare(p2);
    cout << "Comparando p1 com p2: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;
    
    res = p2.compare(p1);
    cout << "Comparando p2 com p1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl << endl;

    res = p1.compare(p3);
    cout << "Comparando p1 com p3: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    res = p3.compare(p1);
    cout << "Comparando p3 com p1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl << endl;

    res = p2.compare(p3);
    cout << "Comparando p2 com p3: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    res = p3.compare(p2);
    cout << "Comparando p3 com p2: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl << endl;

    // Comparando Pessoa com Aluno (Aluno subclasse de Pessoa -> pode ser utilizado como parametro)

    res = p1.compare(a1);
    cout << "Comparando p1 com a1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;
    
    // Comparando Aluno com Pessoa (Aluno herda o método compare)

    res = a1.compare(p1);
    cout << "Comparando a1 com p1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl << endl;

    // Comparando Pessoa com Professor (Professor subclasse de Pessoa -> pode ser utilizado como parametro)

    res = p1.compare(prof1);
    cout << "Comparando p1 com prof1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    // Comparando Professor com Pessoa (Professor herda o método compare)
    
    res = prof1.compare(p1);
    cout << "Comparando prof1 com p1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl << endl;

    // Comparando Aluno com Professor
    // Aluno herda o método compare
    // Professor subclasse de Pessoa -> pode ser utilizado como parametro
    
    res = a1.compare(prof1);
    cout << "Comparando a1 com prof1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl;

    // Comparando Professor com Aluno
    // Professor herda o método compare
    // Aluno subclasse de Pessoa -> pode ser utilizado como parametro
    
    res = prof1.compare(a1);
    cout << "Comparando prof1 com a1: ";
    cout << (res == 0 ? "Igual" : (res < 0 ? "Menor" : "Maior")) << endl << endl;

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
