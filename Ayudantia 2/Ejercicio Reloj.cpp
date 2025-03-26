#include <iostream>
using namespace std;

int main()
{
    int hora;
    cout<<"ingrese hora enformato hhmm"<<endl;
    cin>>hora;
   
    int delta;
    cout<<"ingrese delta"<<endl;
    cin>>delta;
   
    int horas = hora / 100;
    int minutos = hora % 100;
   
    int minutos_sumados = minutos + delta;
    int horas_nuevo = horas + (minutos_sumados/60);
    int minutos_nuevo = minutos_sumados % 60;
   if (horas_nuevo>=24){
       horas_nuevo= horas_nuevo%24;
   }
    int hora_nueva = (horas_nuevo * 100) + minutos_nuevo;
    cout<<"la hora nueva es: "<<horas_nuevo <<":"<<minutos_nuevo <<endl;
    cout<<"la hora nueva es: "<<hora_nueva <<endl;
    
    return 0;
}