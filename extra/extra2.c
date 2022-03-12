#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("name: ");

    int i = 0;
    while (name[i] != '\0')
    {
        i ++;
    }
    printf("%i\n", i);
}