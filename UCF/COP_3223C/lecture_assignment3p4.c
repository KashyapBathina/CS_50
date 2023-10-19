#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 10/18/23
    purpose: This programs makes an array of 1000 elements and assigns them random numbers
    between 1-6 representing sides of a die; then uses array, for loop, and if statements to find how many
    counts of each number there is (1,2,3..etc.) and then prints # of times each side appears in array.
*/

int main(void) {
    //
    int index, arr[10], count[6] = {};

    // seeding the rand number to prevent repeated occurences
    srand(time(NULL));

    //
    for (index = 0; index < 10; index++) {
        arr[index] = rand() % 6 + 1;
        printf("%d", arr[index]);
    }

    //
    for (index = 0; index < 10; index++) {
        if (arr[index] == 1) count[arr[index]-1]++;
        else if (arr[index] == 2) count[arr[index]-1]++;
        else if (arr[index] == 3) count[arr[index]-1]++;
        else if (arr[index] == 4) count[arr[index]-1]++;
        else if (arr[index] == 5) count[arr[index]-1]++;
        else count[5]++;
    }

    //
    for (index = 0; index < 6; index++) {
        printf("%d occurs %d times\n", (index + 1), count[index]);
    }

    return 0;
}