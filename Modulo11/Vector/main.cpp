
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <algorithm>

using namespace std;

void remove(vector<int>& v, int el) {

    unsigned int i = 0;
    while (v[i] != el && i < v.size()) {
        i++;
    }

    if (i != v.size()) {
        // encontrou na posicao i
        v.erase(v.begin() + i); // remove o i-esimo elemento
    }

    /* 
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), el);

    if (it != v.end()) {
        v.erase(it);
    } 
    */
}

bool encontra(vector<int> v, int el) {

    unsigned int i = 0;
    while (i < v.size() && v[i] != el) {
        i++;
    }

    return i != v.size();

    /* 
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), el);

    return it != v.end();
    */
}

void imprime(vector<int> v) {
    for (long unsigned int i = 1; i <= v.size(); i++) {
        cout << setw(2) << setfill('0') << v[i - 1];
        if (i % 10 == 0 || i == v.size()) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {

    srand(time(NULL));

    /* 
    vector<int> vetor;
 
    for (int i = 0; i < 50; i++) {
        int segredo;
        do {
            segredo = rand() % 50 + 1;
        } while (encontra(vetor, segredo));
        vetor.push_back(segredo);
    }
    */

    cout << endl;

    vector<int> vetor(50);

    for (int i = 0; i < 50; i++) {
        int segredo;
        do {
            segredo = rand() % 50 + 1;
        } while (encontra(vetor, segredo));
        vetor[i] = segredo;
    }

    imprime(vetor);

    sort(vetor.begin(), vetor.end());

    imprime(vetor);

    vetor.erase(vetor.begin() + 22); // remove o 23o elemento

    remove(vetor, 7); 
    remove(vetor, 38);
    remove(vetor, 5);
    remove(vetor, 17);

    imprime(vetor);

    // remove os últimos 5 elementos

    for (int i = 0; i < 5; i++) {
        vetor.pop_back();
    }

    imprime(vetor);

    // remove os últimos 10 elementos

    vetor.erase(vetor.end() - 10, vetor.end());

    imprime(vetor);

    return 0;
}
