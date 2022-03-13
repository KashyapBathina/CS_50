#include <cs50.h>
#include <stdio.h>
#include <string.h>

int calculate_length(void);
int calculate_sentences(void);

int main(void)
{
    string text = get_string("Text: ");

    int L = calculate_length();

    int S = calculate_sentences();

    int GradeLevel = 0.0588 * L - 0.296 * S - 15.8;
    printf("%i\n", GradeLevel);
}

int calculate_length(void)
{
    int L = 0;
    string text = text;
    while isalpha(char text);
    {
        L++;
    }
    return L;
    L = L + 1;
    return L;
    L = L/100;
    return L;
}

int calculate_sentences(void)
{
    string text = text
    int S = 0;
    while (text[s] != '.' || '!' || '?')
    {
        S++
    }
    return S;
    S = S / 100;
    return S;
}