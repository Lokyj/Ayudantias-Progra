#include <iostream>
using namespace std;

int main() {
    int km, hora_inicio;
    int tarifa_base = 450;
    int primer_km = 330;
    int km_extra = 250;
    int total;

    cout << "ingrese la distancia en kilometros: ";
    cin >> km;

    if (km <= 0) {
        cout << "error: la distancia debe ser mayor a 0." << endl;
        return 1;
    }

    cout << "ingrese la hora de inicio (formato 24h, ej: 1430 para 2:30 pm): ";
    cin >> hora_inicio;

    int horas = hora_inicio / 100;
    int minutos = hora_inicio % 100;

    if (hora_inicio < 0 || hora_inicio > 2359 || minutos >= 60) {
        cout << "error: la hora ingresada no es valida." << endl;
        return 1;
    }

    if (km == 1){
        total = tarifa_base + primer_km;
    }else{
        total = tarifa_base + primer_km + (km - 1) * km_extra;
    }
    if ((hora_inicio >= 2200 && hora_inicio <= 2359) || (hora_inicio >= 0 && hora_inicio <= 600)) {
        total = total + (total * 0.10);
    } else if (hora_inicio > 600 && hora_inicio <= 1000) {
        total = total - (total * 0.20);
    }
    cout << "el total a cobrar es: $" << total << " pesos." << endl;
    return 0;
}