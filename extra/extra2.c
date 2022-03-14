#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string("name: ");
    int Sentences = 0;
    for (int i = 0; i < strlen(name); i++)
        {
            if (name[i] == '.' || name[i] == '?' || name[i] == '!')
            Sentences ++;
        }
    printf("%i\n", Sentences);
}
