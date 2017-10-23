//pedirle al usuario un numero y determinar si se encuentra en el arraglo de abajo.  ordenar el arreglo primero
//y buscar por busqueda binaria.

#include "stdio.h"
#include "ctype.h"
#include "cs50.h"

const int LEN = 100;
int nums[LEN] = {11195,49145,6315,57046,37834,51498,45363,24167,57272,48830,29232,23181,48006,17053,25840,50907,55380,37734,46893,5439,29872,7205,35732,25604,37262,62853,56866,10694,18055,17063,60561,28568,51738,8363,5387,61645,1676,10106,25046,10140,34690,57465,28220,17295,20551,50468,7037,50531,46215,14328,49924,26982,42521,60945,32926,45052,28579,39865,37785,41459,30371,41434,9063,62964,9461,29273,21271,62428,23473,26096,6637,62592,64527,37746,56748,9822,59582,42680,4185,62586,63324,51481,52767,37437,18519,63081,37976,28629,24604,60516,1880,50388,47389,38729,27911,42083,48939,4523,3492,50745};
int contador=0;

void bubble_sort(int array[], int length);
bool bubble_pass(int array[], int pass);
void swap(int array[], int index0, int index1);
void print_array(int array[], int length);
int binary_search(int *array, int value, int low, int high);

int main(void){
    /*for(int i = 0; i < 1200; i++){
        printf("%i: %i\n",i,nums[i]);
    }*/
/*1 Pedir numero a buscar
 2 ordenar el arreglo
 3 hacer busqueda binaria
 4 imprimir la posicion del valor en caso de esatr en el arreglo*/
 int num;
 printf("Ingresa el numero a buscar: ");
 num = get_int();
 bubble_sort(nums,LEN);
 int posicion = binary_search(nums,num,0,LEN-1);
 printf("%i esta en la posicion %i, busco %i veces\n",num,posicion,contador);
}

void bubble_sort(int array[], int length) {

    printf("before sorting: ");
    print_array(array, length);

    bool sorted = false;
    int pass = length;
    while(!sorted) {
        sorted = bubble_pass(array, pass);
        if(sorted)
            break;
        pass--;
    }

    printf("after sorting: ");
    print_array(array, length);
}

bool bubble_pass(int array[], int pass) {
    int num_swaps = 0;
    for(int i = 0; i < pass - 1; i++) {
        if(array[i] > array[i + 1]) {
            swap(array, i, i + 1);
            num_swaps++;
        }
    }
    return num_swaps == 0;
}

void swap(int array[], int index0, int index1){
    int a = array[index0];
    array[index0] = array[index1];
    array[index1] = a;
}

void print_array(int array[], int length) {
    printf("{");
    for(int i = 0; i < length; i++) {
        printf("%i", array[i]);
        if(i != length - 1)
            printf(", ");
    }
    printf("}\n");
}
int binary_search(int *array, int value, int low, int high){
    contador++;
    if(high < low)
        return -1;
    int mid = (low + high) / 2;
    if(array[mid] > value)
        return binary_search(array, value, low, mid -1);
    else if(array[mid] < value)
        return binary_search(array, value, mid + 1, high); //Vuelve a entrar a la afunción (a llamarla)
    else
        return mid;
}