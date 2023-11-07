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
    int array[] = {78, 90, 56, 99, 88, 68, 92};

    //
    double avrg = average(array, sizeof(array)/sizeof(array[0]));

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
