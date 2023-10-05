#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*------------module 6------------------------------------------------------------------------------------------------------------*/

/*
Array:data struc that holds series of variables with the same datatype
    Gen Struct: type var name[size];
                char colors[5];
                start array with 0 and goes to 4
                int numbers[10];
                numbers[0] = 1;
                numbers[1] = 2;
    Common Mistakes:
                1. Out of bounds: happends when your index into array is invalid when yu try to reference it
                2. Tyring to assign an entire array a valus such as test_scores=7;
                3. Not recognizing the differnece between an array index and values stored in a particular index
*/

/*
int main() {
    int index, test_scores[50];

    printf("Please enter 5 test scores: ");
    for (index=0;index<5;index++) {
        scanf("%d", &test_scores[index]);
    }

    printf("Here are the scores in revers order: ");
    for (index=4;index>=0;index--) {
        printf("%d ", test_scores[index]);
    }

}
*/

#define SIZE 10
int main() {
    int index numbers[SIZE];

    srand(time(0));

}