#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    // promt
    string text = get_string("Text: ");

    int i = strlen(text);
    int Letters = 0;
    int Sentences = 0;

    // letters
    for (int x = 0; x < i; i++)
    {
        char c = text[x];
        if (isalpha(c) != 0)
        {
        Letters++;
        }
    }
    printf("%i letters\n", Letters);

    // sentences
    for (int x = 0; x < i; x++)
    {
        if (text[x] == '.' || text[x] == '?' || text[x] == '!')
        Sentences ++;
    }
    printf("%i sentences\n", Sentences);
}