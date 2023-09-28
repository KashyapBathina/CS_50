#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int counter = 2;
    while (counter < 10) {
        counter ++;
        if ( counter < 5 ) continue;
        else if ( counter >=6 ) break;
        printf("Inside Loop");
    }
    printf("Outside Loop\n");
}