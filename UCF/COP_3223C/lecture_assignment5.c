#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define SIZE 2



/*Purpose:*/


// creating struct for hand
struct hand {
    int suitsInHand[4];
    int facesInHand[13];
};

// declaring functions
void dealHand(struct hand *set);
void analyzeHand(struct hand *set);
void declareHand(struct hand *set);
void announceWinner(struct hand *set);


// main function
int main (void) {
    struct hand *set = (struct hand*) malloc(SIZE * sizeof(struct hand));

    dealHand(set);
    analyzeHand(set);
    declareHand(set);
    announceWinner(set);
}

void dealHand(struct hand *set) {
    char suits[4][10] = {"Hearts", "Clubs", "Diamonds", "Spades"};
    char faces[13][10] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};

    srand(time(NULL));
    for (int i=0;i<SIZE;i++) {
        printf("Hand #%d: \n", i+1);
        for (int j=0;j<5;j++) {
            int suitNum = rand() % 4 + 1;
            set[i].suitsInHand[suitNum-1]++;
            int faceNum = rand() % 13 + 1;
            set[i].facesInHand[faceNum-1]++;
            printf("%s of %s\n", suits[suitNum-1], faces[faceNum-1]);
        }
        printf("\n");
    }
}

void analyzeHand() {
    for (int i=0;i<SIZE;i++) {
        int num_consec = 0;
        int rank, suit;

        straight = FALSE;
        flush = FALSE;
        four = FALSE;
        three = FALSE;
        pairs = 0;

        // check for flush – 5 cards of the same suit
        for (suit = 0; suit < SUITS; suit++)
            if (suitsInHand[suit] == 5)
            flush = TRUE;

        // check for straight – eg. One each of 5,6,7,8,9
        // locate the first card
        rank = 0;
        while (facesInHand[rank] == 0)
            rank++;

        // count the consecutive non-zero faces
        for (; rank < FACES && facesInHand[rank]; rank++)
            num_consec++;

        if (num_consec == 5) {
            straight = TRUE;
            return;
        }

        /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
        for (rank = 0; rank < NUM_RANKS; rank++) {
            if (facesInHand[rank] == 4)
                four = TRUE;
            if (facesInHand[rank] == 3)
                three = TRUE;
            if (facesInHand[rank] == 2)
                pairs++;
        }
    }
}

