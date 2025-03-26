#include <iostream>
using namespace std;

int main(){

    int numero;
    int inverso = 0;
    int num_original;
    cout << "Ingrese un numero: ";
    cin >> numero;
    num_original = numero;
    while(numero > 0){
        inverso = inverso * 10 + numero % 10;
        numero = numero / 10;
    }
    cout << "El numero invertido es: " << inverso << endl;
    if (inverso == num_original){
        cout << "El numero es palindromo" << endl;
    }else{
        cout << "El numero no es palindromo" << endl;
    }
    
    return 0;
}