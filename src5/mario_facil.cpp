/*Implementa un programa que imprima una media piramide de una altura especificada por el usuario, como abajo:

$ ./mario_facil
Altura: 5
    ##
   ###
  ####
 #####
######

$ ./mario_facil
Altura: 3
  ##
 ###
####*/
#include <iostream>

using namespace std;

int main(){
    int limit;
    cout << "Ingresa el tamanio limite de la piramide: ";
    cin >> limit;
    while(limit < 0 || limit >= 20){
        cout << "El numero debe ser positivo y menor a 20, ingrese de nuevo: ";
        cin >> limit;
    }
    for(int j = 0;j < limit;j++){
        for(int k = limit-j-1;k > 0;k--){
            cout << " ";
        }
        for(int l = 0;l < j+2;l++){
            cout << "#";
        }
        cout << endl;
    }
}