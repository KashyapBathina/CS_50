#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: Lorem ipsum dolor sit amet
*/

int main(void) {
    //
    int index, arr[1000], count[6] = {};

    //
    srand(time(NULL));

    //
    for (index = 0; index < 1000; index++) {
        arr[index] = rand() % 6 + 1;
    }

    //
    for (index = 0; index < 1000; index++) {
        if (arr[index] == 1) count[0]++;
        else if (arr[index] == 2) count[1]++;
        else if (arr[index] == 3) count[2]++;
        else if (arr[index] == 4) count[3]++;
        else if (arr[index] == 5) count[4]++;
        else count[5]++;
    }

    //
    for (index = 0; index < 6; index++) {
        printf("%d occurs %d times\n", (index + 1), count[index]);
    }

    return 0;
}