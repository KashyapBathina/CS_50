#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("name: ");

    int punctuation = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == '.')
        {
            punctuation++;
        }
    }
    printf("%i\n", punctuation);
}
