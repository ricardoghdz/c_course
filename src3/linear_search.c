#include<stdio.h>
#include<cs50.h>
const int ARRAY_LENGTH = 10;

int arr[ARRAY_LENGTH]  = {0,2,4,6,8,9,7,5,3,1};

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


    for(int i = 0; i < ARRAY_LENGTH; i++) {
        if(arr[i] == digit) {
            return true;
        }
    }
    return false;
}
