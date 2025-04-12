#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,primos=0;
    bool esprimo;
    cout<<"limite inferior: \n";
    cin>>a;
    cout<<"limite superior: \n";
    cin>>b;
    
    for (int i=a+1;i<b;i++){
        esprimo=true;
        if(i==1){
            esprimo=false;
        }
        if(i!=2 && i%2==0){
            esprimo=false;
        }
        for(int j=3;j<=sqrt(i);j++){  // usar sqrt optmiza el algoritmo pero no es necesario y puede ser reemplazado por i/2
            if(i%j==0){
                esprimo=false;
            }
        }
        if(esprimo){
            primos++;
        }
    }
    cout <<"numeros primos en medio: " <<primos<<endl;

    return 0;
}