#include <stdio.h>
#include <cs50.h>

void number(void);

int main(void)

{
    int n;
    do
    {
        n = get_int("How tall is the pyramid?  ");
    }
    while ( n > 8 || n < 1);

    if(n < 8)
    {
        printf("Hello\n");
    }

}
