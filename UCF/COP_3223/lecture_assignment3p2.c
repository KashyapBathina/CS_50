#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 10/18/23
    purpose: This program makes and array of size 100 and assigns
    the elements random numbers using a ran() function and then
    prints them in a 10 by 10 grid by using a for loop to print
    out ten values and then creating a new line (using if) after 10th
    value (using % to find div by 10).

*/

int main(void) {
    // declaring index and double array of size 100
    int index;
    double arr[100];

    // seeding the rand number to prevent repeated occurences
    srand(time(NULL));

    // using a for loop to iterate over array and assign each index a random values from 1 to 50
    for (index = 0; index < 100; index++) {
        arr[index] = (double)(rand() % 100 + 1) / 2;
    }

    // using a for loop to print out the values
    for (index = 0; index < 100; index++) {
        //creating new line every ten iterations using % 10 so that each row has ten elements to create a 10X10 grid.
        if ((index!=0) && (index % 10 == 0)) {
            printf("\n");
        }
        // spacing out the elements with 6 spaces between each with each num rounded to the 100th decimal place
        printf("%.2lf      ", arr[index]);
    }

    return 0;
}