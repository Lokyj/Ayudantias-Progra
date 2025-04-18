#include <iostream>
using namespace std;

int main ( )
{
    int ingresoTotal,numeroPersonas;
	cout<<"Ingreso total: ";
    cin >> ingresoTotal;
	cout<<"Numero de personas: ";
	cin>> numeroPersonas;
    int ipe = ingresoTotal / (numeroPersonas * 0.18);
    
    if(ipe >= 0 && ipe <= 217000){
      cout << "E" << endl;
    }else if(ipe > 217001 && ipe <= 379000){
      cout << "D" << endl;
    }else if(ipe > 379001 && ipe <= 681000){
      cout << "C2" << endl;
    }else if(ipe > 681001 && ipe <= 1153000){
      cout << "C1" << endl;
    }else if(ipe > 1153001 && ipe <= 2011000){
      cout << "B" << endl;
    }else if(ipe > 2011001){
      cout << "A" << endl;
    }
    return 0;
}