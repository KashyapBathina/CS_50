#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

/*------------module 8------------------------------------------------------------------------------------------------------------*/

/*
    Struct: array that allows you to store related variables of the same type in same struct, usually put a declaration after #defines
        Gen struct: struct name {
                dataType var1;
                dataType var2;
            }
*/

struct block {
    int num;
    char letter;
    char color[15];
}

// where a & b are instances of the block type
#define SIZE 3
void setUp(struct block *b);
void printBlock(struct block b);
int equal(struct block a, struct block b);


int main() {
    int i, j;
    struct block mySet[SIZE];

    for (i=0;i<SIZE;i++) {
        setUp(&mySet[i]);
        printBlock(mySet[i]);
    }

    for (i=0;i<SIZE;i++) {
        for (j=i+1;j<SIZE;j++) {
            if (equal(mySet[i],myset[j])) {
                printf("Blocks %d and %d are identical\n", i, j);
            }
        }
    }

    for (i=0;i<SIZE;i++) {
        printBlock(mySet[i]);
    }

    return 0;
}

void setUp(struct block *b) {
    printf("Enter number, letter, and color\n");
    scanf("%d %c %s:m &b-)
}

void printBlock(struct block b) {

}

int equal(struct block a, struct block b) {

}



