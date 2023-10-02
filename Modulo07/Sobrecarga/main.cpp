#include <iostream>
#include <string>
using namespace std;

class P {
};

class X {
    public:
    virtual void x(int i) {
        cout << "Implementação Método x(int) classe X com parametro " << i << endl;
    }
    virtual void x(P* p) {
        cout << "Implementação Método x(P*) classe X com parametro " << p << endl;
    }
};

class Y: public X {
    public:
    virtual void x(int i) {
        cout << "Implementação Método x(int) classe Y com parametro " << i << endl;
    }
    virtual void x(string s) {
        cout << "Implementação Método x(string) classe Y com parametro " << s << endl;
    }
};

int main() {
    Y y;

    y.x(10);
    y.X::x(new P());
    y.x("Fulano");
}