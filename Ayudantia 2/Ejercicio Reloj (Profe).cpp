#include <iostream>
using namespace std;
int main()
{
    int hhmm,hh,mm,delta,nuevosminutos;
    cout << "ingrese hora en formato hhmm"<<endl;
    cin>>hhmm;
    cout << "ingrese delta"<<endl;
    cin>>delta;
    hh = hhmm/100;
    mm = hhmm%100;
    cout <<hh << endl;
    cout << mm << endl;
    nuevosminutos = hh*60 + mm + delta;
    nuevosminutos = nuevosminutos % 1440;
    cout << "son las  "<< nuevosminutos/60 <<":" << nuevosminutos%60<<endl;
    return 0;
}