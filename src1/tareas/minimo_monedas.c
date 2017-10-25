/*Implementa un programa que muestre el numero minimo de monedas necesarias para darle el cambio a un usuario.

$ ./minimo_monedas
Hola!  Cuanto cambio te debo?O hai!
0.41
4*/
#include "stdio.h"
#include "cs50.h"

int main(void){
    float cambio;
    int monedas,acumu;
    printf("Hola, Cuanto cambio te debo? ");
    cambio = get_float();
    while(cambio < 0){
        printf("La cantidad debe ser positiva, ingrese de nuevo le cambio: ");
        cambio = get_float();
    }
    acumu=cambio*100;
    printf("Las monedas minimas son %i",monedas);
}