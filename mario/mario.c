#include <stdio.h>
#include <cs50.h>

void number(void);

int main(void)

{
    int i = get_int("How tall is the pyramid?  ");
    printf("Height = %i\n", i);

    int i;
    do
    {
        i = get_int("How tall is the pyramid?  ");
    }
    while ( i > 8 || i < 1)

}
