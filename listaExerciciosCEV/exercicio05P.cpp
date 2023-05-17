#include <iostream>
#include <string> 

using namespace std;

int main () {
    int numero, antecessor, sucessor; 

    cout << "Digite um numero: ";
    cin >> numero;

    antecessor = numero - 1;
    sucessor = numero + 1;

    cout << "Analisando o valor " << numero;
    cout << ", seu antecessor e " << antecessor;
    cout << " e o seu sucessor e " << sucessor;


    cout << "\n";
    return 0;

}