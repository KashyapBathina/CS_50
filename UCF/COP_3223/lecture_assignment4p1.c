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

// declaring function average
double average(int arr[], int size);

int main(void) {
    // declaring variables, will declare array after we know size
    int arraySize;

    // asking user for size of array, saving it, and declaring array of said size
    printf("How many elements in array: ");
    scanf("%d", &arraySize);
    int array[arraySize];

    // intializing array through user input for each index
    printf("Enter elements with spaces: ");
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }

    // calling function average with paramater array and the size of array and the printing it
    double avrg = average(array, arraySize);
    printf("Average of Array is: %.2lf\n", avrg);

    return 0;
}

// this function takes in a array and size of array and returns the average of the values in array
double average(int arr[], int size) {
    // declaring and intialing a variable to zero and then use for loop to find sum of all elements in array
    double avrg = 0;
    for (int index = 0; index < size; index++) {
        avrg += arr[index];
    }

    // returning the total sum of the array divided by size of array to get average
    return avrg/size;
}
