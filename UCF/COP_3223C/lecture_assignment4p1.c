#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 11/6/23
    purpose: This programs lorem ipsum
*/

//
double average(int arr[], int size);

int main(void) {
    //
    int array[], arraySize,

    //
    printf("How many elements in array: ");
    scanf("%d", arraySize);
    array[arraySize];

    printf("Enter elements with spaces: ");
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", array[i]);
    }

    //
    double avrg = average(array, arraySize);

    //
    printf("Average of Array is: %.2lf\n", avrg);

    return 0;
}

//
double average(int arr[], int size) {
    //
    double avrg = 0;
    for (int index = 0; index < size; index++) {
        avrg += arr[index];
    }

    return avrg/size;
}
