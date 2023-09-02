#include <stdio.h>

// Program 1
int main(void) {
    // declaring variables, the sum, and the average
    int var1, var2, var3, var4, var5;
    int sum;
    double average;

    // reading in first input
    scanf("%d", &var1);
    printf("You entered: %d\n", var1);

    scanf("%d", &var2);
    printf("You entered: %d\n", var2);

    scanf("%d", &var3);
    printf("You entered: %d\n", var3);

    scanf("%d", &var4);
    printf("You entered: %d\n", var4);

    scanf("%d", &var5);
    printf("You entered: %d\n", var5);

    sum = var1 + var2 + var3 + var4 + var5;
    average = sum/5;

    printf("The sum of the numbers you entered is: %d\n", sum);
    printf("The average is: %f\n", average);
}