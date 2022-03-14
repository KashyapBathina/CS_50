#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string("name: ");
    int i = strlen(name);
    for (int x = 0; x < i; i++)
    {
        int letters = 0;
            if (isalpha(name) != 0)
            {
                letters++;
            }
    }
    printf("%i\n", letters);
}
