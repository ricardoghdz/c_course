#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Nombre: ");
    string s = get_string();
    if (s != NULL)
    {
        for (int i = 0, len = strlen(s); i < len; i++)
        {
            printf("%c\n", s[i]);
        }
    }
}
