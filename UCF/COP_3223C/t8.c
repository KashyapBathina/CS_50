#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*------------module 8------------------------------------------------------------------------------------------------------------*/

#define SIZE 20
#define TESTBUBBLE 0
void Print_Array(int values[], int length);
void Fill_Array(int values[], int length, int max);
void swap(int values[], int i, int j);
void Move_Max(int values[], int max_index);
void Simple_Sort(int values[], int length);
void Bubble_Sort(int values[], int length);
int main() {
int my_vals[SIZE];
srand(time(NULL)); // Initalize the random number generator.
// Initialize the array with random values and print these.
Fill_Array(my_vals, SIZE, 100);
printf("original array : ");
Print_Array(my_vals, SIZE);
// Sort this array with the desired algorithm and print the result.
if (TESTBUBBLE)
Bubble_Sort(my_vals, SIZE);
else
Simple_Sort(my_vals, SIZE);
printf("sorted array : ");
Print_Array(my_vals, SIZE);
return 0;
}
// Pre-condtions: the second parameter is the length of the array
// specified by the first parameter.
// Post-conditions: The first parameter will be sorted from lowest to
// highest values, using a bubble sort.
void Bubble_Sort(int values[], int length) {
int i, j;
// i is the slot we are filling with the maximum.
for (i=length-1; i>0; i--)
// j loops through adjacent pairs upto i, swapping if out of order.
// We are guaranteed at the end of this loop that index i will store
// the highest remaining array item.
for (j=0; j<i; j++)
if (values[j] > values[j+1])
swap(values, j, j+1);
}
// Pre-condtions: the second parameter is the length of the array
// specified by the first parameter.
// Post-conditions: The first parameter will be sorted from lowest to
// highest values.
void Simple_Sort(int values[], int length) {
int i;
// Find the largest value and put that in its correct location,
// successively.
for (i=length-1; i> 0; i--) {
Move_Max(values, i);
}
}
// Pre-conditions: max_index is a valid index to the array values.
// Post-condition: The largest value in the array stored in between
// indexes 0 and max_index inclusive will be swapped
// into the max_index location of the array.
void Move_Max(int values[], int max_index) {
int max, i, maxi;
max = values[0]; // Set up current max and max index.
maxi = 0;
// Loop through all possible candidates, updating the max and the
// index that stores that maximum, if necessary.
for (i=1; i<=max_index; i++) {
if (max < values[i]) {
max = values[i];
maxi = i;
}
}
// Swap the maximum value in range to the appropriate spot in the array.
swap(values, maxi, max_index);
}

void swap(int values[], int i, int j) {
    int temp;
    temp = values[i];
    values[i] = values[j];
    values[j] = temp;
}

void Print_Array(int values[], int length) {
    int i;
    for (i=0; i<length; i++)
        printf("%d ", values[i]);
    printf("\n");
}

void Fill_Array(int values[], int length, int max) {
    int i;
    for (i=0; i<length; i++)
        values[i] = (rand()%max) + 1;
}
