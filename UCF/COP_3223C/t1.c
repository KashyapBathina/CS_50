#include <stdio.h>

// constant, data type, name, value
const int YARDS_IN_MILE = 1760;

// another way to define constant
#define FEET_IN_YARD 3

int main(void) {
    int feet_in_mile, num_miles;
    feet_in_mile = YARDS_IN_MILE * FEET_IN_YARD;

    printf("How many miles did you run?\n");
    scanf("%d", &num_miles)

    printf("You ran a total of %d feet. \n", feet_in_mile*num_miles);
    return 0;
}