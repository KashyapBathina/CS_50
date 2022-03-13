#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("name: ");

    for (int i = 0; i < strlen (name); i++)
    {
        if (name[i] == '.')
        {
            i ++;
        }
    }
    printf("%i\n", i);
}
