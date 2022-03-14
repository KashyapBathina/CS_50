#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    stir name = get_string("name: ");
    int letters = 0;
        if (isalpha(name) != 0)
        {
            letters++;
        }
    printf("%i\n", letters);
}
