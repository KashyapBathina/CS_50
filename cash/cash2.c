#include <stdio.h>
#include <cs50.h>
int get_cents(void)
int main(void)

{
    int cents
    do
    {
        cents = get_int("Enter your change"\n);
    }
    while ( cents <= 0)

    int coins = 0
    while (int cents > 25)
        {
            cents = cents - 25;
            coins ++;
        }
    while (int cents > 10)
        {
            cents = cents - 10
            coins++
        }
    while (int cents > 5)
        {
            cents = cents - 5
            coins++
        }
    while (int cents > 1)
        {
            cents = cents - 1
            coins++
        }

        printf("You will need at least %i", coins);
}