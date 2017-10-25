// http://valgrind.org/docs/manual/quick-start.html#quick-start.prepare.

#include <stdlib.h>

void f(void)
{
    int *x = malloc(10 * sizeof(int));
    x[10] = 0;//El 10 no es accesile porque se asigna de 0 a 9
}

int main(void)
{
    f();
    return 0;
}
