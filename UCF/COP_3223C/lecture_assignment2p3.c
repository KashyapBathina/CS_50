#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: Lorem Ipsum Dolor
*/

int main() {
    //
    int myRandomNumber;
    srand(time(NULL));

    //
    myRandomNumber = rand();

    //
    printf("%d\n", myRandomNumber);

    //
    if ((myRandomNumber % 2) == 0) printf("The number is Even\n");
    else printf("The number is Odd\n");

    //
    if ((myRandomNumber % 3) == 0) printf("The number is divisible by 3\n");
    else printf("The number is NOT divisible by 3\n");

    //
    if ((myRandomNumber % 10) == 0) printf("The number is divisible by 10\n");
    else printf("The number is NOT divisible by 10\n");

    return 0;
}