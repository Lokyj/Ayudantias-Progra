#include <iostream>
using namespace std;


bool esPrimo(int numero) {
    if (numero <= 1) return false; //0 y 1 no son primos
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false; //si encuentra un divisor, no es primo
        }
    }
    return true; //si no se encontró ningún divisor, es primo
}

int multiplicar(int a, int b) {
    int multiplicacion = a*b;
    
    return multiplicacion;
}


void mostrarMenu() {
    cout << "===== MENÚ DE PRODUCTOS =====" << endl;
    cout << "1. Hamburguesa - $3500" << endl;
    cout << "2. Pizza - $4500" << endl;
    cout << "3. Ensalada - $3000" << endl;
    cout << "4. Bebida - $1200" << endl;
    cout << "5. Salir" << endl;
    cout << "=============================" << endl;
}

void sumarPorValor(int x) {
    x += 1;
}

void sumarPorReferencia(int& x) {
    x += 1;
}

int main(){
    cout << "=============================" << endl;
    cout << "Funcion mostrarMenu()" << endl;
    cout << "=============================" << endl;
    mostrarMenu(); 
    cout << "=============================" << endl;
    cout << "Funcion multiplicar()" << endl;
    cout << "=============================" << endl;
    int a,b;
    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;
    int resultado = multiplicar(a, b);
    cout << "La multiplicacion de " << a << " y " << b << " es: " << resultado << endl;
    cout << "=============================" << endl;
    cout << "Funcion esPrimo()" << endl;
    cout << "=============================" << endl;

    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    if (esPrimo(numero)) {
        cout << numero << " es primo." << endl;
    } else {
        cout << numero << " no es primo." << endl;
    }
    cout << "=============================" << endl;
    cout << "Funciones sumarPorValor() y sumarPorReferencia()" << endl;
    cout << "=============================" << endl;

    int numeroSuma;
    cout << "Ingresa un numero: ";
    cin >> numeroSuma;
    cout << "Valor original: " << numeroSuma << endl;
    sumarPorValor(numeroSuma);
    cout << "Valor despues de sumarPorValor: " << numeroSuma << endl; 
    sumarPorReferencia(numeroSuma);
    cout << "Valor despues de sumarPorReferencia: " << numeroSuma << endl; 


    return 0;
}