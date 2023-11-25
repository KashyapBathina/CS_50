#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define SIZE 2
/*
    name: Kashyap Bathina
    date: 11/6/23
    purpose: This programs takes in three integers and passes them through
    a function which returns the largest of the three using if statements.
    Then returns that number to main and prints it.
*/


// declaring functions
void dealHand(int *suitsInHand, int *facesInHand);
void analyzeHand(int a, int b, int c);
void declareHand(int a, int b, int c);


// creating struct for hand
struct hand {
    int suitsInHand = (int*) malloc(4*sizeof(int));
    int facesInHand = (int*) malloc(13*sizeof(int));
}


// main function
int main (void) {
    //
    struct hand set[SIZE];

    for (int i=0;i<SIZE;i++) {

    }
    int *suitsInHand, *facesInHand;
    suitsInHand = (int*) malloc(4*sizeof(int));
    facesInHand = (int*) malloc(13*sizeof(int));

    dealHand(suitsInHand, facesInHand);

}

void dealHand(int *suitsInHand, int *facesInHand) {
    char suits[4][10] = {"Hearts", "Clubs", "Diamonds", "Spades"};
    char faces[13][10] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};

    srand(time(NULL));
    printf("Hand #1: \n");

    for (int i=0;i<5;i++) {
        //generate rand num where 0<=x<N
        int suitNum = rand() % 4 + 1;
        suitsInHand[suitNum-1]++;
        int faceNum = rand() % 13 + 1;
        facesInHand[faceNum-1]++;
        printf("%s of %s\n", suits[suitNum-1], faces[faceNum-1]);
    }
}
