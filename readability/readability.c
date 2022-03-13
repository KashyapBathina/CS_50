#include <cs50.h>
#include <stdio.h>
#include <string.h>

int calculate_length(void);
int calculate_sentences(void);

int main(void)
{
    string text = get_string("Text: ");

    // letters
    int L = 0;
    int count_letters(string text);
        L++;
    return L;
    L = L + 1;
    return L;
    L = L/100;
    return L;

    // sentences
    int S = 0;
    while (text[S] == '.' || text[S] == '!' || text[S] == '?')
    {
        S++;
    }
    return S;
    S = S / 100;
    return S;

    //prototype
    printf("%i\n", L);
    printf("%i\n", S);
