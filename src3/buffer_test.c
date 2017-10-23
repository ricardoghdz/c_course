#include<stdio.h>
#include<cs50.h>
#include<string.h>

int SIZE_OF_INT_STR = 12;

int main(void) {
    int short_num = 3;
    int long_num = -234567890;

    int length = 2;

    string str_arr = (string) malloc((2 + length * SIZE_OF_INT_STR) * sizeof(char));

    strcat(str_arr, "{");
    char buffer[SIZE_OF_INT_STR];
    sprintf(buffer, "%i", short_num);
    printf("str: %s, len: %lo\n", buffer, strlen(buffer));
    strcat(str_arr, buffer);
    strcat(str_arr, ", ");
    sprintf(buffer, "%i", long_num);
    printf("str: %s, len: %lo\n", buffer, strlen(buffer));
    strcat(str_arr, buffer);
    strcat(str_arr, "}\n");
    printf("array: %slen: %lu\n", str_arr, strlen(str_arr));
}
