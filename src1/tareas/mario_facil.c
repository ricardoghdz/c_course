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
#include "stdio.h"
#include "cs50.h"

int main(){
    int limit;
    printf("Ingresa el tamanio limite de la piramide: ");
    limit = get_int();
    while(limit < 0 || limit >= 20){
        printf("El numero debe ser positivo y menor a 20, ingrese de nuevo: ");
        limit = get_int();
    }
    for(int j = 0;j < limit;j++){
        for(int k = limit-j-1;k > 0;k--){
            printf(" ");
        }
        for(int l = 0;l < j+2;l++){
            printf("#");
        }
        printf("\n");
    }
}