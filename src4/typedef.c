#include<stdio.h>
#include<stdlib.h>

int main(void) {
    typedef char* string;
    string c = (string) malloc(10 * sizeof(char));
    c[0] = 'R';
    c[1] = '\0';

    printf("%s\n", c);
}