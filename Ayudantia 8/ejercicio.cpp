#include <iostream>
#include <cstdlib> // para rand() y srand()
#include <ctime> // para time()
// ambas librerias son equivalentes a stdlib.h y time.h en C, respectivamente.
using namespace std;

void generaM(int matriz[10][10]) {
    srand(time(NULL)); // inicializa el generador de números aleatorios
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 9 + 1; // genera numeros entre 1 y 9. Si se utilizara rand() % 10, se incluiria el 0.
        }
    }
}

void imprimeM(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

bool consultaM(int matriz[10][10], int fila, int columna) {
    if (fila < 0 || fila >= 10 || columna < 0 || columna >= 10) {
        cout << "fila o columna fuera de los limites." << endl;
        return false; 
    }
    if(matriz[fila][columna] == 5) {
        cout << "bomba" << endl;
        return true; // la posicion tiene una bomba
    } else{
        return false; // la posicion no es una bomba
    }
}

void cuentaM(int matriz[10][10]) {
    int contador = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (consultaM(matriz, i, j)) {  // se reutiliza la funcion consultaM para contar las bombas, como esta retorna un booleano, se puede usar directamente en la condicion del if
                contador++;
                cout << "bomba en la fila " << i << ", columna " << j << endl;
            }
        }
    }
    cout << "bombas totales: "<< contador << endl;
}

int main() {
    int matriz[10][10];
    generaM(matriz);
    imprimeM(matriz);

    int fila, columna;
    cout << "Ingrese la fila a consultar (0-9): ";
    cin >> fila;
      cout << "Ingrese la columna a consultar (0-9): ";
    cin>> columna;

    if (consultaM(matriz, fila, columna)) {
        cout << "el lugar seleccionado tiene una bomba" << endl;
    } else {
        cout << "el lugar seleccionado no tiene una bomba" << endl; // por el funcionamiento de consultaM, si se instroduce una fila o columna fuera de los límites, se imprime un mensaje y no se cuenta como bomba.
    }

    cuentaM(matriz);

    return 0;
}
