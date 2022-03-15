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
        if (text[i] == ' ')
        {
            Words++;
        }
    }
    Words = Words + 1;
    printf("%i Words\n", Words);


    // sentences
    int Sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
         Sentences ++;
        }
    }
    printf("%i Sentences\n", Sentences);

    // calculations
    int gradelevel = 0.0588 * L - 0.296 * S - 15.8

}