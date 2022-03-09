#include <stdio.h>
#include <cs50.h>

void number(void);

int main(void)

{
    int i = get_int("How tall is the pyramid?  ");
    printf("Height = %i\n", i);

    if (i > 8 || i <1)
    {
        int answer = get_int("How tall is the pyramid?  ");
    printf("Height = %i\n", i);
    }
}
