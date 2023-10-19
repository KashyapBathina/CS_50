#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: Lorem ipsum dolor sit amet
*/

int main(void) {
    //
    int index, average, total=0, arr[100];

    //
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