#include <iostream>
#include <string>

using namespace std;

int main() {
    string programas[4] = {"gimp", "inkscape", "natron", "blender"};

    for(string i : programas) {
        cout << i << "\n";
    }
    
    cout << "O tamanho do array e : " << sizeof(programas) / sizeof(string);

    cout << "\n";
    return 0;
}