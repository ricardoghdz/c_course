/*Implemente un programa que, dado el nombre de una persona, imprima las iniciales de la personas, como se muestra abajo.

$ ./iniciales_facil
Regulus Arcturus Black
RAB*/

#include "stdio.h"
#include "cs50.h"
#include "string.h"
#include "ctype.h"

int main(void){
    printf("Nombre: ");
    string nombre = get_string();
    for(int i = 0, n = strlen(nombre);i < n; i++){
        if(isupper(nombre[i])){
            printf("%c\n",nombre[i]);
        }
    }
}
