#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*------------module 8------------------------------------------------------------------------------------------------------------*/

/*
    Strings:
        Char Array: char arr[20]; word[0] = 'h' . . . word[5] = '\0';
        String.h Library:
            strcat = string concatenate; append words together using +;
            strcmp = compare whether 2 strings are same and have same values
            syrcpy = add a string to another as a copy
            strlen = returns # of characters
*/

/*
#define SIZE 20
#define TESTBUBBLE 0
void Print_Array(int values[], int length);
void Fill_Array(int values[], int length, int max);
void swap(int values[], int i, int j);
void Move_Max(int values[], int max_index);
void Simple_Sort(int values[], int length); // or selection sort
void Bubble_Sort(int values[], int length);



int main() {
    int my_vals[SIZE];
    srand(time(NULL));
    Fill_Array(my_vals, SIZE, 100);

    printf("Original array : ");
    Print_Array(my_vals, SIZE);

    if (TESTBUBBLE) Bubble_Sort(my_vals, SIZE);
    else Simple_Sort(my_vals, SIZE);

    printf("Sorted array : ");
    Print_Array(my_vals, SIZE);
    return 0;
}

void Bubble_Sort(int values[], int length) {
    int i, j;
    // i is the slot we are filling with the maximum.
    for (i=length-1; i>0; i--)
    // j loops through adjacent pairs upto i, swapping if out of order.
    // index i will store the highest remaining array item.
    for (j=0; j<i; j++)
    if (values[j] > values[j+1])
    swap(values, j, j+1);
}

void Simple_Sort(int values[], int length) {
    int i;
    for (i=length-1; i> 0; i--) {
        Move_Max(values, i);
    }
}

void Move_Max(int values[], int max_index) {
    int max, i, maxi;
    max = values[0]; // Set up current max and max index.
    maxi = 0;
    for (i=1; i<=max_index; i++) {
        if (max < values[i]) {
            max = values[i];
            maxi = i;
        }
    }
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
*/

int main() {
    char first[30], last[30];
    char wholeName[60];

    printf("Enter first name: ");
    scanf("%s", first);
    printf("Enter last name: ");
    scanf("%s", last);

    //print alphabetical first
    if strcmp(first, last) < 0
    printf("Your first name comes first alphabetically\n");
    else if strcmp(first, last) == 0
    printf("Interesting!);
    else printf("Your last name comes first alphabetically\n");

    printf("first = )


}
