#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    string text = get_string("Text: ");

    // letters
    int Letters = 0;
    char c = text[i]
    for (int i = 0; i < strlen(c); i++)
    {
        char c = text[i]
        if (isalpha(c) != 0)
        Letters++;
    }
    printf("%i letters\n", Letters);

    // sentences
    int Sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        Sentences ++;
    }
    printf("%i sentences\n", Sentences);
}