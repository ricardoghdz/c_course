#include<stdio.h>
#include<cs50.h>

int guess_number();
bool is_number(int guess);

void bubble_sort(int array[], int length);
bool bubble_pass(int array[], int pass);
void swap(int array[], int index0, int index1);
void print_array(int array[], int length);

int main(void) {
    int sorted_arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int scrambled_arr[10] = {0,2,4,6,8,1,3,5,7,9};
    int almost_sorted_arr[10] = {0,1,2,3,4,5,6,7,9,8};
    int worst_case_arr[10] = {9,8,7,6,5,4,3,2,1,0};


    bubble_sort(sorted_arr, 10);

    bubble_sort(scrambled_arr, 10);

    bubble_sort(almost_sorted_arr, 10);

    bubble_sort(worst_case_arr, 10);

}

void bubble_sort(int array[], int length) {

    printf("before sorting: ");
    print_array(array, 10);

    bool sorted = false;
    int pass = length;
    while(!sorted) {
        sorted = bubble_pass(array, pass);
        if(sorted)
            break;
        pass--;
    }

    printf("after sorting: ");
    print_array(array, 10);
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