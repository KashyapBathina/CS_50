#include <stdio.h>

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

/* WHILE LOOP----------*/
int main() {
    char ans,temp;

    printf("Are u gae (y or n)?\n");
    scanf("%c%c",&temp,&ans);
    printf("%c",ans);

    /*
    double value, total=0;
    char answer;

    //read in the input from the user
    printf("Do you have money?\n");
    scanf("%c", &answer);


    while (answer == 'y' || answer == 'Y') {
        //Read in amount
        printf("Enter amount of donation:\n");
        scanf("%lf", &value);
        total += value;

        //See if there is any more money
        printf("Do you have any more?\n");
        scanf("%c",&answer);
    }

    printf("You have collected %.2lf!\n",total);
    */
}


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