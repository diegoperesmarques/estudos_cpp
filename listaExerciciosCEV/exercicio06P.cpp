#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int numero, dobro, triplo;
    double raizQuadrada;

    cout << "Digite um numero: ";
    cin >> numero;

    dobro = numero * 2;
    triplo = numero * 3;
    raizQuadrada = sqrt(numero);

    cout << "O dobro de " << numero << " vale " << dobro << "\n";
    cout << "O triplo de " << numero << " vale " << triplo << "\n";
    cout << "A raiz quadrada de " << numero << " vale " << raizQuadrada;

    cout << "\n";
    return 0;

}