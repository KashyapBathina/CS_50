#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define SIZE 2
#define TRUE 1
#define FALSE 0



/*Purpose:*/


// creating struct for hand
struct hand {
    int suitsInHand[4];
    int facesInHand[13];
};

// declaring functions
void dealHand(struct hand *set);
void analyzeHand(struct hand *set, int *straight, int *flush, int *four, int *three, int *pairs);
void declareHand(struct hand *set);
void announceWinner(struct hand *set);


// main function
int main (void) {
    int straight=0, flush=0, four=0, three=0, pairs=0;
    struct hand *set = (struct hand*) malloc(SIZE * sizeof(struct hand));

    dealHand(set);
    analyzeHand(set, &straight, &flush, &four, &three, &pairs);

    printf("%d", straight);
    printf("%d", flush);
    printf("%d", four);
    printf("%d", three);
    printf("%d", pairs);
    //declareHand(set);
    //announceWinner(set);
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

void analyzeHand(struct hand *set, int *straight, int *flush, int *four, int *three, int *pairs) {
    for (int i=0;i<SIZE;i++) {
        int num_consec = 0;
        int suit, face;

        straight = FALSE;
        flush = FALSE;
        four = FALSE;
        three = FALSE;
        pairs = 0;

        // check for flush – 5 cards of the same suit
        for (suit = 0; suit < 4; suit++)
            if (set[i].suitsInHand[suit] == 5)
            flush = TRUE;

        // check for straight – eg. One each of 5,6,7,8,9
        // locate the first card
        face = 0;
        while (set[i].facesInHand[face] == 0)
            face++;

        // count the consecutive non-zero faces
        for (; face < 13 && set[i].facesInHand[face]; face++)
            num_consec++;

        if (num_consec == 5) {
            straight = TRUE;
            return;
        }

        // check for 4-of-a-kind, 3-of-a-kind, and pairs
        for (face = 0; face < 13; face++) {
            if (set[i].facesInHand[face] == 4)
                four = TRUE;
            if (set[i].facesInHand[face] == 3)
                three = TRUE;
            if (set[i].facesInHand[face] == 2)
                pairs++;
        }
    }
*/
}

