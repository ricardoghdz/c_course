#include<stdio.h>
#include<cs50.h>

int arr[10] = {0,1,2,3,4,5,6,7,8,9};
int arr_length = 10;

int binary_search(int *array, int value, int low, int high);

int main(void) {

    printf("Enter a digit: ");
    int digit = get_int();
    int index = binary_search(arr, digit, 0, arr_length - 1);
    if(index >= 0) {
        printf("%i was found in index %i\n", digit, index);
    }
    else {
        printf("%i was not found\n", digit);
    }
}

int binary_search(int *array, int value, int low, int high){
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
