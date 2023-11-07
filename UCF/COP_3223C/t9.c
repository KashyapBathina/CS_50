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

    Dynamic Memory Allocation: more productive and efficient and has many advantages:
        1. For when we do not know how much memory we need beforehard
        2. When we want data structs w/o any limits on upper memory
        3. When you want to use memorry space more efficently
        4. Dynamic allocation creates list of insertions and deletions by manipulatinng adresses: linked lists

*/

/*
struct block {
    int num;
    char letter;
    char color[15];
};

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
            if (equal(mySet[i], mySet[j])) {
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
    scanf("%d %c %s", &(b->num), &(b->letter), &(b->color));
}

void printBlock(struct block b) {
    printf("%d %c %s", b.num, b.letter, b.color);
}

int equal(struct block a, struct block b) {
    if (a.number == b.number && a.letter == b.letter && !strcmp(a.color, b.color)) return 1;
    else return 0;
}
*/

void fun() {
    int a;
}

int main() {
    int b;
    int c[10];
}


