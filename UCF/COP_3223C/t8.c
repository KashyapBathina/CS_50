#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*------------module 8------------------------------------------------------------------------------------------------------------*/

#define SIZE 20
#define TESTBUBBLE 0

void printArray(int vals[], int size);
void fillArray(int vals[], int size, int max);
void swap(int vals[], int i, int j);
void move(int vals[], int maxIndex);
void simpleSort(int vals[], int size);
void bubbleSort(int vals[], int size);

int main() {
    int myVals[SIZE];
    srand(time(NULL));

    fillArray(myVals, SIZE, 100);
    printf("Original Array: ");
    printArray(myVals, SIZE);

    if (TESTBUBBLE) bubbleSort(myVals, SIZE);
    else simpleSort(myVals, SIZE);

    printf("Sorted Array: ");
    printArray(myVals, SIZE);
}



void printArray(int vals[], int size) {

}

void fillArray(int vals[], int size, int max) {

}

void swap(int vals[], int i, int j) {

}

void move(int vals[], int maxIndex) {

}

void simpleSort(int vals[], int size) {

}

void bubbleSort(int vals[], int size) {

}


