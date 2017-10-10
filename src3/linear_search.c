#include<stdio.h>
#include<cs50.h>

int arr[10]  = {0,2,4,6,8,9,7,5,3,1};
int arr_length = 10;

int guess_number();
bool is_number(int guess);

int main(void) {
    int digit = guess_number();
    if(is_number(digit)) {
        printf("%i was found\n", digit);
    }
    else {
        printf("%i was not found\n", digit);
    }
}

int guess_number() {
    printf("Pick a decimal digit: ");
    return get_int();
}

bool is_number(int digit) {


    for(int i = 0; i < arr_length; i++) {
        if(arr[i] == digit) {
            return true;
        }
    }
    return false;
}
