#include <iostream>
using namespace std;

int main ( )
{
    int numeroJugado, numeroGanador;
    cin >> numeroJugado >> numeroGanador;
    if(numeroJugado == numeroGanador){
      cout << "Premio Mayor" << endl;
    }else if(numeroJugado/100 == numeroGanador/100 || numeroJugado%100 == numeroGanador%100){
      cout << "Premio Par" << endl;
    }else if(numeroJugado%10 && numeroGanador%10){
      cout << "Precio Terminacion" << endl;
    }else{
      cout << "nada" << endl;
    }
    
    return 0;
}