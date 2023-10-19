#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 10/18/23
    purpose: Lorem ipsum dolor sit amet
*/

int main(void) {
    // declaring array of size 10
    int index, arr[10];

    // assigning values to indexes in array using 10 assignment operators
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;
    arr[6] = 70;
    arr[7] = 80;
    arr[8] = 90;
    arr[9] = 100;

    // using a for loop to iterate over array and print value in each index
    printf("Values in array: ");
    for (index = 0; index < 10; index++) {
        printf("%d ", arr[index]);
    }

    return 0;
}