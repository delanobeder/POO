#include <iostream>
#include "Liger.h"

using namespace std;

int main() {

    Liger lg(100);

    float weight = lg.getWeight();

    cout << weight << endl;
    
    return 0;
}

