#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string input;
    getline(cin, input);  // Leer la línea completa de entrada

    istringstream stream(input);  // Crear un flujo de entrada desde la línea
    string nombre;
    int cantidadInstructores = 0;

    // Leer cada nombre separado por espacios
    while (stream >> nombre) {
        cantidadInstructores++;
    }

    // Imprimir el resultado
    cout <<cantidadInstructores << endl;

    return 0;
}
