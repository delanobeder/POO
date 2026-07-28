#include "Triangulo.h"
#include "Equilatero.h"
#include "Retangulo.h"

int main() {

    Triangulo t1(5,4,3);
    Equilatero t2(3);
    Retangulo t3(3,4,5);

    cout << boolalpha;

    cout << "t1 > t2 " << (t1 > t2) << endl;
    cout << "t2 > t1 " << (t2 > t1) << endl;
    cout << "t2 > t3 " << (t2 > t3) << endl;
    cout << "t3 > t2 " << (t3 > t2) << endl;
    
    /* cout << t1 << endl;
    
    cout << t2 << endl;
    
    cout << t3 << endl;

    cout << boolalpha;

    cout << "t1 > t2 " << (t1 > t2) << endl;
    cout << "t1 >= t2 " << (t1 >= t2) << endl;
    cout << "t1 < t2 " << (t1 < t2) << endl;
    cout << "t1 <= t2 " << (t1 <= t2) << endl;
    cout << "t1 == t2 " << (t1 == t2) << endl;
    cout << "t1 != t2 " << (t1 != t2) << endl;

    cout << endl;

    cout << "t2 > t1 " << (t2 > t1) << endl;
    cout << "t2 >= t1 " << (t2 >= t1) << endl;
    cout << "t2 < t1 " << (t2 < t1) << endl;
    cout << "t2 <= t1 " << (t2 <= t1) << endl;
    cout << "t2 == t1 " << (t2 == t1) << endl;
    cout << "t2 != t1 " << (t2 != t1) << endl;
    
    cout << endl;

    cout << "t1 > t3 " << (t1 > t3) << endl;
    cout << "t1 >= t3 " << (t1 >= t3) << endl;
    cout << "t1 < t3 " << (t1 < t3) << endl;
    cout << "t1 <= t3 " << (t1 <= t3) << endl;
    cout << "t1 == t3 " << (t1 == t3) << endl;
    cout << "t1 != t3 " << (t1 != t3) << endl;

    cout << endl;

    cout << "t3 > t1 " << (t3 > t1) << endl;
    cout << "t3 >= t1 " << (t3 >= t1) << endl;
    cout << "t3 < t1 " << (t3 < t1) << endl;
    cout << "t3 <= t1 " << (t3 <= t1) << endl;
    cout << "t3 == t1 " << (t3 == t1) << endl;
    cout << "t3 != t1 " << (t3 != t1) << endl;

    cout << endl;

    cout << "t1 > t1 " << (t1 > t1) << endl;
    cout << "t1 >= t1 " << (t1 >= t1) << endl;
    cout << "t1 < t1 " << (t1 < t1) << endl;
    cout << "t1 <= t1 " << (t1 <= t1) << endl;
    cout << "t1 == t1 " << (t1 == t1) << endl;
    cout << "t1 != t1 " << (t1 != t1) << endl;

    cout << endl;

    cout << "t2 > t2 " << (t2 > t2) << endl;
    cout << "t2 >= t2 " << (t2 >= t2) << endl;
    cout << "t2 < t2 " << (t2 < t2) << endl;
    cout << "t2 <= t2 " << (t2 <= t2) << endl;
    cout << "t2 == t2 " << (t2 == t2) << endl;
    cout << "t2 != t2 " << (t2 != t2) << endl;

    cout << endl;

    cout << "t3 > t3 " << (t3 > t3) << endl;
    cout << "t3 >= t3 " << (t3 >= t3) << endl;
    cout << "t3 < t3 " << (t3 < t3) << endl;
    cout << "t3 <= t3 " << (t3 <= t3) << endl;
    cout << "t3 == t3 " << (t3 == t3) << endl;
    cout << "t3 != t3 " << (t3 != t3) << endl;
*/
    return 0;
}
