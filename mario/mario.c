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


    for ( int i = 0; i < 8; i++)
        printf("#\n");
}
