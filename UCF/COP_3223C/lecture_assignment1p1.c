#include <stdio.h>

/* Program 1 */
int main(void) {
    // declaring variables, the sum, and the average
    long int var1, var2, var3, var4, var5;
    long int sum;
    double average;

    // reading in first input
    scanf("%ld", &var1);
    // printing out what the user entered and storing it
    printf("You entered: %ld\n", var1);

    scanf("%ld", &var2);
    printf("You entered: %ld\n", var2);

    scanf("%ld", &var3);
    printf("You entered: %ld\n", var3);

    scanf("%ld", &var4);
    printf("You entered: %ld\n", var4);

    scanf("%ld", &var5);
    printf("You entered: %ld\n", var5);

    // finding the sum of all the values entered
    sum = var1 + var2 + var3 + var4 + var5;
    // dividing the sum of the values by the # of values (5) to find average
    average = sum/5;

    // printing the sum of the values
    printf("The sum of the numbers you entered is: %ld\n", sum);
    // printing the average of the values
    printf("The average is: %.2f\n", average);
}