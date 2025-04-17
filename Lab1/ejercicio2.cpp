#include <iostream>
using namespace std;
int main() {
    int tarifa, pago;
    cout << "ingrese la tarifa cobrada: ";
    cin >> tarifa;
    cout << "ingrese el monto entregado por el pasajero: ";
    cin >> pago;
    if (tarifa <= 0 || pago <= 0) {
        cout << "ambos valores deben ser mayores a 0." << endl;
        return 1;
    }
    if (pago < tarifa) {
        cout << "el monto entregado es menor que la tarifa." << endl;
        return 1;
    }
    int vuelto = pago - tarifa;
    cout << "vuelto total: $" << vuelto << " pesos." << endl;
    int b5000 = vuelto / 5000;
    vuelto = vuelto % 5000;

    int b2000 = vuelto / 2000;
    vuelto = vuelto % 2000;

    int b1000 = vuelto / 1000;
    vuelto = vuelto % 1000;

    int m500 = vuelto / 500;
    vuelto = vuelto % 500;

    int m100 = vuelto / 100;
    vuelto = vuelto % 100;

    int m50 = vuelto / 50;
    vuelto = vuelto % 50;

    if (b5000 > 0) cout << b5000 << " de $5000" << endl;
    if (b2000 > 0) cout << b2000 << " de $2000" << endl;
    if (b1000 > 0) cout << b1000 << " de $1000" << endl;
    if (m500 > 0)  cout << m500 << " de $500" << endl;
    if (m100 > 0)  cout << m100 << " de $100" << endl;
    if (m50 > 0)   cout << m50 << " de $50" << endl;

    return 0;
}
