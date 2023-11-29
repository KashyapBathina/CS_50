#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define SIZE 2
#define TRUE 1
#define FALSE 0


/*
    name: Kashyap Bathina
    date: 11/6/23
    purpose: This programs takes in three integers and passes them through
    a function which returns the largest of the three using if statements.
    Then returns that number to main and prints it.
*/


// creating struct for hand includes: array for suits and faces,
// and whether hand straight, flush, four, three, # pairs, and the total value respect to other hands
struct hand {
    int suitsInHand[4];
    int facesInHand[13];
    int straight, flush, four, three, pairs;
    int handValue;
};

// declaring functions that all take in a pointer to struct hand
void dealHand(struct hand *set);
void analyzeHand(struct hand *set);
void declareHand(struct hand *set);
void announceWinner(struct hand *set);


// main function
int main (void) {
    // initializing struct array with malloc of size declared SIZE x size of our hand struct
    struct hand *set = (struct hand*) malloc(SIZE * sizeof(struct hand));

    // calling functions for dealing, analyze, declaring, and annoucning by passing in pointer to struct array
    dealHand(set);
    analyzeHand(set);
    declareHand(set);
    announceWinner(set);

}

// this function deals a random hand such that it cannot be repeated and only 4 cards per rank, each with a differnt face
void dealHand(struct hand *set) {
    // creating a string array for the available suits and the available faces
    char suits[4][10] = {"Hearts", "Clubs", "Diamonds", "Spades"};
    char faces[13][10] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    // creating an array that is a, sort-of, cross product of the two past arrays to graph the total # of cards available
    int usedCards[4][13] = {0};

    // seeding the rand number to prevent repeated occurences
    srand(time(NULL));
    for (int i=0;i<SIZE;i++) {
        // printing hand # and declaring variables, then creating a for loop to iterate function over all hands in the struct array

        printf("Hand #%d: \n", i+1);
        int suitNum, faceNum;
        for (int j=0;j<5;j++) {
            // a do-while loop that creates a random suit and face array index that HAS NOT been dealt yet by checking if value in index
            do {
                // random int 0-3 and 0-13
                suitNum = rand() % 4;
                faceNum = rand() % 13;
            }
            while (usedCards[suitNum][faceNum] == 1);

            // marking usedCards array to signal that card is dealt, so not repeated, and updating array in struct to indicate which face and suit and printing
            usedCards[suitNum][faceNum] = 1;
            set[i].suitsInHand[suitNum]++;
            set[i].facesInHand[faceNum]++;
            printf("%s of %s\n", suits[suitNum], faces[faceNum]);
        }
        printf("\n");
    }
}

// this function does the intermediary checks to establish what the hand is
void analyzeHand(struct hand *set) {
    // creating a for loop to iterate function over all hands in the struct array
    for (int i=0;i<SIZE;i++) {
        // initializing variables and setting our indicators in struct hand to base/default values
        int num_consec = 0;
        int suit, face;

        set[i].straight = FALSE;
        set[i].flush = FALSE;
        set[i].four = FALSE;
        set[i].three = FALSE;
        set[i].pairs = 0;

        // check for flush – 5 cards of the same suit
        for (suit = 0; suit < 4; suit++)
            if (set[i].suitsInHand[suit] == 5)
            set[i].flush = TRUE;

        // check for straight – eg. One each of 5,6,7,8,9
        // locate the first card
        face = 0;
        while (set[i].facesInHand[face] == 0)
            face++;

        // count the consecutive non-zero faces
        for (; face < 13 && set[i].facesInHand[face]; face++)
            num_consec++;

        if (num_consec == 5) {
            set[i].straight = TRUE;
            return;
        }

        // check for 4-of-a-kind, 3-of-a-kind, and pairs
        for (face = 0; face < 13; face++) {
            if (set[i].facesInHand[face] == 4)
                set[i].four = TRUE;
            if (set[i].facesInHand[face] == 3)
                set[i].three = TRUE;
            if (set[i].facesInHand[face] == 2)
                set[i].pairs++;
        }
    }
}

// this function declares what type of hand the players have
void declareHand(struct hand *set) {
    // creating a string array that stores the names of all types of hands in poker
    char hands[10][20] = {"HIGH CARD", "PAIR", "TWO PAIR", "THREE OF A KIND", "STRAIGHT", "FLUSH",
                        "FULL HOUSE", "FOUR OF A KIND", "STRAIGHT FLUSH", "ROYAL FLUSH"};

    // creating a for loop to iterate function over all hands in the struct array
    for (int i=0;i<SIZE;i++) {
        // printing hand # and intializing hand value (way to measure worth of hands) to zero
        printf("Hand #%d: ", i+1);
        set[i].handValue = 0;

        // checking if royal flush
        if (set[i].straight==TRUE && set[i].flush==TRUE) {
            // royal flush is ten, J, Q, K, & A; checking faces array and seeing if hand contains all 5 of these faces
            int royalFlush = 0;
            for (int j=8;j<13;j++) {
                if (set[j].facesInHand[j]==1)
                    royalFlush++;
            }

            // if 
            if (royalFlush==5) {
                set[i].handValue = 10;
                printf("You have a %s!\n", hands[set[i].handValue-1]);
                continue;
            }
        }
        // checking if straight flush
        else if (set[i].straight==TRUE && set[i].flush==TRUE) {
            set[i].handValue = 9;
            printf("You have a %s!\n", hands[set[i].handValue-1]);
            continue;
        }

        // checking if four of a kind
        else if (set[i].four==TRUE) {
            set[i].handValue = 8;
            printf("You have a %s!\n", hands[set[i].handValue-1]);
            continue;
        }

        // checking if full house
        else if (set[i].three==TRUE && set[i].pairs==1) {
            set[i].handValue = 7;
            printf("You have a %s!\n", hands[set[i].handValue-1]);
            continue;
        }

        // checking if flush
        else if (set[i].flush==TRUE) {
            set[i].handValue = 6;
            printf("You have a %s!\n", hands[set[i].handValue-1]);
            continue;
        }

        // checking if straight
        else if (set[i].straight==TRUE) {
            set[i].handValue = 5;
            printf("You have a %s!\n", hands[set[i].handValue-1]);
            continue;
        }

        // checking if three of a kind
        else if (set[i].three==TRUE) {
            set[i].handValue = 4;
            printf("You have a %s!\n", hands[set[i].handValue-1]);
            continue;
        }

        // checking if two pair
        else if (set[i].pairs==2) {
            set[i].handValue = 3;
            printf("You have a %s!\n", hands[set[i].handValue-1]);
            continue;
        }

        // checking if pair
        else if (set[i].pairs==1) {
            set[i].handValue = 2;
            printf("You have a %s!\n", hands[set[i].handValue-1]);
            continue;
        }

        // if not above, high card
        else {
            set[i].handValue = 1;
            printf("You have a %s!\n", hands[set[i].handValue-1]);
            continue;
        }
    }
}

void announceWinner(struct hand *set) {
    if (set[0].handValue==set[1].handValue) {
        for (int i=12;i>=0;i--) {
            if (set[0].facesInHand[i]>set[1].facesInHand[i]) {
                printf("Hand #1 Wins!\n");
                return;
            }
            else if (set[0].facesInHand[i]>set[1].facesInHand[i]) {
                printf("Hand #2 Wins!\n");
                return;
            }
        }
        printf("It's a Tie!\n");
    }
    else if (set[0].handValue > set[1].handValue)
        printf("Hand #1 Wins!\n");
    else
        printf("Hand #2 Wins!\n");
}
