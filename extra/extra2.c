#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("name: ");

    int i = 0;
    if (name[i] == '.')
    {
        i ++;
    }
    printf("%i\n", i);
}
