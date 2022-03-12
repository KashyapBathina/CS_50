#include <cs50.h>
#include <stdio.h>
#include <string.h>

int calculate_length(void);
int calculate_sentence(void);

int main(void)
{
    string text = get_string("Text: ");

    int L = calculate_length();

    int S = calculate_sentences();

    Grade Level = 0.0588 * L - 0.296 * S = 15.8;
    printf("%i", Grade Level);
}

int L calculate_length(text)
{
    int L = 0;
    int isspace(char space)
    {
        L++;
    }
    return L;
    L = L + 1;
    return L;
    L = L/100;
    return L;
}

int S calculate_sentences(text)
{
    int S = 0;
    while (text[s] != '.' || '!' || '?')
    {
        S++
    }
    return S;
    S = S / 100;
    return S;
}