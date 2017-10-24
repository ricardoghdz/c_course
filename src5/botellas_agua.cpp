/*Implementa un programa que reporte el uso de agua de un usuario que dura x minutos en la ducha expresado en botellas de agua.
$ ./botellas_agua
Minutos: 1
Botellas: 12

$ ./botellas_agua
Minutos: 10
Botellas: 120*/

#include <iostream>

using namespace std;

int main(){
    int min;
    cout<<"Ingresa el numero de minutos que duraste en la ducha: ";
    cin>>min;
    while(min < 0){
        cout<<"Los minutos deben ser mayor a 0, ingresa otra vez el numero: ";
        cin>>min;
    }
    cout<<"Minutos: "<< min <<" Botellas: "<<min*12<<endl;
}
