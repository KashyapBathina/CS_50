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
int largest_int(int a, int b, int c);

int main(void) {
    //
    int A, B, C;
    printf("Input 3 Integers: ");
    scanf("%d%d%d", &A, &B, &C);

    //
    int largestInt = largest_int(A, B, C);
    printf("Largest Value: %d\n", largestInt);
}

//
int largest_int(int a, int b, int c) {
    //
    if (a>=b && a>=c) return a;
    else if (b>=a && b>=c) return b;
    else return c;
}
