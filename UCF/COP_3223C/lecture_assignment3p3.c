#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 10/18/23
    purpose: This program 
*/

int main(void) {
    //
    int index, average, total=0, arr[100];

    // seeding the rand number to prevent repeated occurences
    srand(time(NULL));

    //
    for (index = 0; index < 100; index++) {
        arr[index] = rand() % 100 + 1;
        total += arr[index];
    }

    //
    average = (double) total / 100;
    printf("Average of 100 Random Numbers: %d\n", average);

    return 0;
}