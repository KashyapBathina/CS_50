#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 11/6/23
    purpose: This programs takes in an array of size n, which is chosen by the user, and
    then passes in the array and the size of the said array into a function--average. This
    function does the arithmetic for the average by totaling the values and dividing by the
    size, and returns that double back to main to be outputted.
*/

// declaring our function
double average(int arr[], int size);

int main(void) {
    // declaring our variables, will declare array after we know size
    int arraySize;

    // asking user for size of array and declaring array of said size
    printf("How many elements in array: ");
    scanf("%d", &arraySize);
    int array[arraySize];

    printf("Enter elements with spaces: ");
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }

    //
    double avrg = average(array, arraySize);
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
