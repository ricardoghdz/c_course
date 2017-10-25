//Implemente el cifrado de Cesar, como se muestra abajo.

//$ ./cifrado_cesar 13
//mensaje inicial:  HELLO
//mensaje cifrado: URYYB
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void cifrar(string mensaje, int c);
void imprimir_caracter(char ch, int c);
int validar_numero(string num);

int main(int argc, string argv[]) {
    if(argc == 2) {
        int c = validar_numero(argv[1]);
        printf("mensaje inicial: ");
        string mensaje_inicial = get_string();
        cifrar(mensaje_inicial, c);
        return 0;
    }
    else {
        printf("Usage:  ./cifrado_cesar k\n");
        return 1;
    }
}

int validar_numero(string num) {
    bool isNum = true;
    for(int i = 0, n = strlen(num); i < n; i++) {
        if(!isdigit(num[i])) {
            isNum = false;
            break;
        }
    }
    if(isNum) {
        return atoi(num);
    }
    else {
        printf("%s is not a number, enter valid number: ", num);
        return get_int();
    }

}

void cifrar(string mensaje, int c) {
    printf("mensaje cifrado: ");
    for(int i = 0, n = strlen(mensaje); i < n; i++ ) {
        imprimir_caracter(mensaje[i], c);
    }
    printf("\n");
}

void imprimir_caracter(char ch, int c) {
    if(isalpha(ch) && isupper(ch)) {
        printf("%c", (((ch - 65) + c) % 26) + 65 );

    }
    else if(isalpha(ch) && islower(ch)) {
        printf("%c", (((ch - 97) + c) % 26) + 97 );
    }
    else {
        printf("%c", ch);
    }
}
