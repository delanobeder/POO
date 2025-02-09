#include "Cadastro.h"
#include <sstream>
using namespace std;

Cadastro::Cadastro(string nomeArquivo) : nomeArquivo(nomeArquivo) {
}

Cadastro::~Cadastro() {
}

void Cadastro::grava(int nro) {
    int RA;
    double NP, NT;

    ofstream ofs(nomeArquivo);

    for (int i = 0; i < nro; i++) {
        cout << "Digite RA, NP e NT: ";
        cout << endl;
        cin >> RA >> NP >> NT;
        
        // Gravando RA

        ofs << RA << Cadastro::delimitador;

        // Escrevendo NP

        ofs << NP << Cadastro::delimitador; 
        
        // Escrevendo NT

        ofs << NT << endl;
    }

    ofs.close();
}

void Cadastro::atualiza(Aluno &aluno, string line) {

    stringstream ss(line);
    string column;

    // Recupera RA
    getline(ss, column, Cadastro::delimitador);
    aluno.RA = stoi(column);

    // Recupera NP
    getline(ss, column, Cadastro::delimitador);
    aluno.NP = stod(column);

    // Recupera NT
    getline(ss, column, Cadastro::delimitador);
    aluno.NT = stod(column);
}

void Cadastro::imprime() {

    ifstream ifs(nomeArquivo);
    string line;
    
    Aluno aluno;

    if (ifs.is_open()) {
        ifs >> line;
        while (ifs.good()) {
            atualiza(aluno, line);
            aluno.imprime();
            ifs >> line;
        }
    }

    ifs.close();
}

void Cadastro::imprimeRA(int RA) {

    Aluno aluno;
    string line;
    bool achou = false;

    ifstream ifs(nomeArquivo);

    if (ifs.is_open()) {
        ifs >> line;
        while (ifs.good() && !achou) {
            atualiza(aluno, line);
            achou = (aluno.getRA() == RA);
            ifs >> line;
        }
    }

    ifs.close();

    if (achou) {
        aluno.imprime();
    } else {
        cout << "Aluno não encontrado" << endl;
    }
}

void Cadastro::imprimePos(int pos) {

    Aluno aluno;
    string line;
    int contador;

    ifstream ifs(nomeArquivo);

    if (ifs.is_open()) {
        contador = 1;
        ifs >> line;
        while (ifs.good() && contador < pos) {  
            contador++;
            ifs >> line;
        }

        if (ifs.good()) {
            atualiza(aluno, line);
            aluno.imprime();
        } else {
            cout << "Aluno não encontrado" << endl;
        }
    }

    ifs.close();
}

void Cadastro::leitura(vector<Aluno> &alunos) {
    Aluno aluno;
    string line;
    ifstream ifs(nomeArquivo, ios::binary);

    if (ifs.is_open()) {
        ifs >> line;
        while (ifs.good()) {
            atualiza(aluno, line);
            alunos.push_back(aluno);
            ifs >> line;
        }
    }

    ifs.close();
}

void Cadastro::imprimeOrdenado() {

    vector<Aluno> alunos;

    leitura(alunos);

    sort(alunos.begin(), alunos.end(), Aluno::compara);

    for (long unsigned int i = 0; i < alunos.size(); i++) {
        alunos[i].imprime();
    }
}

void Cadastro::imprimeAprovados() {

    vector<Aluno> alunos;

    leitura(alunos);

    for (long unsigned int i = 0; i < alunos.size(); i++) {
        Aluno a = alunos[i];
        if (a.media() > 6) {
            a.imprime();
        }
    }
}

void Cadastro::imprimeSAC() {

    vector<Aluno> alunos;

    leitura(alunos);

    for (long unsigned int i = 0; i < alunos.size(); i++) {
        Aluno a = alunos[i];
        double media = a.media();
        if (media >= 5.0 && media < 6.0) {
            a.imprime();
        }
    }
}

void Cadastro::imprimeReprovados() {

    vector<Aluno> alunos;

    leitura(alunos);

    for (long unsigned int i = 0; i < alunos.size(); i++) {
        Aluno a = alunos[i];
        if (a.media() < 5.0) {
            a.imprime();
        }
    }
}

char Cadastro::opcao() {
    char c;
    cout << "[G] Grava arquivo" << endl;
    cout << "[I] Imprime todos" << endl;
    cout << "[R] Imprime por RA" << endl;
    cout << "[P] Imprime por posição" << endl;
    cout << "[O] Imprime ordenado" << endl;
    cout << "[A] Imprime aprovados" << endl;
    cout << "[B] Imprime reprovados" << endl;
    cout << "[S] Imprime em SAC" << endl;
    cout << "[F] Fim" << endl;
    cout << "> ";
    cin >> c;
    c = (c >= 'a' && c <= 'z') ? c + 'A' - 'a' : c;
    return c;
}
