#include <iostream>

using namespace std;


int main() {
    int valor1, valor2, valor3;

    valor1 = 1.6 + 2.5;
    cout << "valor1: " << valor1 << endl;

    valor2 = int(1.6) + int(2.5);
    cout << "valor2: " << valor2 << endl;

    valor3 = int(1.6 + 2.5);
    cout << "valor3: " << valor3 << endl;
    return 0;
}