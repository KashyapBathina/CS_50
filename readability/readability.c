#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    // promt
    string text = get_string("Text: ");

    // letters
    int Letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        char c = text[i];
        if (isalpha(c) != 0)
        {
        Letters++;
        }
    }
    printf("%i letters\n", Letters);

    // words
    int Words = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == " ")
        {
            Words++;
        }
    }
    return Words;
    Words = Words + 1;
    printf("%i words\n", Words)

    // sentences
    int Sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
         Sentences ++;
        }
    }
    printf("%i sentences\n", Sentences);
}