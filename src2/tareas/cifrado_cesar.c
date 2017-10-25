/*Implemente el cifrado de Cesar, como se muestra abajo.
atoi convertir de string a entero

$ ./cifrado_cesar 13 Validar que sea un numero y no otro caracter
mensaje inicial:  HELLO Esta palabra no cambia
mensaje cifrado: URYYB si es caracter minuscula convertir a mayuscula*/

#include "stdio.h"
#include "string.h"
#include "cs50.h"

int main(){
    int cif;
    string msj;
    printf("Introduce el cifrado Cesar: ");
    cif = get_int();
    printf("Introduce el mensaje: ");
    msj = get_string();
    while(cif >= 0){
        for(int i = 0,lm = strlen(msj);i<lm;i++){

        }
    }
}