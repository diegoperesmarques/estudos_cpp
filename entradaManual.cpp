#include <iostream>
#include <string>

using namespace std;


int main() {
    int nota1, nota2, nota3, nota4;
    double resultado;
    string nome;

    cout << "Digite o seu nome: ";
    cin >> nome;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    cout << "Digite a quarta nota: ";
    cin >> nota4;

    resultado = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << nome << " o resultado e " << resultado;

    return 0;

}