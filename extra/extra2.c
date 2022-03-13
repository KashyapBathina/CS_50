#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("name: ");

    int i = 0;
    while (name[i] != '\0')
    {
        i ++;
    }
    printf("%i\n", i);
}


int calculate_sentences(void)
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