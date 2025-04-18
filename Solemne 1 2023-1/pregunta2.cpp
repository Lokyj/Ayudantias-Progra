#include <iostream>
using namespace std;

int main ( )
{
    int numeroPrestaciones, montoPrestacion, totalBonificaciones = 0;
    int deducible = 20000;
    float bonificacion,bonificacionDecimal;
    
    cout << "Bonificacion de Isapre/Fonasa: ";
    cin >> bonificacion;
    cout << "Numero de prestaciones: ";
    cin >> numeroPrestaciones;

    
    bonificacionDecimal  = bonificacion/100;
    
    
    for(int i = 0; i < numeroPrestaciones; i++){
      int costo_bono =0;
      cout << "Monto de prestacion "<< i+1 << ": ";
      cin >> montoPrestacion;
      //descuento isapre
      costo_bono += montoPrestacion*(1-bonificacionDecimal); 
      cout<<"--> isapre: "<<costo_bono<<endl;

      //descuento seguro
      costo_bono = costo_bono * 0.5; 
      cout<<"--> seguro: "<<costo_bono<<endl;

      //descuento deducible
      costo_bono = costo_bono - deducible;
      if (costo_bono < 0){
        deducible = (costo_bono)*-1;  //nuevo deducible (con el resto)  
        costo_bono = 0;
      }
      if (costo_bono > 0){
        deducible =0;
      }
      cout<<"--> new deducible: "<<deducible<<endl; 
      totalBonificaciones += costo_bono;
    }
    cout<<"Total de Bonificacion: "<<totalBonificaciones<<endl;
    return 0;
}