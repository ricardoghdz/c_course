#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get line of text
    char *s = get_string();
    if (s == NULL) //S toma el valor de la posicionde memoria
    {
        return 1;
    }

    // print string, one character per line
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", *(s+i));// es igual que s[i]
    }

    int a = 5;
    int *p = &a;
    int *q = NULL;

    printf("%i\n",a);
    printf("%p\n",p);
    printf("%i\n",*p);
    printf("%p\n",q);
    printf("%i\n",*q);//Al acceder a memoria que no es mia
    printf("Hello world!");//No se ejecuta porque el programa se termina por el error anterior
}
