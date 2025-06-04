#include <iostream>
using namespace std;

int main() {
    int canciones[20];

    registrarReproducciones(canciones);

    buscarCancionesPares(canciones);

    float porcentaje = porcentajeCancionesNoEscuchadas(canciones);
    cout << "Porcentaje de canciones no escuchadas: " << porcentaje << "%" << endl;

    int indice, incremento;
    cout << "Ingrese índice de canción a incrementar: ";
    cin >> indice;
    cout << "Ingrese cantidad adicional: ";
    cin >> incremento;
    incrementarReproducciones(canciones, indice, incremento);

    int min, max;
    cout << "Ingrese mínimo y máximo del rango: ";
    cin >> min >> max;
    mostrarCancionesEnRango(canciones, min, max);

    mostrarTop3Canciones(canciones);

    return 0;
}