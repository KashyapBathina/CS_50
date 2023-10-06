#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: This program generates a random number and
    prints the variable, whether it is even or odd, whether
    it is divisible by 3, and whether it is divisible by 10 all
    by making use of modulus and boolean logic.
*/

int main() {
    // declaring the random number and seeding the rand int to prevent repeated occurences
    int myRandomNumber;
    srand(time(NULL));

    // generating a random number
    myRandomNumber = rand();

    // printing that random number
    printf("%d\n", myRandomNumber);

    // printing whether the number is even or odd by see if % 2 is = 0
    if ((myRandomNumber % 2) == 0) printf("The number is Even\n");
    else printf("The number is Odd\n");

    // printing whether the number is divisible by 3 by seeing if % 3 is = 0
    if ((myRandomNumber % 3) == 0) printf("The number is divisible by 3\n");
    else printf("The number is NOT divisible by 3\n");

    // printing whether the number is divisible by 10 by seeing if % 10 is = 0
    if ((myRandomNumber % 10) == 0) printf("The number is divisible by 10\n");
    else printf("The number is NOT divisible by 10\n");

    return 0;
}