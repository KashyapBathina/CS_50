#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;
    do
    {
        n = get_int("How tall is the pyramid?  ");
    }
    while ( n > 8 || n < 1);

void answer(int n);
    for ( int i = 0; i < n; i++)
        printf("#\n");
}
