#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0;

    cout << "Ingresa un numero: ";
    cin >> numero;
    if (numero < 0) {
        numero = numero*-1; 
    }
    if (numero == 0) {
        contador = 1;
    }
    while (numero > 0) {
        numero /= 10; 
        contador++;
    }
    cout << "El numero tiene " << contador << " digitos." << endl;
    return 0;
}