#include <iostream>
using namespace std;

int main(){
    int numero;
    int num_original;
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> numero;
    num_original = numero;
    if(numero >= 1000 && numero <= 9999){
        int inverso = 0;
        inverso = inverso * 10 + numero % 10;
        numero = numero / 10;
        inverso = inverso * 10 + numero % 10;
        numero = numero / 10;
        inverso = inverso * 10 + numero % 10;
        numero = numero / 10;
        inverso = inverso * 10 + numero;

        cout << "El numero invertido es: " << inverso << endl;

        if (inverso == num_original){
            cout << "El numero es palindromo" << endl;
        }else{
            cout << "El numero no es palindromo" << endl;
        }
    }else{
        cout << "Numero invalido" << endl;
    }
    return 0;
}