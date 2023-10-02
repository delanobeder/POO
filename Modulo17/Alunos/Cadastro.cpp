#include "Cadastro.h"

Cadastro::Cadastro(string nomeArquivo) :
nomeArquivo(nomeArquivo) {
}

Cadastro::~Cadastro() {
}

void Cadastro::grava(int nro) {
    int RA;
    double NP, NT;
    Aluno* a;

    ofstream ofs(nomeArquivo, ios::binary);

    for (int i = 0; i < nro; i++) {
        cout << "Digite RA, NP e NT: ";
        cin >> RA >> NP >> NT;
        a = new Aluno(RA, NP, NT);
        ofs.write(reinterpret_cast<char *> (a), sizeof (Aluno));
        cout << endl;
    }

    ofs.close();
}

void Cadastro::imprime() {

    Aluno a;

    ifstream ifs(nomeArquivo, ios::binary);

    if (ifs.is_open()) {
        ifs.read(reinterpret_cast<char *> (&a), sizeof (Aluno));

        while (ifs.good()) {
            a.imprime();
            ifs.read(reinterpret_cast<char *> (&a), sizeof (Aluno));
        }
    }

    ifs.close();
}

void Cadastro::imprimeRA(int RA) {

    Aluno aluno;
    bool achou = false;
    
    ifstream ifs(nomeArquivo, ios::binary);

    if (ifs.is_open()) {
        while (!ifs.eof() && !achou) {
            ifs.read(reinterpret_cast<char *> (&aluno), sizeof (Aluno));
            achou = (aluno.getRA() == RA);
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

    ifstream ifs(nomeArquivo, ios::binary);

    if (ifs.is_open()) {
        ifs.seekg((pos - 1) * sizeof (Aluno));
        ifs.read(reinterpret_cast<char *> (&aluno), sizeof (Aluno));
        if (ifs.good()) {
            aluno.imprime();
        } else {
            cout << "Aluno não encontrado" << endl;
        }
    }

    ifs.close();
}

void Cadastro::leitura(vector<Aluno>& alunos) {
    Aluno a;

    ifstream ifs(nomeArquivo, ios::binary);

    if (ifs.is_open()) {
        ifs.read(reinterpret_cast<char *> (&a), sizeof (Aluno));

        while (ifs.good()) {
            alunos.push_back(a);
            ifs.read(reinterpret_cast<char *> (&a), sizeof (Aluno));
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
    return (toupper(c));
}
