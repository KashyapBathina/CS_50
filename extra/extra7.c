#include <stdio.h>


int main(void)
{
    int x = 1;
    int y = 2;
    int *p = &x;
    printf("x is %i, y is %i\n", x, y);
    *p = x + 2;
    printf("x is %i, y is %i\n", x, y);
}

