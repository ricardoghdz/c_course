/*Implementa un programa que muestre una piramide doble como la que se muestra abajo.

$ ./mario
Altura: 4
   #  #
  ##  ##
 ###  ###
####  ####*/

#include <iostream>

using namespace std;

int limite_piramide ();
void imp_piramide();
void imp_espacios (int altitud,int nivel);
void imp_gatitos(int nivel);

int main(){
    imp_piramide();
}

int limite_piramide(){
    int a;
    cout << "Ingresa el tamanio limite de la piramide: ";
    cin >> a;
    while(a < 0 || a >= 20){
        cout << "El numero debe ser positivo y menor a 20, ingrese de nuevo: ";
        cin >> a;
    }
    return a;
}

void imp_piramide(){
     int limit;
    limit = limite_piramide();
    for(int i=0;i<limit;i++){
        imp_espacios(limit,i);
        imp_gatitos(i);
        cout << "  ";
        imp_gatitos(i);
        cout << endl;
    }
}

void imp_espacios (int altitud, int nivel){
    for(int k = altitud-nivel-1;k > 0;k--){
            cout << " ";
        }
}

void imp_gatitos (int nivel){
    for(int l = 0;l < nivel+1;l++){
            cout << "#";
        }
}



