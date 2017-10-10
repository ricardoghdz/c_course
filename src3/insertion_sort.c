#include<stdio.h>
#include<cs50.h>
#include<string.h>

int SIZE_OF_INT_STR = 13;

void print_array(int array[], int length);
void insertion_sort(int array[], int length);


int main(void) {
    int sorted_arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int scrambled_arr[10] = {0,2,4,6,8,1,3,5,7,9};
    int almost_sorted_arr[10] = {0,1,2,3,4,5,6,7,9,8};
    int worst_case_arr[10] = {9,8,7,6,5,4,3,2,1,0};

    insertion_sort(sorted_arr, 10);
    insertion_sort(scrambled_arr, 10);
    insertion_sort(almost_sorted_arr, 10);
    insertion_sort(worst_case_arr, 10);
}

void insertion_sort(int array[], int length) {
    printf("before sorting: ");
    print_array(array, 10);

    for(int i = 1; i < length; i++) {
        int value = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] >  value) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = value;
    }

    printf("after sorting: ");
    print_array(array, 10);
}

void print_array(int array[], int length) {
    //creates buffer
    char buffer[SIZE_OF_INT_STR];
    //creates a buffer for the array of ints string
    string str_arr = (string) malloc((3 + length * SIZE_OF_INT_STR) * sizeof(char));
    strcat(str_arr, "{");
    for(int i = 0; i < length; i++) {
        sprintf(buffer, "%i", array[i]);
        strcat(str_arr, buffer);
        if(i != length - 1)
            strcat(str_arr, ", ");
    }
    strcat(str_arr, "}\n");
    printf("%s", str_arr);
}
