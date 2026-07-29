#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <vector>
using namespace std;

namespace ed {

    template <class T>
    class Queue {
    public:
        Queue(int maxSize) {
            this->maxSize = maxSize;
        }

        // métodos da classe

        bool empty() {
            return elements.empty();
        }

        bool full() {
            return this->size() == maxSize;
        }

        bool add(T v) {
            bool ok = !full();
            if (ok) {
                elements.push_back(v);
            }
            return ok;
        }

        T remove() {
            T v;
            bool ok = !empty();
            if (ok) {
                v = elements.front();
                elements.erase(elements.begin());
            }
            return v;
        }

        int size() {
            return elements.size();
        }

        void imprime() {
            cout << "[";
            for (unsigned int i = 0; i < elements.size(); i++) {
                cout << " " << elements[i];
            }
            cout << " ] Size => " << size() << ", maxSize => " << maxSize << endl;
        }

    private:
        vector<T> elements;
        int maxSize;
    };

}

#endif /* QUEUE_H */