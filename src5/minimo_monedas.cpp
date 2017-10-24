/*Implementa un programa que muestre el numero minimo de monedas necesarias para darle el cambio a un usuario.

$ ./minimo_monedas
Hola!  Cuanto cambio te debo?O hai!
0.41
4*/
#include <iostream>

using namespace std;

int main(void){
    float cambio;
    int monedas,acumu;
    cout << "Hola, Cuanto cambio te debo? ";
    cin >> cambio;
    while(cambio < 0){
        cout << "La cantidad debe ser positiva, ingrese de nuevo le cambio: ";
        cin >> cambio;
    }
    acumu=cambio*100;
    cout << "Las monedas minimas son " << monedas << endl;
}