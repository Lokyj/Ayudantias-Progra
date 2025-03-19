#include <iostream>
using namespace std;

int main()
{
    int saldo = 30000; 
    int opt;
    int opt2; 
    int cuenta=0;  
    cout<< "Menu: "<< endl;
    cout << "1 = Fideos $10000  -   2 = Arroz $15000  -   3 = Pure $ 20000 "<< endl;
    cin>>opt;
    if (opt==1){
        cuenta = cuenta + 10000;
    }
    else if (opt==2){
        cuenta = cuenta + 15000;
    } else if (opt==3){
        cuenta = cuenta + 20000;
    }else{
        cout<< "opcion invalida"<< endl;
    }
    cout<< "Bebidas: "<< endl;
    cout << "1 = Pepsi $8000  -   2 = CocaCola $15000  -   3 = Kem $ 4000 "<< endl;
    cin>>opt2;
    if (opt2==1){
        cuenta = cuenta + 8000;
    }
    else if (opt2==2){
        cuenta = cuenta + 15000;
    } 
    else if (opt2==3){
        cuenta = cuenta + 4000;
    }else{
        cout<< "opcion invalida"<<endl;
    }
    if (saldo<cuenta){
        cout << "saldo insuficiente";
    }else{
        saldo = saldo-cuenta;
        cout << "saldo restante: "<< saldo;
    }
    return 0;
}
