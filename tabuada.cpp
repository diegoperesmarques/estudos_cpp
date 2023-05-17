#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero;

    cout << "Digite o numero da tabuada desejada: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++) {
        cout << numero << "x" << i << "=" << (numero * i);
        cout << "\n";
    }

    cout << "";

    return 0;
}