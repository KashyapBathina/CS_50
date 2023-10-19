#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 10/18/23
    purpose: This program declares and array of 100 ints and assigns them random
    values using a ran() funct and then totals them and divides by 100 to find average.
*/

int main(void) {
    // declaring vars and array of size 100
    int index, total=0, arr[100];
    double average;

    // seeding the rand number to prevent repeated occurences
    srand(time(NULL));

    // making a for loop that iterates over the array and assigns the indexes random numbers
    // and then adds that number to the total which starts at 0
    for (index = 0; index < 100; index++) {
        arr[index] = rand() % 100 + 1;
        total += arr[index];
    }

    // finds and prints the average of the elements in the array by dividing total by 100 (total num)
    average = (double) total / 100;
    printf("Average of 100 Random Numbers: %lf\n", average);

    return 0;
}