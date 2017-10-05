/*Implementa un programa que reporte el uso de agua de un usuario que dura x minutos en la ducha expresado en botellas de agua.
$ ./botellas_agua
Minutos: 1
Botellas: 12

$ ./botellas_agua
Minutos: 10
Botellas: 120*/

#include "stdio.h"
#include "cs50.h"

int main(){
    int min;
    printf("Ingresa el numero de minutos que duraste en la ducha: ");
    min = get_int();
    while(min < 0){
        printf("Los minutos deben ser mayor a 0, ingresa otra vez el numero: ");
        min = get_int();
    }
    printf("Minutos: %i\nBotellas: %i\n",min,min*12);
}
