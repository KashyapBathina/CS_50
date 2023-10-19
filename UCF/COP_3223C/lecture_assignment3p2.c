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
    // declaring index and double array of size 100
    int index;
    double arr[100];

    // seeding the rand number to prevent repeated occurences
    srand(time(NULL));

    for (index = 0; index < 100; index++) {
        arr[index] = (double)(rand() % 100 + 1) / 2;
    }

    //
    for (index = 0; index < 100; index++) {
        //
        if (index % 10 == 0) {
            printf("\n");
        }
        printf("%.2lf      ", arr[index]);
    }

    return 0;
}