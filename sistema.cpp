#include <iostream>
#include <string>

using namespace std;

double resultado(double numero1, double numero2, double numero3, double numero4) {
    return (numero1 + numero2 + numero3 + numero4) / 4;
}

int main () {
    string nome;
    double numero1, numero2, numero3, numero4, media;


    cout << "Digite o seu nome";
    cin >> nome;

    cout << "Digite o numero 1: ";
    cin >> numero1;

    cout << "Digite o numero 2: ";
    cin >> numero2;

    cout << "Digite o numero 3: ";
    cin >> numero3;

    cout << "Digite o numero 4: ";
    cin >> numero4;

    media = resultado(numero1, numero2, numero3, numero4);

    cout << nome << " o resultado e " << media;

    return 0;
}