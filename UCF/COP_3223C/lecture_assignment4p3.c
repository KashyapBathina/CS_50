#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 11/6/23
    purpose: This programs takes in three integers and passes them through
    a function which returns the largest of the three using if statements.
    Then returns that number to main and prints it.
*/

// declaring function
int largest_int(int a, int b, int c);

int main(void) {
    // declaring three integers, asking user to input 3 integers, and then store them
    int A, B, C;
    printf("Input 3 Integers: ");
    scanf("%d%d%d", &A, &B, &C);

    // passing the 3 integers into function and printing out result
    int largestInt = largest_int(A, B, C);
    printf("Largest Value: %d\n", largestInt);
}

// this function takes in 3 integers and returns the largest of three
int largest_int(int a, int b, int c) {
    // using if statments to determine largest int and then returning it
    if (a>=b && a>=c) return a;
    else if (b>=a && b>=c) return b;
    else return c;
}
