#include <stdio.h>

void add(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    add(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void add(int *a, int *b)
{
    
}