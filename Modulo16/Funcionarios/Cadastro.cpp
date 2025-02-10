#include "Cadastro.h"
#include "Enfermeiro.h"
#include "Medico.h"
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

Cadastro::Cadastro(string fileName) : fileName(fileName) {
    recupera();
}

Cadastro::~Cadastro() {
    for (long unsigned int i = 0; i < funcionarios.size(); i++)  {
        delete funcionarios[i];
    }
}

void Cadastro::grava() {

    int tipo;
    Enfermeiro *e1;
    Medico *m1;

    ofstream ofs(fileName);

    for (long unsigned int i = 0; i < funcionarios.size(); i++)  {

        // Escrevendo o tipo de funcionario (ENFERMEIRO ou MEDICO)

        tipo = funcionarios[i]->getProfissao();
        ofs << tipo << Cadastro::delimitador;

        // Escrevendo o CPF

        ofs << funcionarios[i]->getCPF() << Cadastro::delimitador;

        // Escrevendo o nome

        ofs << funcionarios[i]->getNome() << Cadastro::delimitador;
        
        // Escrevendo o salario

        ofs << funcionarios[i]->getSalario() << Cadastro::delimitador;

        // Escreve as caracteristicas especificas Funcionário
        // (atributos da classe Enfermeiro ou Medico)

        switch (tipo) {
            case ENFERMEIRO: {
                
                // Escrevendo o CRE

                e1 = dynamic_cast<Enfermeiro *>(funcionarios[i]);
                ofs << e1->getCRE() << Cadastro::delimitador;

                break;
            }
            case MEDICO: {
                
                // Escrevendo a especialidade

                m1 = dynamic_cast<Medico *>(funcionarios[i]);
                ofs << m1->getEspecialidade() << Cadastro::delimitador;

             break;
            }
        }
        ofs << endl;
    }

    ofs.close();
}

Funcionario* Cadastro::leitura(string line) {

    Funcionario* f;
    stringstream ss(line);
    string column;

    int tipo;
    int CPF;
    string nome;
    double salario;
    int CRE;
    string especialidade;

    // Recupera o tipo

    getline(ss, column, Cadastro::delimitador);
    tipo = stoi(column);

    // Recupera o CPF

    getline(ss, column, Cadastro::delimitador);
    CPF = stoi(column);

    // Recupera o nome

    getline(ss, nome, Cadastro::delimitador);

    // Recupera o salário

    getline(ss, column, Cadastro::delimitador);
    salario = stod(column);

    switch (tipo) {
    case ENFERMEIRO: {

        // Recuperando o CRE

        getline(ss, column, Cadastro::delimitador);
        CRE = stoi(column);

        f = new Enfermeiro(CPF, nome, salario, CRE);
        break;
    }
    case MEDICO: {

        // Recuperando a especialidade

        getline(ss, especialidade, Cadastro::delimitador);

        f = new Medico(CPF, nome, salario, especialidade);

        break;
    }
    }

    return f;
}

void Cadastro::recupera() {

    string line;

    ifstream ifs(fileName);
    
    if (ifs.is_open()) {

        funcionarios.clear();
        
        ifs >> line;

        while (ifs.good()) {
            Funcionario* f = leitura(line);
            funcionarios.push_back(f);
            ifs >> line;
        }
    }

    ifs.close();
}

bool Cadastro::adiciona(int tipo) {
    int CPF, CRE;
    double salario;
    string nome, especialidade;
    Funcionario* f;

    cin.ignore();
    cout << "Nome: ";
    getline(cin, nome);
    cout << "CPF: ";
    cin >> CPF;
    cout << "Salário: ";
    cin >> salario;

    switch(tipo) {
        case ENFERMEIRO: {
            cout << "CRE: ";
            cin >> CRE;
            f = new Enfermeiro(CPF, nome, salario, CRE);
            break;
        }
        case MEDICO: {
            cout << "Especialidade: ";
            cin.ignore();
            getline(cin, especialidade);
            f = new Medico(CPF, nome, salario, especialidade);
            break;
        }
    }

    funcionarios.push_back(f);
    grava();
    return true;
}

bool Cadastro::atualiza(int CPF) {
    double salario;
    bool ok = false;
    int pos = indice(CPF);

    if (pos != -1) {
        
        cout << "Salário: ";
        cin >> salario;
        funcionarios[pos]->setSalario(salario);
        grava();
        ok = true;
    }

    return ok;
}

bool Cadastro::remove(int CPF) {
    bool ok = false;
    int pos = indice(CPF);

    if (pos != -1) {
        Funcionario* f = funcionarios[pos];
        funcionarios.erase(funcionarios.begin() + pos);
        delete f;
        grava();
        ok = true;
    }

    return ok;
}

int Cadastro::indice(int CPF) {
    long unsigned int tam = funcionarios.size();
    long unsigned int pos = 0;

    while (pos < tam && funcionarios[pos]->getCPF() != CPF) {
        pos++;
    }

    if (pos < tam) {
        return pos;
    } else {
        return -1;
    }
}

void Cadastro::imprime(int CPF) {
    int pos = indice(CPF);

    if (pos != -1) {
        funcionarios[pos]->imprime();
    } else {
        cout << "CPF não encontrado";
    }
}

void Cadastro::imprime(bool sorted) {
    vector<Funcionario*> copia = funcionarios;
    if (sorted) {
        sort(copia.begin(), copia.end(), Funcionario::comparaNome);
    }
    for (long unsigned int i = 0; i < copia.size(); i++) {
        copia[i]->imprime();
        cout << endl;
    }
}

char Cadastro::opcao() {
    char c;
    cout << "[I] Imprime todos" << endl;
    cout << "[C] Imprime por CPF" << endl;
    cout << "[O] Imprime ordenado (Nome)" << endl;
    cout << "[E] Adiciona Enfermeiro" << endl;
    cout << "[M] Adiciona Médico" << endl;
    cout << "[S] Atualiza salário (por CPF)" << endl;
    cout << "[R] Remove (por CPF)" << endl;
    cout << "[F] Fim" << endl;
    cout << "> ";
    cin >> c;
    return (toupper(c));
}