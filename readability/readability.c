#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string text = get_string("Text: ");

    // letters
    int Letters = strlen(text);
    printf("%i letters\n", Letters);

    // sentences
    int Sentences = 0;
    while (text[Sentences] == '.')
    {
        Sentences++;
    }
    printf("%i sentences\n", Sentences);
}