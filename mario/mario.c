#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int answer = get_int("How tall is the pyramid?  ");
    printf("Height = %i\n", answer);

    int n;
    do
    {
        n = get_int("How tall is the pyramid?  ");
    }
}