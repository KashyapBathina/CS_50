#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string("name: ");

    int letters = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        if (isalpha(name))
        {
            letters++;
        }
    }
    printf("%i\n", letters);
}
