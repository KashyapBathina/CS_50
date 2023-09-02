#include <stdio.h>

// Program 1
int main(void) {
    // declaring variables, the sum, and the average
    int var1, var2, var3, var4, var5;
    int sum;
    double average;

    // reading in first input
    scanf("%d", var1);
    printf("You entered: %d", &var1);

    scanf("%d", var2);
    printf("You entered: %d", &var2);

    scanf("%d", var3);
    printf("You entered: %d", &var3);

    scanf("%d", var4);
    printf("You entered: %d", &var4);

    scanf("%d", var5);
    printf("You entered: %d", &var5);

    sum = var1 + var2 + var3 + var4 + var5;
    average = sum/5;

    printf("The sum of the numbers you entered is: %d", &sum);
    printf("The average is: %d", &average);
}