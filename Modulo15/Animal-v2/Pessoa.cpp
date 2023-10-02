#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade) :
nome(nome), idade(idade) {
}

Pessoa::~Pessoa() {
}

string Pessoa::getNome() const {
    return nome;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

int Pessoa::getIdade() const {
    return idade;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

bool Pessoa::adiciona(AnimalDomestico* a) {
    animais.push_back(a);
    a->setDono(this);
    return true;
}

bool Pessoa::remove(string nome) {
    bool achou = false;
    for (unsigned long int i = 0; !achou && i < animais.size(); i++) {
        AnimalDomestico* animal = animais[i];
        if (animal->getNome() == nome) {
            // Remove o animal na posição "i"
            animais.erase(animais.begin() + i);
            animal->setDono(NULL);
            achou = true;
        }
    }
    return achou;
}

void Pessoa::imprime(Criterio opcao) {
    cout << "========== Pessoa ==========" << endl;
    cout << "Nome:  " << nome << endl;
    cout << "Idade: " << idade << endl;
    if (animais.size() > 0) {
        vector<AnimalDomestico*> copia = animais;
        switch (opcao) {
            case NOME: {
                sort(copia.begin(), copia.end(), AnimalDomestico::compNome);
                break;
            }
            case PESO: {
                sort(copia.begin(), copia.end(), AnimalDomestico::compPeso);
                break;
            }
            case ESPECIE: {
                sort(copia.begin(), copia.end(), AnimalDomestico::compEspecie);
                break;
            }
            case NOSORTED: {
                // Não faz nada
                break;
            }
        }
        for (unsigned long int i = 0; i < copia.size(); i++) {
            cout << "----------------------------" << endl;
            copia[i]->imprime();
        }
        cout << "----------------------------" << endl;
    }
}
