#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*------------module 4------------------------------------------------------------------------------------------------------------*/

/*
Loops
    Function: to repeat set of statements multiple times

    Sometimes must use break or continue:
        Break: break out of inner most loop in which break resides
        Continue: will skip following code within inner most loop with continue resides

    Types of loops:
        1. While Loop
            gen syntax: while (boolean expression) {
                            statement 1;
                            counter;
                            }

        2. For Loop
            gen syntax: for (inital statement; boolean expression; increment operator) {
                            statement 1;
                            }
            steps in loop:
                        a. exec the inital statment: i=0
                        b. evealuate the booleaexpression: i<5
                        c. if the bool is true, enter body and exec statement
                        d. do increment: i++
                        e. go back to statement b
                        f.. if false, skip body and evaluate line after

        3. Do/While Loop
            function: acts like a a while and a for but you exec the statement at least one time first before testing bool exp
            gen syntax: do
                            statement;
                        while (bool expression);
*/

/* WHILE LOOP----------
int main() {
    double value, total=0;
    char answer, dummy;

    //read in the input from the user
    printf("Do you have money?\n");
    scanf("%c", &answer);


    while (answer == 'y' || answer == 'Y') {
        //Read in amount
        printf("Enter amount of donation:\n");
        scanf("%lf", &value);
        total += value;

        //See if there is any more money
        //First %c consumes newline b/c c type does not take out whitespaces
        printf("Does anyone have any money?\n");
        scanf("%c%c",&dummy,&answer);
    }

    printf("You have collected %.2lf!\n",total);
}
*/


/* For LOOP----------
int main() {

    // “++i” is known as the pre-increment operator, which increments the value of 'i' immediately and returns the incremented value
    for (int i=1;i<=11;++i) {
        printf("%d ", i);
    }
    return 0;
}
*/

/* DO WHILE LOOP----------
int main() {
    double num, sum=0;

    //body of loop is exec at least once
    do {
        printf("Enter a number: ");
        scanf("%lf", &num);
        sum+=num;
    }
    while(num!=0);

    printf("Sum = %.2lf\n", sum);
    return 0;

}
*/

/*
int main() {
    int end=5;
    printf("Patter printing using Nested while loop");

    int i=1;
    while(i<=end) {
        printf("\n");
        int j=1;
        while(j<=i) {
            printf("%d ",j);
            j++;
        }
        i++;
    }

    printf("\n----------\n");
    return 0;
}
*/

/*
int main() {
    // init 3-d array; indexes start with 0;
    int arr[2][3][2] = { { {0,6},{1,7},{2,8} },
                        { {3,9},{4,10}, {5,11} } };

    //printing values of a 3-d array
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            for (int k=0;k<2;k++) {
                //%i is placeholder for array; index
                printf("Element at arr[%i][%i][%i]=%d\n", i,j,k,arr[i][j][k]);
            }
        }
    }

    return 0;
}
*/
void guess(int N) {
    int number, guess, num_of_guess=0;

    //seed random number to prevent same number repeating
    srand(time(NULL));

    //generate rand num
    number=rand() % N;

    printf("Guess a number between 1 and %d\n",N);

    //do while loop that works until user guesses correct number
    do {
        if(num_of_guess>9) {
            printf("\nYou Lose!\n");
            break;
        }

        scanf("%d", &guess);

        //when user guesses lower number
        if (guess<number) {
            printf("Number is lower\n");
            num_of_guess++;
        }

        //when user guesses higher number
        else if (guess>number) {
            printf("Number is higher\n");
            num_of_guess++;
        }
        else {
            printf("You guessed the correct number in %d attempts", num_of_guess);
        }
    }
    while (guess!=number);
}

//driver code
int main() {
    int N=100;
    //funct call
    guess(N);
    return 0;
}